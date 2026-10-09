// Actual redirect insertion and owned nonempty UPDATE_SCREEN. Original CPU
// execution is test authority only; entry producers never donate state to the
// native host. Their preparation timing precedes the measured component.
#define main eb_embedded_source_screen_reference_main
#include "native_source_screen_reference.cpp"
#undef main
#include "eb/native/entities/graphics/source_objects.hpp"
#include "eb/native/overlay_sprites.hpp"

namespace {
using entities::graphics::SourceObjectMap;
constexpr SourceObjectContext object_context{true,true,true,true,true,0x7e};
constexpr SourceScreenContext object_screen_context{true,true,true,true,0x7e,true,true};
struct ObjectOriginal : ScreenOriginal {
  using ScreenOriginal::ScreenOriginal;
  unsigned instruction_entry=0xffffffff;
  void step() {instruction_entry=cpu.program_counter;ScreenOriginal::step();}
  void drain() {
    while(bus.take_nmi()) {
      const auto pc=cpu.program_counter;const auto stack=cpu.stack_pointer;
      const auto image=bus.cartridge_image();
      require(image[0xffea]==0x47&&image[0xffeb]==0x81&&image[0x8147]==0x5c&&
          image[0x8148]==0x70&&image[0x8149]==0x81&&image[0x814a]==0xc0,
          "Original object NMI vector no longer matches linked authority");
      interrupted_sites.insert(pc);
      // Hardware interrupt stack writes are not an execution of the suspended
      // foreground opcode. Each following handler instruction gets its own PC.
      instruction_entry=0xffffffff;cpu.service_interrupt(true);++interrupts;
      bool done{};
      for(unsigned i=0;i<2000;++i) {
        if(cpu.program_counter==pc&&cpu.stack_pointer==stack){done=true;break;}
        step();
      }
      require(done,"Original NMI did not return to the interrupted object instruction");
    }
  }
  void instruction() {
    drain();require(cpu.program_counter!=returned(),"Original objects ran into WAIT");
    // Capture after arbitration and immediately before actual execution.
    step();++foreground;drain();
  }
};
struct OriginalCreatedMap {
  std::array<std::uint8_t,896> bytes;
  std::array<std::uint8_t,65536> video;
  std::array<std::uint8_t,7> dma;
  std::uint16_t origin{},pointer{},size{},bank{};
};
OriginalCreatedMap original_created_map(const GameAssets &assets,unsigned group,unsigned role) {
  const bool jp=assets.version==GameVersion::JP;
  SnesBus bus(assets.image,assets.version);MainCpu65816 cpu(bus);
  cpu.set_runtime(MainCpuRuntime::Legacy);cpu.emulation_mode=false;cpu.status_register=4;
  cpu.stack_pointer=0x1fff;cpu.direct_page=0x1e00;cpu.data_bank=0x7e;
  bus.write_byte(0x4200,0);bus.work_ram[0xd]=0x80;
  const auto invoke=[&](unsigned site,unsigned target,unsigned a=0,unsigned x=0,unsigned y=0) {
    const unsigned at=site&0x3fffff;
    require(assets.image[at]==0x22&&(assets.image[at+1]|unsigned(assets.image[at+2])<<8|
        unsigned(assets.image[at+3])<<16)==target,"Original map preparation lost its authored regional JSL");
    cpu.program_counter=site;cpu.status_register=4;cpu.accumulator=std::uint16_t(a);
    cpu.x_index=std::uint16_t(x);cpu.y_index=std::uint16_t(y);cpu.direct_page=0x1e00;cpu.data_bank=0x7e;
    for(unsigned count=0;count<100000;++count) {
      cpu.step_instruction();if(cpu.program_counter==site+4) {
        require(cpu.stack_pointer==0x1fff&&cpu.direct_page==0x1e00&&cpu.data_bank==0x7e,
            "Original map producer lost its real stack/direct-page/data-bank return");return;
      }
    }
    require(false,"Original map preparation did not return to its actual authored caller");
  };
  // Linked UNKNOWN_C4D989 reset/init call sites, not an invented trampoline.
  invoke(jp?0xc4ac68:0xc4d995,jp?0xc0925e:0xc0927c);
  invoke(jp?0xc4ac6c:0xc4d999,jp?0xc01a9c:0xc01a86);
  invoke(jp?0xc4ac76:0xc4d9a3,jp?0xc01c27:0xc01c11,0x8000);
  // Component inputs at the authored CREATE_PREPARED_ENTITY_SPRITE JSL.
  // The containing caller's earlier coordinate/role preparation is excluded.
  bus.work_ram[0x1e0e]=bus.work_ram[0x1e0f]=0;
  bus.work_ram[0x1e10]=bus.work_ram[0x1e11]=0;
  invoke(jp?0xc44290:0xc46522,jp?0xc01e5f:0xc01e49,group,35,role);
  const auto word=[&](unsigned at){return std::uint16_t(bus.work_ram[at]|unsigned(bus.work_ram[at+1])<<8);};
  OriginalCreatedMap result;result.origin=std::uint16_t(jp?0x4a04:0x467e);
  result.pointer=word((jp?0x1124:0x112e)+role*2);
  result.bank=word((jp?0x1160:0x116a)+role*2);
  result.size=word((jp?0x2d14:0x2916)+role*2);
  std::copy_n(bus.work_ram.begin()+result.origin,result.bytes.size(),result.bytes.begin());
  result.video=bus.video_ram;for(unsigned i=0;i<result.dma.size();++i)result.dma[i]=bus.read_byte(0x4300+i);
  require(result.bank==0x7e&&result.pointer>=result.origin&&result.size&&
      unsigned(result.pointer-result.origin)+unsigned(result.size)*2<=result.bytes.size(),
      "Original CREATE returned outside its real allocated map extent");
  return result;
}
template<class NativeOwner> ActorId native_created_map(NativeOwner &n,unsigned group,unsigned role,std::uint16_t x,std::uint16_t y) {
  auto &w=n.world;w.fade.force_blank(true);w.actor_graphics->reset_allocations();
  WorldActorSpec spec;spec.sprite=group;spec.script=35;
  auto creation=w.actor_graphics->begin_create(spec,{role,role+1});
  require(creation->advance(),"Native actual forced-blank Lifecycle create suspended");
  const auto id=creation->actor();creation.reset();auto &actor=w.actors.actor(id);
  actor.scripts_and_physics_enabled=false;actor.tick_callback_enabled=false;
  actor.behavior.projection=ActorProjection::Unchanged;actor.action().animation=0;
  actor.behavior.projected_x=std::int16_t(x);actor.behavior.projected_y=std::int16_t(y);
  require(w.actors.object_draws().empty()&&!w.actors.in_tick(),
      "Map preparation unexpectedly acquired a deferred actor frame");
  return id;
}
struct ObjectNative {
  NativeAudio audio;session::World world;
  std::unique_ptr<AudioFrameClock> physical;
  std::unique_ptr<SourceWorkClock> work;
  std::unique_ptr<SourceNmiWork> nmi;
  ActorId created_actor{};
  ObjectNative(const GameAssets &assets,const session::Content &content,bool fast,bool interrupt_owner=true,unsigned selected=1,bool physical_owner=true,unsigned group=1,unsigned role=0,std::uint16_t x=128,std::uint16_t y=112)
      :audio(assets.image,assets.version),world(content,audio,256) {
    audio.initialize();world.clock.interrupt_mask=0;world.bind_actor_graphics(assets.image);
    world.display.transient_memory().configure(assets.version);world.runtime->refresh_world_capture();
    world.runtime->reset_interrupt_callback();world.clock.action_scripts_disabled=1;
    // Existing semantic screen producers create the actual two retained
    // latches before binding their physical work owner; no fake publication.
    for(unsigned b=0;b<2;++b)for(unsigned i=0;i<544;++i)
      world.actor_object_display_state.buffers[b].bytes[i]=std::uint8_t(i*71+b*113+37);
    for(unsigned round=0;round<(selected==1?2u:3u);++round) {
      const unsigned b=1+(round%2);
      for(unsigned i=0;i<4;++i)world.display.staged_scroll[i]={std::uint16_t(0x4100+b*0x211+i*2*0x127),
        std::uint16_t(0x4100+b*0x211+(i*2+1)*0x127)};
      world.frame_display.update_world_screen();
    }
    // Actual semantic allocation/blank transfers precede physical binding.
    created_actor=native_created_map(*this,group,role,x,y);
    physical=std::make_unique<AudioFrameClock>(world.clock,[this]{work->request_nmi();},[]{},0,0,false);
    if(physical_owner)physical->bind_peripherals(world.peripherals);
    else world.peripherals.bind_clock(*physical);
    work=std::make_unique<SourceWorkClock>(*physical,audio,world.clock,*world.runtime,
        world.actor_object_display_state,*world.actor_object_display,world.frame_display,fast);
    audio.bind_clock(*work);
    nmi=std::make_unique<SourceNmiWork>(*world.runtime,audio,world.clock,world.session,world.frame_display,
        world.palette,world.display,world.scratch,world.fade,world.presentation,world.peripherals,SourceInterruptContext{true,true,true});
    if(interrupt_owner)work->bind_interrupt_work(*nmi);
  }
  std::unique_ptr<WorldRuntime::Operation> screen() {
    auto op=world.runtime->begin(TickKind::WorldFrame);
    for(unsigned count=0;count<100;++count)if(op->advance(1)==dialogue::Progress::Suspended) {
      require(op->service()==SceneService::ScreenUpdate,"Actual world frame did not suspend at its screen continuation");return op;
    }
    throw std::runtime_error(context+": Actual world frame did not reach UPDATE_SCREEN");
  }
};
ScreenReceipt screen_receipt(const ObjectNative &n) {
  ScreenReceipt r;const auto &w=n.world;
  for(unsigned b=0;b<2;++b){r.objects[b]=w.actor_object_display_state.buffers[b].bytes;r.buffered[b]=w.frame_display.source_buffer(b+1).scroll;}
  r.working=w.actor_object_display_state.working;r.staged=w.display.staged_scroll;r.hardware=w.display.source_hardware_scroll();
  if(w.frame_display.screen().raw_objects)r.displayed_objects=w.frame_display.screen().raw_objects->bytes;
  r.vram=w.display.vram();for(unsigned i=0;i<7;++i)r.dma[i]=w.peripherals.dma(0)[i];r.input=w.input;
  r.request=w.frame_display.display_request();r.next=w.frame_display.next_buffer_id();
  const auto &b=w.actor_object_display_state.builder;r.address=b.address;r.end=b.end_address;r.high_address=b.high_address;r.high_buffer=b.high_buffer;
  r.pending=w.clock.new_frame_started;r.counter=w.clock.frame_counter;r.timer=w.session.elapsed_timer;
  r.clocks=n.work?n.work->master_clocks():n.audio.master_clocks();r.frames=n.physical?n.physical->physical_frames():0;
  r.interrupts=n.nmi?n.nmi->completed_interrupts():n.work->completed_source_interrupts();r.polls=w.clock.input_polls;r.phase=n.physical?n.physical->phase():0;return r;
}
void same_screen(ObjectOriginal &o,const ObjectNative &n,const char *where) {
  const auto expected=screen_receipt(o),actual=screen_receipt(n);
  if(actual!=expected) {
    std::ostringstream out;out<<where<<" PC="<<std::hex<<o.cpu.program_counter<<std::dec
      <<" clocks="<<actual.clocks<<'/'<<expected.clocks<<" OAM="<<(actual.objects==expected.objects)
      <<" queues="<<(actual.working==expected.working)<<" scroll="<<(actual.buffered==expected.buffered)
      <<" hardware="<<(actual.hardware==expected.hardware)<<" DMA="<<(actual.dma==expected.dma)
      <<" VRAM="<<(actual.vram==expected.vram)<<" NMI="<<actual.interrupts<<'/'<<expected.interrupts;
    require(false,out.str());
  }
  ++checks;
}
std::unique_ptr<WorldRuntime::Operation> prepare_screen(ObjectOriginal &o,ObjectNative &n,unsigned selected,unsigned insertion,
    unsigned partial,unsigned high,unsigned pending,unsigned line,unsigned horizontal,bool enabled=true) {
  auto &w=n.world;const bool jp=o.bus.game_version()==GameVersion::JP;
  require(w.frame_display.next_buffer_id()==selected&&o.bus.work_ram[0x2e]==selected,
      "Independent real screen producers selected another drawing buffer");
  o.far(jp?0xc100dc:0xc10067,jp?0xc088a3:0xc088b1);auto operation=n.screen();
  require(o.bus.master_clocks()==n.work->master_clocks(),"Actual original/native OAM_CLEAR producer clocks differ");
  require(!partial,"Owned object insertion requires its genuine fresh CLEAR, not a partial predecessor");
  const unsigned working=jp?0x2800:0x2400;
  w.actor_object_display_state.working[2]=std::uint8_t(insertion);w.actor_object_display_state.working[3]=std::uint8_t(insertion>>8);
  o.put(working+2,insertion);
  for(unsigned i=0;i<4;++i){w.display.staged_scroll[i]={std::uint16_t(0x8713+i*0x137),std::uint16_t(0xa229+i*0x251)};
    o.put(0x31+i*4,w.display.staged_scroll[i].x);o.put(0x33+i*4,w.display.staged_scroll[i].y);}
  // Preserve the adjacent display-ID byte using the existing word producer.
  for(unsigned i=0;i<high*256;++i)w.frame_display.request_retained_screen();
  require(!pending||w.frame_display.pending_display_id()==pending,"Declared pending buffer disagrees with the genuine retained producer");
  o.put(0x2c,w.frame_display.display_request());
  w.clock.frame_counter=0xfe;o.bus.work_ram[2]=0xfe;w.clock.new_frame_started=0x7f;o.bus.work_ram[0x2b]=0x7f;
  w.session.elapsed_timer=0x1234ffff;o.put(0xa7,w.session.elapsed_timer);o.put(0xa9,w.session.elapsed_timer>>16);
  w.input.state={0x3000,0x8400};w.input.held={0x1234,0x4321};w.input.pressed={0xabcd,0xefab};w.input.repeat_timer={9,7};w.input.player_activity=0xffff;
  for(unsigned i=0;i<2;++i){o.put(0x65+i*2,w.input.state[i]);o.put(0x69+i*2,w.input.held[i]);o.put(0x6d+i*2,w.input.pressed[i]);o.put(0x71+i*2,w.input.repeat_timer[i]);}
  o.put(jp?0xa2a:0xa34,w.input.player_activity);o.put(0x20,0x851b);o.put(0xa3,w.display.transient_memory().base_address());o.put(0xa1,w.display.transient_memory().current_address());
  w.palette.upload_mode=0;o.bus.work_ram[0x30]=0;w.fade.force_blank(true);const auto fade=w.fade.state();
  o.bus.work_ram[0xd]=fade.brightness;o.bus.work_ram[0x28]=fade.step;o.bus.work_ram[0x29]=fade.delay;o.bus.work_ram[0x2a]=fade.remaining;
  o.bus.work_ram[jp?0xc9:0xcb]=w.audio.sound_queue_start();o.bus.work_ram[jp?0xc8:0xca]=w.audio.sound_queue_end();
  const auto target=std::uint64_t(262*1364)+line*1364+horizontal;
  o.cpu.program_counter=0xc0ff00;
  while(o.bus.master_clocks()<target){o.cpu.execute_instruction<0xea>(0,1);n.work->retire_source_work({2,1,0,0});}
  require(o.bus.master_clocks()==n.work->master_clocks(),"Independent physical producer warm-up differs");
  // Perform the actual hardware transition while its owner is still disabled.
  // A real warm-up retirement can enter VBlank and leave its unread latch set.
  n.physical->nmi_enabled(enabled);
  w.clock.interrupt_mask=std::uint8_t(enabled?0x80:0);w.clock.retained_hardware_interrupt_mask=w.clock.interrupt_mask;
  o.bus.write_byte(0x4200,std::uint8_t(enabled?0x80:0));o.bus.work_ram[0x1e]=w.clock.interrupt_mask;
  o.cpu.program_counter=o.call();o.cpu.status_register=4;o.cpu.data_bank=0x7e;o.cpu.direct_page=0x200;
  o.cpu.accumulator=0x1234;o.cpu.x_index=0x4567;o.cpu.y_index=0x89ab;
  const auto image=o.bus.cartridge_image();const auto at=o.call()&0x3fffff;
  require(image[at]==0x22&&(image[at+1]|unsigned(image[at+2])<<8|unsigned(image[at+3])<<16)==o.entry(),"Original regional screen call differs");
  o.audit();same_screen(o,n,"declared real entry owners");return operation;
}
struct ObjectOwners {
  ScreenReceipt screen;
  std::array<std::uint8_t,896> maps;
  std::uint16_t bank{},x{},y{},current_y{};
  std::uint8_t high_bank{};
  bool operator==(const ObjectOwners&) const=default;
};
ObjectOwners object_owners(ObjectOriginal &o,unsigned origin) {
  ObjectOwners result;result.screen=screen_receipt(o);
  std::copy_n(o.bus.work_ram.begin()+origin,result.maps.size(),result.maps.begin());
  result.bank=std::uint16_t(o.word(0xb));result.x=std::uint16_t(o.word(0x9b));
  result.y=std::uint16_t(o.word(0x9d));result.current_y=std::uint16_t(o.word(0x9f));
  result.high_bank=o.bus.work_ram[9];return result;
}
ObjectOwners object_owners(const ObjectNative &n) {
  ObjectOwners result;result.screen=screen_receipt(n);result.maps=n.world.actor_object_map_state.bytes;
  const auto &s=n.world.actor_object_display_state.scratch;
  result.bank=s.spritemap_bank;result.x=s.base_x;result.y=s.base_y;
  result.current_y=s.current_y;result.high_bank=s.high_pointer_bank;return result;
}
void same_objects(ObjectOriginal &o,const ObjectNative &n,unsigned origin,const char *where) {
  same_screen(o,n,where);const auto expected=object_owners(o,origin),actual=object_owners(n);
  if(actual!=expected) {
    std::ostringstream out;out<<where<<" object owners PC="<<std::hex<<o.cpu.program_counter
      <<" bank="<<actual.bank<<'/'<<expected.bank<<" x="<<actual.x<<'/'<<expected.x
      <<" y="<<actual.y<<'/'<<expected.y<<" currentY="<<actual.current_y<<'/'<<expected.current_y
      <<" highbank="<<unsigned(actual.high_bank)<<'/'<<unsigned(expected.high_bank)
      <<" map="<<(actual.maps==expected.maps);require(false,out.str());
  }
  ++checks;
}
struct ObjectCase {
  bool fast=true,mirrored=false,overlay=false;
  unsigned budget=1,selected=1,priority=0,group=1,insertion=0x1234,declared_link=0;
  std::uint16_t x=128,y=112;
  unsigned line=40,horizontal=100;
  std::uint8_t high_bank=0;
};
struct PreparedObjects {
  OriginalCreatedMap original;
  SourceObjectMap native;
  ActorId actor{};
  std::uint16_t pointer{};
  std::uint8_t bank{};
  std::optional<OverlayObjectMap> overlay;
  std::unique_ptr<SpriteResources> sprites;
  std::unique_ptr<OverlaySprites> overlays;
};
void declare_link(std::array<std::uint8_t,896> &pool,unsigned at,std::uint16_t target) {
  require(at+10<=pool.size(),"Declared retained linked component payload leaves its allocated pool");
  const std::array<std::uint8_t,10> payload{0x80,std::uint8_t(target),std::uint8_t(target>>8),0,0,0,0x20,0x34,0,0x80};
  std::copy(payload.begin(),payload.end(),pool.begin()+at);
}
PreparedObjects prepare_map(const GameAssets &assets,ObjectOriginal &o,ObjectNative &n,const ObjectCase &c) {
  const unsigned role=c.overlay?24:0;
  PreparedObjects p;p.original=original_created_map(assets,c.group,role);
  p.actor=n.created_actor;
  require(p.original.bytes==n.world.actor_object_map_state.bytes,
      "Independent original CREATE and actual native Lifecycle map pools differ");
  const auto record=n.world.actor_object_maps->role(role);
  require(record.pointer==p.original.pointer&&record.size==p.original.size,
      "Independent original/native creation allocation boundaries differ");
  if(c.declared_link) {
    require(!c.overlay&&!c.mirrored&&p.original.size*2>=10,
        "Declared linked component input lacks an actual creation extent");
    // These are explicitly declared retained RAM component inputs, not an
    // authored map producer. Each host derives its link from its own actual
    // allocation; neither host donates a pointer, byte or preparation time.
    const auto target=[](std::uint16_t pointer,unsigned kind){return std::uint16_t(kind==1?pointer+5:kind==2?pointer+0x400:kind==3?pointer:0xfffe);};
    declare_link(p.original.bytes,p.original.pointer-p.original.origin,target(p.original.pointer,c.declared_link));
    declare_link(n.world.actor_object_map_state.bytes,record.pointer-n.world.actor_object_maps->origin(),target(record.pointer,c.declared_link));
  }
  std::copy(p.original.bytes.begin(),p.original.bytes.end(),o.bus.work_ram.begin()+p.original.origin);
  // Only this original producer's own retained hardware output reaches its
  // own measured bus. Native allocation retained its independent real blank
  // transfers before physical binding; their earlier timing is excluded.
  o.bus.video_ram=p.original.video;
  for(unsigned i=0;i<p.original.dma.size();++i)o.bus.write_byte(0x4300+i,p.original.dma[i]);
  p.pointer=std::uint16_t(p.original.pointer+(c.mirrored?p.original.size:0));p.bank=0x7e;
  if(c.overlay) {
    // Two independent imports select the retained first authored Mushroom
    // frame. Playback is a real native producer; its predecessor timing is
    // outside this helper, and its result never supplies original RAM.
    auto &actor=n.world.actors.actor(p.actor);actor.appearance_context.overlay_flags=0x4000;
    n.world.overlays.advance_draw(p.actor);
    p.sprites=std::make_unique<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
    p.overlays=std::make_unique<OverlaySprites>(assets.image,assets.version,*p.sprites);
    const auto clip=p.overlays->clip(OverlayKind::Mushroom);
    require(!clip.empty()&&clip.front().frame.has_value(),"Actual first Mushroom overlay has no owned map");
    p.overlay=p.overlays->object_map(*clip.front().frame);
    p.pointer=std::uint16_t(p.overlay->identity);p.bank=std::uint8_t(p.overlay->identity>>16);
    p.native=n.world.actor_object_display->source_overlay_map(p.actor,0);
    require(p.native.pointer()==p.pointer&&p.native.bank()==p.bank,"Independent retained overlay selection differs");
    for(unsigned i=0;i<p.overlay->bytes.size();++i)
      require(p.native.read(std::uint16_t(p.pointer+i))==assets.image[(p.overlay->identity+i)&0x3fffff],
          "Retained native overlay escaped or changed its actual immutable original ROM bytes");
  } else p.native=n.world.actor_object_display->source_actor_map(p.actor,c.mirrored);
  require(p.native.pointer()==p.pointer&&p.native.bank()==p.bank,"Source handle selected another actual allocation");
  return p;
}
void object_audit(ObjectOriginal &o,const PreparedObjects &map) {
  o.audit();
  const auto writes=o.cpu.observe_memory_write;
  o.cpu.observe_memory_write=[&o,writes](unsigned address,std::uint8_t value) {
    const auto before=o.stores.size();writes(address,value);
    if(o.stores.size()!=before)o.stores.back().site=o.instruction_entry;
  };
  o.bus.debug_read_rom=[&o,&map](unsigned offset,std::uint8_t value) {
    const auto site=o.cpu.program_counter&0x3fffff;
    const auto table=(0xc08c65-o.delta())&0x3fffff;
    const bool content=map.overlay&&offset>=((map.overlay->identity)&0x3fffff)&&
        offset-((map.overlay->identity)&0x3fffff)<map.overlay->bytes.size();
    require((offset>=site&&offset-site<4)||offset==0xffea||offset==0xffeb||
        (offset>=table&&offset-table<8)||content,"Owned object helper read undeclared original ROM content");
    o.access_penalty+=(!o.fast||(o.cpu.program_counter>>16)==0||offset==0xffea||offset==0xffeb)?2:0;
    return value;
  };
}
void object_metadata(const ObjectOriginal &o,const ObjectNative &n,const PreparedObjects &map,const ObjectCase &c) {
  const auto image=o.bus.cartridge_image();const auto y_store=(0xc08d62-o.delta())&0x3fffff;
  require(image[y_store]==0x95&&image[y_store+1]==1,
      "Original final accepted Y store no longer has its actual STA dp,X literal");
  std::array<bool,128> accepted{};const unsigned base=c.selected==1?0x500:0x800;
  for(const auto &store:o.stores)if(store.site==0xc08d62-o.delta()) {
    require(store.address>=base+1&&store.address<base+512&&(store.address-base)%4==1,
        "Original accepted Y store left its actual selected descriptor slot");
    accepted[(store.address-base)/4]=true;
  }
  const auto &frame=n.world.actor_object_display_state.buffers[c.selected-1];
  for(unsigned slot=0;slot<128;++slot) {
    require(frame.identities[slot]==(accepted[slot]?map.actor:0),
        "Source identity was registered without the actual original accepted Y store");
    const auto &anchor=frame.anchors[slot];
    require(anchor.owned==accepted[slot]&&(!accepted[slot]||
        (anchor.x==std::int16_t(c.x)&&anchor.y==std::int16_t(c.y))),
        "Source part/overlay lost its actual declared actor anchor or attached to a clipped record");
  }
}
void object_case(const GameAssets &assets,const session::Content &content,const ObjectCase &c,std::set<unsigned> &sites) {
  context=assets.title+" OBJECT fast="+std::to_string(c.fast)+" budget="+std::to_string(c.budget)+
      " selected="+std::to_string(c.selected)+" priority="+std::to_string(c.priority)+" group="+std::to_string(c.group)+
      " mirror="+std::to_string(c.mirrored)+" overlay="+std::to_string(c.overlay)+" declaredlink="+std::to_string(c.declared_link)+" xy="+std::to_string(c.x)+":"+
      std::to_string(c.y)+" phase="+std::to_string(c.line)+":"+std::to_string(c.horizontal);
  ObjectOriginal o(assets,c.fast,c.selected);ObjectNative n(assets,content,c.fast,true,c.selected,true,c.group,c.overlay?24:0,c.x,c.y);
  auto map=prepare_map(assets,o,n,c);const bool jp=assets.version==GameVersion::JP;
  auto operation=prepare_screen(o,n,c.selected,c.insertion,0,0,c.selected^3,c.line,c.horizontal);
  auto &s=n.world.actor_object_display_state;
  s.working[0]=std::uint8_t(c.priority);s.working[1]=std::uint8_t(c.priority>>8);
  o.put(jp?0x2800:0x2400,c.priority);
  // Exact retained predecessor inputs, including the unused bank high byte.
  s.scratch={std::uint16_t(0x6d00|map.bank),0x2137,0x6b51,0xe731,c.high_bank};
  o.put(0xb,std::uint16_t(0x6d00|map.bank));o.put(0x9b,0x2137);o.put(0x9d,0x6b51);o.put(0x9f,0xe731);o.bus.work_ram[9]=c.high_bank;
  const unsigned caller=jp?0xc4a7e5:0xc4d515,target=jp?0xc08c45:0xc08c54;
  const auto at=caller&0x3fffff;
  require(assets.image[at]==0x22&&(assets.image[at+1]|unsigned(assets.image[at+2])<<8|unsigned(assets.image[at+3])<<16)==target,
      "Measured original object component lost its actual far caller");
  o.cpu.program_counter=caller;o.cpu.status_register=4;o.cpu.data_bank=0x7e;o.cpu.direct_page=0x200;
  o.cpu.accumulator=map.pointer;o.cpu.x_index=c.x;o.cpu.y_index=c.y;
  object_audit(o,map);const auto before=object_owners(n);
  const auto audio=n.audio.master_clocks(),refresh=n.work->refresh_pauses();
  same_objects(o,n,map.original.origin,"declared independent object entry");
  // External authored JSL is charged exactly once, independently of the
  // insertion component's own JSR/body/RTL, including real entry arbitration.
  o.instruction();n.work->retire_source_work({8,4,3,0});
  same_objects(o,n,map.original.origin,"actual separate caller JSL");
  auto insertion=operation->begin_source_objects(*n.work,object_context,{map.native,c.x,c.y});
  const auto called=object_owners(n);bool early{};
  require(!insertion->advance(0)&&object_owners(n)==called&&!insertion->retired_instructions(),"Zero insertion budget changed owners");
  try{operation->respond_source_objects(*insertion);}catch(const std::logic_error&){early=true;}
  require(early&&object_owners(n)==called,"Incomplete insertion receipt changed its parent");
  unsigned insertion_atoms{};
  if(c.budget==1)for(unsigned i=0;;++i) {
    require(i<1000,"Actual redirect insertion did not far return");o.instruction();++insertion_atoms;
    const bool done=insertion->advance(1);same_objects(o,n,map.original.origin,"literal insertion retirement");
    require(insertion->retired_instructions()==insertion_atoms&&done==(o.cpu.program_counter==caller+4),
        "Insertion changed atom count or actual far return");if(done)break;
  } else {
    while(o.cpu.program_counter!=caller+4){o.instruction();++insertion_atoms;}
    while(!insertion->advance(c.budget)){}
    same_objects(o,n,map.original.origin,"budgeted insertion return");require(insertion->retired_instructions()==insertion_atoms,"Insertion budget changed literal count");
  }
  require(o.cpu.stack_pointer==0x1fff&&o.cpu.direct_page==0x200&&o.cpu.data_bank==0x7e&&!(o.cpu.status_register&0x30)&&
      o.cpu.x_index==2&&o.cpu.y_index==c.y&&o.cpu.accumulator==std::uint16_t(0x6d00|map.bank),
      "Actual insertion far-return registers/widths/stack/context differ");
  const auto prepared=object_owners(n);operation->respond_source_objects(*insertion);
  bool duplicate{};try{operation->respond_source_objects(*insertion);}catch(const std::logic_error&){duplicate=true;}
  require(duplicate&&object_owners(n)==prepared,"Duplicate preparation response changed actual owners");
  o.cpu.program_counter=o.call();const auto count=o.foreground;
  auto screen=operation->begin_source_screen(*n.work,object_screen_context);
  if(c.budget==1)for(unsigned i=0;;++i) {
    require(i<20000,"Owned nonempty screen failed to return");o.instruction();const bool done=screen->advance(1);
    same_objects(o,n,map.original.origin,"literal nonempty screen retirement");object_metadata(o,n,map,c);
    require(screen->retired_instructions()==o.foreground-count&&done==(o.cpu.program_counter==o.returned()),
        "Nonempty screen skipped instructions or changed actual return");if(done)break;
  } else {
    while(o.cpu.program_counter!=o.returned())o.instruction();
    while(!screen->advance(c.budget)){}
    same_objects(o,n,map.original.origin,"budgeted nonempty screen return");object_metadata(o,n,map,c);
    require(screen->retired_instructions()==o.foreground-count,"Nonempty budget changed literal atom count");
  }
  require(o.cpu.stack_pointer==0x1fff&&o.cpu.direct_page==0x200&&o.cpu.data_bank==0x7e&&!(o.cpu.status_register&0x30),
      "Nonempty screen lost actual caller context");
  require(n.work->refresh_pauses()-refresh==o.refreshes(),"Exact composed object refresh differs");
  require(n.audio.master_clocks()-audio==n.work->master_clocks()-before.screen.clocks,"Object audio elapsed duplicated or omitted");
  require(n.world.clock.input_polls==0&&n.world.clock.publications==o.interrupts,"Objects introduced input or synthetic publication");
  const auto done=object_owners(n);operation->respond_source_screen(*screen);
  require(object_owners(n)==done&&operation->advance()==dialogue::Progress::Suspended&&operation->service()==SceneService::Frame,
      "Owned screen acknowledgement changed owners or resumed another continuation");
  sites.insert(o.interrupted_sites.begin(),o.interrupted_sites.end());
}
struct ObjectFixture {
  ObjectOriginal original;
  ObjectNative native;
  ActorId actor{};
  SourceObjectMap map;
  std::unique_ptr<WorldRuntime::Operation> operation;
  ObjectFixture(const GameAssets &assets,const session::Content &content,bool interrupt_owner=true,bool physical_owner=true)
      :original(assets,true),native(assets,content,true,interrupt_owner,1,physical_owner) {
    actor=native.created_actor;
    operation=prepare_screen(original,native,1,0x1234,0,0,0,40,100,false);
    native.world.actor_object_display_state.scratch={0x6d7e,0x2137,0x6b51,0xe731,0};
    map=native.world.actor_object_display->source_actor_map(actor);
  }
  std::unique_ptr<SourceObjectPreparation> begin() {
    return operation->begin_source_objects(*native.work,object_context,{map,128,112});
  }
};
void object_rejection(const GameAssets &assets,const session::Content &content,unsigned kind) {
  context=assets.title+" OBJECT pure rejection kind="+std::to_string(kind);
  ObjectFixture f(assets,content,kind!=16,kind!=17);auto &w=f.native.world;
  SourceObjectContext entry=object_context;auto map=f.map;
  std::unique_ptr<ObjectFixture> foreign;
  if(kind==0)entry.native_mode=false;
  if(kind==1)entry.upper_rom_caller=false;
  if(kind==2)entry.low_wram_stack=false;
  if(kind==3)entry.wide_indexes=false;
  if(kind==4)entry.decimal_clear=false;
  if(kind==5)entry.data_bank=0;
  if(kind==6)map=SourceObjectMap{};
  if(kind==7){foreign=std::make_unique<ObjectFixture>(assets,content);map=foreign->map;}
  if(kind==8)w.actor_graphics->release(0);
  if(kind==9)w.actor_object_display_state.working[0]=4;
  if(kind==10)w.actor_object_display_state.scratch.spritemap_bank=0x6d7f;
  if(kind==11)w.actor_object_display_state.scratch.high_pointer_bank=1;
  if(kind==12)w.actor_object_display_state.builder.high_buffer=0x20;
  if(kind==13)w.actor_object_display_state.working[260]=2;
  if(kind==14)w.actor_object_display_state.builder.address=0x504;
  if(kind==15){w.clock.interrupt_mask=0x90;w.clock.retained_hardware_interrupt_mask=0x90;}
  if(kind==16){f.native.physical->nmi_enabled(true);w.clock.interrupt_mask=0x80;w.clock.retained_hardware_interrupt_mask=0x80;}
  const auto before=object_owners(f.native);const auto audio=f.native.audio.master_clocks(),retired=f.native.work->completed_source_interrupts();
  const auto picture=w.runtime->scene().frame();bool rejected{};
  try{f.operation->begin_source_objects(*f.native.work,entry,{map,128,112});}catch(const std::logic_error&){rejected=true;}
  require(rejected&&object_owners(f.native)==before&&f.native.audio.master_clocks()==audio&&
      f.native.work->completed_source_interrupts()==retired&&w.runtime->scene().frame()==picture&&!w.runtime->failed(),
      "Unsupported object provenance/context mutated owners or poisoned pure admission");
}
void object_receipts(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" OBJECT exact single-use preparation/emission receipts";
  ObjectFixture f(assets,content),foreign(assets,content);
  auto leaf=f.begin();const auto before=object_owners(f.native),foreign_before=object_owners(foreign.native);
  bool second{},early_screen{},ordinary{},publication{};
  try{f.begin();}catch(const std::logic_error&){second=true;}
  try{f.operation->begin_source_screen(*f.native.work,object_screen_context);}catch(const std::logic_error&){early_screen=true;}
  try{f.operation->complete_frame({0,0});}catch(const std::logic_error&){ordinary=true;}
  try{f.operation->complete_publication();}catch(const std::logic_error&){publication=true;}
  require(second&&early_screen&&ordinary&&publication&&object_owners(f.native)==before,
      "Pending source insertion allowed a second leaf or ordinary completion bypass");
  while(!leaf->advance(1)){}
  const auto complete=object_owners(f.native);bool wrong{};
  try{foreign.operation->respond_source_objects(*leaf);}catch(const std::logic_error&){wrong=true;}
  require(wrong&&object_owners(f.native)==complete&&object_owners(foreign.native)==foreign_before,
      "Foreign actual operation consumed another completed object receipt");
  bool unacknowledged{};
  try{f.operation->begin_source_screen(*f.native.work,object_screen_context);}catch(const std::logic_error&){unacknowledged=true;}
  require(unacknowledged&&object_owners(f.native)==complete,"Unacknowledged insertion admitted emission");
  f.operation->respond_source_objects(*leaf);leaf.reset();
  auto screen=f.operation->begin_source_screen(*f.native.work,object_screen_context);
  while(!screen->advance(1)){}
  const auto emitted=object_owners(f.native);f.operation->respond_source_screen(*screen);
  bool duplicate{};try{f.operation->respond_source_screen(*screen);}catch(const std::logic_error&){duplicate=true;}
  require(duplicate&&object_owners(f.native)==emitted,"Consumed emission receipt repeated descriptor/time effects");
  require(f.operation->advance()==dialogue::Progress::Suspended&&f.operation->service()==SceneService::Frame,
      "Preparation/emission pair failed to resume the exact WAIT");
  f.operation->complete_frame({0,0});require(f.operation->advance()==dialogue::Progress::Finished,"Masked predecessor frame failed to finish");
  f.operation.reset();auto later=f.native.screen();const auto fresh=object_owners(f.native);bool stale{};
  try{later->respond_source_screen(*screen);}catch(const std::logic_error&){stale=true;}
  require(stale&&object_owners(f.native)==fresh,"Stale generation receipt consumed another actual CLEAR");
}
void object_abandonment(const GameAssets &assets,const session::Content &content,bool parent,bool complete) {
  context=assets.title+" OBJECT abandonment parent="+std::to_string(parent)+" complete="+std::to_string(complete);
  ObjectFixture f(assets,content);auto leaf=f.begin();
  if(complete){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Insertion JSR alone completed leaf");
  const auto before=object_owners(f.native);const auto audio=f.native.audio.master_clocks();bool rejected{};
  if(parent) {
    f.operation.reset();try{leaf->advance(1);}catch(const std::logic_error&){rejected=true;}
  } else {
    leaf.reset();try{f.begin();}catch(const std::logic_error&){rejected=true;}
  }
  require(rejected&&object_owners(f.native)==before&&f.native.audio.master_clocks()==audio,
      "Abandoned parent/insertion reused its generation or advanced borrowed owners");
}
void object_lost_owner(const GameAssets &assets,const session::Content &content,unsigned owner,unsigned stage) {
  context=assets.title+" OBJECT lost owner="+std::to_string(owner)+" stage="+std::to_string(stage);
  ObjectFixture f(assets,content);std::unique_ptr<SourceObjectPreparation> leaf;
  if(stage) {leaf=f.begin();if(stage==2){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Lost-owner insertion unexpectedly completed");}
  if(owner==0)f.native.nmi.reset();
  if(owner==1)f.native.world.actor_graphics->release(0);
  if(owner==2)f.native.physical.reset();
  // No API caller can pass a destroyed work clock to a factory. Only actual
  // already-admitted leaf/response borrows exercise that lifetime seam.
  if(owner==3)f.native.work.reset();
  if(owner==4)f.native.world.actor_object_display.reset();
  const auto before=object_owners(f.native);const auto audio=f.native.audio.master_clocks();
  const auto picture=f.native.world.runtime->scene().frame();bool rejected{};
  try {
    if(stage==0)leaf=f.begin();
    else if(stage==1)leaf->advance(1);
    else f.operation->respond_source_objects(*leaf);
  }catch(const std::logic_error&){rejected=true;}
  require(rejected&&object_owners(f.native)==before&&f.native.audio.master_clocks()==audio&&
      f.native.world.runtime->scene().frame()==picture,"Expired actual object/map/clock owner was dereferenced or mutated");
}
void object_generation_bypass(const GameAssets &assets,const session::Content &content,bool emitted) {
  context=assets.title+" OBJECT unchanged-cursor generation bypass emitted="+std::to_string(emitted);
  ObjectFixture f(assets,content);
  if(emitted) {
    // Genuine eager emission with zero deferred actor draws leaves the same
    // cursor/high sentinel, but consumes the actual generation disposition.
    auto image=f.native.world.actor_object_display->capture_objects(1);
    require(image&&f.native.world.actor_object_display_state.builder.address==0x500&&
        f.native.world.actor_object_display_state.builder.high_buffer==0x80,
        "Eager zero-object predecessor did not preserve the declared empty builder");
  } else f.native.world.actor_object_display->clear_photograph_prefix();
  const auto before=object_owners(f.native);bool rejected{};
  try{f.begin();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&object_owners(f.native)==before,"Unchanged builder reused an invalidated or emitted CLEAR generation");
}
void object_active_clear(const GameAssets &assets,const session::Content &content,bool completed) {
  context=assets.title+" OBJECT active exact generation cannot be cleared complete="+std::to_string(completed);
  ObjectFixture f(assets,content);auto leaf=f.begin();
  if(completed){while(!leaf->advance(1)){}f.operation->respond_source_objects(*leaf);}
  else require(!leaf->advance(1),"Actual active-clear entry unexpectedly completed");
  const auto before=object_owners(f.native);bool rejected{};
  try{f.native.work->clear_objects();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&object_owners(f.native)==before,"Actual CLEAR revoked a live inserting/prepared generation");
}
void object_all_clipped(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" OBJECT all-clipped nonempty source preparation still consumes generation";
  ObjectFixture f(assets,content);
  auto leaf=f.operation->begin_source_objects(*f.native.work,object_context,{f.map,128,0x7fff});
  while(!leaf->advance(1)){}f.operation->respond_source_objects(*leaf);
  auto screen=f.operation->begin_source_screen(*f.native.work,object_screen_context);while(!screen->advance(1)){}
  const auto &s=f.native.world.actor_object_display_state;
  require(s.builder.address==0x500&&s.builder.high_address==0x700&&s.builder.high_buffer==0x80&&
      s.working[260]==2&&s.working[261]==0,
      "All-clipped nonempty source work changed cursor or lost its retained queue entry");
  f.operation->respond_source_screen(*screen);const auto before=object_owners(f.native);bool reuse{};
  try{f.begin();}catch(const std::logic_error&){reuse=true;}
  require(reuse&&object_owners(f.native)==before,"All-clipped unchanged builder reused an emitted generation");
}
void object_prepared_map_loss(const GameAssets &assets,const session::Content &content,bool screen_started) {
  context=assets.title+" OBJECT prepared actual allocation expires screen_started="+std::to_string(screen_started);
  ObjectFixture f(assets,content);auto leaf=f.begin();while(!leaf->advance(1)){}f.operation->respond_source_objects(*leaf);
  std::unique_ptr<SourceScreenUpdate> screen;
  if(screen_started){screen=f.operation->begin_source_screen(*f.native.work,object_screen_context);require(!screen->advance(1),"Screen JSL alone completed nonempty leaf");}
  f.native.world.actor_graphics->release(0);const auto before=object_owners(f.native);const auto audio=f.native.audio.master_clocks();bool rejected{};
  try{if(screen_started)screen->advance(1);else screen=f.operation->begin_source_screen(*f.native.work,object_screen_context);}
  catch(const std::logic_error&){rejected=true;}
  require(rejected&&object_owners(f.native)==before&&f.native.audio.master_clocks()==audio,
      "Prepared/emitting screen read a released allocation or changed owned effects/time");
}
unsigned object_regressions(const GameAssets &assets,const session::Content &content) {
  for(unsigned kind=0;kind<18;++kind)object_rejection(assets,content,kind);
  object_receipts(assets,content);
  for(bool parent:{false,true})for(bool complete:{false,true})object_abandonment(assets,content,parent,complete);
  for(unsigned owner=0;owner<5;++owner)for(unsigned stage=0;stage<3;++stage)
    if(owner!=3||stage)object_lost_owner(assets,content,owner,stage);
  for(bool emitted:{false,true})object_generation_bypass(assets,content,emitted);
  for(bool completed:{false,true})object_active_clear(assets,content,completed);
  object_all_clipped(assets,content);
  for(bool started:{false,true})object_prepared_map_loss(assets,content,started);
  for(unsigned kind:{2u,3u,4u}) {
    context=assets.title+" OBJECT declared retained link admission kind="+std::to_string(kind);
    ObjectFixture f(assets,content);const auto &record=f.native.world.actor_object_maps->role(0);
    require(record.size*2>=10,"Declared link rejection lacks an actual retained creation extent");
    const auto target=std::uint16_t(kind==2?record.pointer+0x400:kind==3?record.pointer:0xfffe);
    declare_link(f.native.world.actor_object_map_state.bytes,record.pointer-f.native.world.actor_object_maps->origin(),target);
    const auto before=object_owners(f.native);const auto audio=f.native.audio.master_clocks();bool rejected{};
    try{f.begin();}catch(const std::logic_error&){rejected=true;}
    require(rejected&&object_owners(f.native)==before&&f.native.audio.master_clocks()==audio&&!f.native.world.runtime->failed(),
        "Escaped/cyclic/bank-end retained link admission changed actual owners");
  }
  return 47;
}
}

#ifndef EB_NATIVE_SOURCE_OBJECTS_REFERENCE_NO_MAIN
int main(int argc,char **argv) {try {
  if(argc<2)return 77;
  const bool smoke=std::string(argv[1])=="--objects-smoke";
  if(smoke&&argc<3)return 77;
  for(int arg=smoke?2:1;arg<argc;++arg) {
    const auto assets=load_game_assets(argv[arg],asset_profiles());const session::Content content(assets.image,assets.version);
    unsigned cases{};std::set<unsigned> sites;
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned priority=0;priority<4;++priority) {
      ObjectCase c;c.fast=fast;c.budget=budget;c.priority=priority;c.selected=1+(priority&1);c.mirrored=bool(priority&2);
      object_case(assets,content,c,sites);++cases;
    }
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u}) {
      ObjectCase c;c.overlay=true;c.fast=fast;c.budget=budget;c.priority=3;c.selected=2;
      object_case(assets,content,c,sites);++cases;
    }
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(std::uint8_t bank:{std::uint8_t(0),std::uint8_t(0x7e)}) {
      ObjectCase c;c.declared_link=1;c.fast=fast;c.budget=budget;c.priority=2;c.high_bank=bank;
      object_case(assets,content,c,sites);++cases;
    }
    const auto regressions=object_regressions(assets,content);
    if(!smoke) {
      for(unsigned group:{0u,1u,254u})for(bool mirror:{false,true})for(unsigned priority=0;priority<4;++priority)
        for(const auto xy:std::array<std::array<unsigned,2>,7>{{{128,112},{0,0},{319,223},{320,256},{0xffc0,0xffc0},{383,0x7fff},{0xffbf,255}}}) {
          ObjectCase c;c.group=group;c.mirrored=mirror;c.priority=priority;c.selected=1+(priority&1);
          c.x=std::uint16_t(xy[0]);c.y=std::uint16_t(xy[1]);object_case(assets,content,c,sites);++cases;
        }
      for(bool fast:{false,true})for(unsigned line:{219u,220u,221u,222u,223u,224u})for(unsigned h=0;h<1364;h+=16) {
        ObjectCase c;c.fast=fast;c.line=line;c.horizontal=h;c.priority=(h/16)%4;c.selected=1+((h/16)&1);
        object_case(assets,content,c,sites);++cases;
      }
      const unsigned shift=assets.version==GameVersion::JP?15:0;
      require(sites.contains(0xc08c5f-shift)||sites.contains(0xc08c62-shift),
          "Declared physical grid failed to interrupt the actual sampled priority/dispatch path");
      require(std::any_of(sites.begin(),sites.end(),[&](unsigned pc){return pc>=0xc08c70 - shift&&pc<=0xc08cce - shift;}),
          "Declared physical grid failed to interrupt between actual queue insertion stores");
      require(std::any_of(sites.begin(),sites.end(),[&](unsigned pc){return pc>=0xc08cee - shift&&pc<=0xc08d28 - shift;}),
          "Declared physical grid failed to interrupt actual nonempty map reads/clipping");
      require(sites.contains(0xc08b86-shift)||sites.contains(0xc08b88-shift),
          "Declared physical grid failed to interrupt between actual screen display/next stores");
    }
    std::cout<<"PASS "<<assets.title<<" original owned objects cases="<<cases<<" regressions="<<regressions<<" NMI sites=";
    for(auto site:sites)std::cout<<std::hex<<site<<',';
    std::cout<<std::dec<<'\n';
  }
  std::cout<<"PASS original source objects checks="<<checks<<'\n';
}catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}}
#endif
