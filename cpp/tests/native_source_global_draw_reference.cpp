// Actual normal bank80 global draw, shared C-stack sorting/role callbacks and
// one Screen consumer. Genuine independent multi-role creation precedes this
// component; full RUN selector, movement/projection and ending remain gated.
#define EB_NATIVE_SOURCE_ACTOR_DRAW_REFERENCE_NO_MAIN
#include "native_source_actor_draw_reference.cpp"
#undef EB_NATIVE_SOURCE_ACTOR_DRAW_REFERENCE_NO_MAIN
#include "eb/native/entities/graphics/source_global_draw.hpp"

namespace eb::native_reference {
// The inherited presentation widens two global-draw clipping literals. This
// test authority retains the actual original CMP and its preparation/fetch,
// without modifying the cartridge or counting untimed validation bus reads.
class OriginalGlobalDrawInstructions {
public:
  using Reaches=std::array<std::uint64_t,2>;
  static void step(MainCpu65816 &cpu,SnesBus &bus,bool jp,Reaches &reaches,unsigned &instruction_entry) {
    instruction_entry=0xffffffff;
    if(!cpu.prepare_instruction())return;
    instruction_entry=cpu.program_counter;
    const unsigned bank=cpu.program_counter>>16,low=cpu.program_counter&0xffff;
    constexpr std::array<unsigned,2> us{0xdb49,0xdb4e},japanese{0xdb11,0xdb16},words{0x0140,0xffc0};
    const auto &sites=jp?japanese:us;
    if(bank==0x80||bank==0xc0)for(unsigned i=0;i<sites.size();++i)if(low==sites[i]) {
      const auto image=bus.cartridge_image();const unsigned at=cpu.program_counter&0x3fffff;
      const unsigned operand=image[at+1]|unsigned(image[at+2])<<8;
      if(image[at]!=0xc9||operand!=words[i])throw std::runtime_error("Original global CMP bytes differ from immutable cartridge");
      ++reaches[i];const bool byte=cpu.accumulator_is_8_bit();
      cpu.execute_instruction<0xc9>(byte?operand&255:operand,byte?2:3);return;
    }
    cpu.execute_prepared_instruction();
  }
};
}

namespace {
constexpr SourceGlobalDrawContext global_context{true,true,true,true,0x80,0x7e,0x1e00,0x1ffd};
struct GlobalRole {
  unsigned role{},group=1;
  bool mirrored{};
  std::uint16_t projected_x=128,projected_y=112,absolute_y=100,surface=0x80,priority=1;
};
struct GlobalCase {
  bool fast=true,enabled=true;
  unsigned budget=1,selected=1,line=40,horizontal=100;
  std::vector<GlobalRole> roles;
};
struct GlobalOriginal : ObjectOriginal {
  using ObjectOriginal::ObjectOriginal;
  std::array<std::optional<unsigned>,128> accepted_roles;
  std::optional<unsigned> emitter_role;
  std::array<std::optional<OriginalCreatedMap>,30> creations;
  eb::native_reference::OriginalGlobalDrawInstructions::Reaches original_comparisons{};
  void step() {
    eb::native_reference::OriginalGlobalDrawInstructions::step(cpu,bus,bus.game_version()==GameVersion::JP,original_comparisons,instruction_entry);
  }
  void instruction() {
    drain();require(cpu.program_counter!=returned(),"Original objects ran into WAIT");
    if(cpu.program_counter==0xc08cd5-delta()) {
      emitter_role.reset();
      for(unsigned role=0;role<30;++role)if(creations[role]) {
        const auto &m=*creations[role];
        if(cpu.accumulator>=m.pointer&&unsigned(cpu.accumulator-m.pointer)<unsigned(m.size)*2) {
          require(!emitter_role,"Original emitter pointer aliases two genuine allocations");emitter_role=role;
        }
      }
      require(emitter_role.has_value(),"Original screen emitter escaped its real multi-role map allocation");
    }
    step();++foreground;drain();
  }
};
struct OriginalGlobalCreation {
  std::array<std::uint8_t,131072> ram;
  std::array<std::uint8_t,65536> video;
  std::array<std::uint8_t,7> dma;
};
OriginalGlobalCreation original_global_creation(const GameAssets &assets,const GlobalCase &c) {
  const bool jp=assets.version==GameVersion::JP;SnesBus bus(assets.image,assets.version);MainCpu65816 cpu(bus);
  cpu.set_runtime(MainCpuRuntime::Legacy);cpu.emulation_mode=false;cpu.status_register=4;
  cpu.stack_pointer=0x1fff;cpu.direct_page=0x1e00;cpu.data_bank=0x7e;
  bus.write_byte(0x4200,0);bus.work_ram[0xd]=0x80;
  const auto invoke=[&](unsigned site,unsigned target,unsigned a=0,unsigned x=0,unsigned y=0) {
    const unsigned at=site&0x3fffff;
    require(assets.image[at]==0x22&&(assets.image[at+1]|unsigned(assets.image[at+2])<<8|unsigned(assets.image[at+3])<<16)==target,
      "Original multi-role producer lost its authored regional JSL");
    cpu.program_counter=site;cpu.status_register=4;cpu.accumulator=std::uint16_t(a);cpu.x_index=std::uint16_t(x);cpu.y_index=std::uint16_t(y);
    cpu.direct_page=0x1e00;cpu.data_bank=0x7e;
    for(unsigned count=0;count<100000;++count) {
      cpu.step_instruction();if(cpu.program_counter==site+4) {
        require(cpu.stack_pointer==0x1fff&&cpu.direct_page==0x1e00&&cpu.data_bank==0x7e,
          "Original multi-role producer lost its real caller return context");return;
      }
    }
    require(false,"Original multi-role producer did not return to its actual authored caller");
  };
  // One genuine reset/init, then every CREATE on this same original machine.
  invoke(jp?0xc4ac68:0xc4d995,jp?0xc0925e:0xc0927c);
  invoke(jp?0xc4ac6c:0xc4d999,jp?0xc01a9c:0xc01a86);
  invoke(jp?0xc4ac76:0xc4d9a3,jp?0xc01c27:0xc01c11,0x8000);
  for(const auto &role:c.roles) {
    bus.work_ram[0x1e0e]=bus.work_ram[0x1e0f]=bus.work_ram[0x1e10]=bus.work_ram[0x1e11]=0;
    invoke(jp?0xc44290:0xc46522,jp?0xc01e5f:0xc01e49,role.group,35,role.role);
  }
  // Real mapped retained-screen producers after creation. Their context and
  // descriptor contents are independent declared prehistory, timing excluded.
  for(unsigned b=0;b<2;++b)for(unsigned i=0;i<544;++i)
    bus.work_ram[(b?0x800:0x500)+i]=std::uint8_t(i*71+b*113+37);
  bus.work_ram[0x2e]=1;bus.work_ram[0x2f]=0;
  for(unsigned round=0;round<(c.selected==1?2u:3u);++round) {
    const unsigned buffer=1+(round%2);
    for(unsigned i=0;i<8;++i) {
      const auto value=std::uint16_t(0x4100+buffer*0x211+i*0x127);
      bus.work_ram[0x31+i*2]=std::uint8_t(value);bus.work_ram[0x32+i*2]=std::uint8_t(value>>8);
    }
    invoke(jp?0xc100dc:0xc10067,jp?0xc088a3:0xc088b1);
    invoke(jp?0xc100e4:0xc1006f,jp?0xc08b17:0xc08b26);
  }
  OriginalGlobalCreation result;result.ram=bus.work_ram;result.video=bus.video_ram;
  for(unsigned i=0;i<7;++i)result.dma[i]=bus.read_byte(0x4300+i);
  return result;
}
struct GlobalNative {
  NativeAudio audio;session::World world;
  std::unique_ptr<AudioFrameClock> physical;
  std::unique_ptr<SourceWorkClock> work;
  std::unique_ptr<SourceNmiWork> nmi;
  std::array<std::optional<ActorId>,30> actors;
  GlobalNative(const GameAssets &assets,const session::Content &content,const GlobalCase &c,bool interrupt_owner=true,bool physical_owner=true)
    :audio(assets.image,assets.version),world(content,audio,256) {
    audio.initialize();world.clock.interrupt_mask=0;world.bind_actor_graphics(assets.image);
    world.display.transient_memory().configure(assets.version);world.runtime->refresh_world_capture();
    world.runtime->reset_interrupt_callback();world.clock.action_scripts_disabled=1;
    world.fade.force_blank(true);world.actor_graphics->reset_allocations();
    for(const auto &role:c.roles) {
      WorldActorSpec spec;spec.sprite=role.group;spec.script=35;
      auto creation=world.actor_graphics->begin_create(spec,{role.role,role.role+1});
      require(creation->advance(),"Actual native forced-blank multi-role Lifecycle create suspended");
      const auto id=creation->actor();require(!actors[role.role],"Native multi-role creation repeated an occupied role");actors[role.role]=id;
      creation.reset();auto &actor=world.actors.actor(id);actor.scripts_and_physics_enabled=false;actor.tick_callback_enabled=false;
      actor.behavior.projection=ActorProjection::Unchanged;actor.action().animation=0;
      actor.behavior.projected_x=std::int16_t(role.projected_x);actor.behavior.projected_y=std::int16_t(role.projected_y);
    }
    require(world.actors.object_draws().empty()&&!world.actors.in_tick(),"Actual native creation acquired a deferred drawing tick");
    for(unsigned buffer=0;buffer<2;++buffer)for(unsigned i=0;i<544;++i)
      world.actor_object_display_state.buffers[buffer].bytes[i]=std::uint8_t(i*71+buffer*113+37);
    for(unsigned round=0;round<(c.selected==1?2u:3u);++round) {
      const unsigned buffer=1+(round%2);
      for(unsigned i=0;i<4;++i)world.display.staged_scroll[i]={std::uint16_t(0x4100+buffer*0x211+i*2*0x127),std::uint16_t(0x4100+buffer*0x211+(i*2+1)*0x127)};
      world.frame_display.update_world_screen();
    }
    physical=std::make_unique<AudioFrameClock>(world.clock,[this]{work->request_nmi();},[]{},0,0,false);
    if(physical_owner)physical->bind_peripherals(world.peripherals);else world.peripherals.bind_clock(*physical);
    work=std::make_unique<SourceWorkClock>(*physical,audio,world.clock,*world.runtime,world.actor_object_display_state,
      *world.actor_object_display,world.frame_display,c.fast);audio.bind_clock(*work);
    nmi=std::make_unique<SourceNmiWork>(*world.runtime,audio,world.clock,world.session,world.frame_display,
      world.palette,world.display,world.scratch,world.fade,world.presentation,world.peripherals,SourceInterruptContext{true,true,true});
    if(interrupt_owner)work->bind_interrupt_work(*nmi);
  }
  std::unique_ptr<WorldRuntime::Operation> screen() {
    auto operation=world.runtime->begin(TickKind::WorldFrame);
    for(unsigned count=0;count<100;++count)if(operation->advance(1)==dialogue::Progress::Suspended) {
      require(operation->service()==SceneService::ScreenUpdate,"Actual multi-role world frame did not suspend at ScreenUpdate");return operation;
    }
    throw std::runtime_error(context+": Actual multi-role world frame did not reach UPDATE_SCREEN");
  }
};
ScreenReceipt screen_receipt(const GlobalNative &n) {
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
void same_screen(ObjectOriginal &o,const GlobalNative &n,const char *where) {
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
std::unique_ptr<WorldRuntime::Operation> prepare_global_screen(ObjectOriginal &o,GlobalNative &n,unsigned selected,unsigned insertion,
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
ObjectOwners object_owners(const GlobalNative &n) {
  ObjectOwners result;result.screen=screen_receipt(n);result.maps=n.world.actor_object_map_state.bytes;
  const auto &s=n.world.actor_object_display_state.scratch;
  result.bank=s.spritemap_bank;result.x=s.base_x;result.y=s.base_y;
  result.current_y=s.current_y;result.high_bank=s.high_pointer_bank;return result;
}


struct GlobalRowOwners {
  std::uint16_t next{},pointer{},size{},body{},displayed{},animation{},surface{},overlay{},x{},y{},absolute_y{};
  bool operator==(const GlobalRowOwners&) const=default;
};
struct GlobalOwners {
  ObjectOwners objects;
  std::array<std::uint8_t,256> page;
  std::array<std::uint16_t,30> priorities,sorting;
  std::array<std::array<std::uint16_t,2>,30> raw;
  std::array<std::optional<GlobalRowOwners>,30> actors;
  std::uint16_t first{},guard{};
  bool operator==(const GlobalOwners&) const=default;
};
GlobalOwners global_owners(GlobalOriginal &o,const GlobalCase &c) {
  const bool jp=o.bus.game_version()==GameVersion::JP;GlobalOwners result;
  result.objects=object_owners(o,jp?0x4a04:0x467e);
  std::copy_n(o.bus.work_ram.begin()+0x1d00,256,result.page.begin());
  for(unsigned i=0;i<30;++i) {
    result.priorities[i]=std::uint16_t(o.word((jp?0x1034:0x103e)+i*2));
    result.sorting[i]=std::uint16_t(o.word((jp?0x2c0c:0x280c)+i*2));
    result.raw[i]={std::uint16_t(o.word((jp?0x1160:0x116a)+i*2)),std::uint16_t(o.word((jp?0x11d8:0x11e2)+i*2))};
  }
  for(const auto &role:c.roles) {
    const unsigned r=role.role*2;
    result.actors[role.role]=GlobalRowOwners{std::uint16_t(o.word((jp?0xa94:0xa9e)+r)),std::uint16_t(o.word((jp?0x1124:0x112e)+r)),
      std::uint16_t(o.word((jp?0x2d14:0x2916)+r)),std::uint16_t(o.word((jp?0x2fe4:0x2be6)+r)),std::uint16_t(o.word((jp?0x1ab8:0x341a)+r)),
      std::uint16_t(o.word((jp?0x10e8:0x10f2)+r)),std::uint16_t(o.word((jp?0x2fa8:0x2baa)+r)),std::uint16_t(o.word((jp?0x3278:0x2e7a)+r)),
      std::uint16_t(o.word((jp?0xb0c:0xb16)+r)),std::uint16_t(o.word((jp?0xb48:0xb52)+r)),std::uint16_t(o.word((jp?0xbc0:0xbca)+r))};
  }
  result.first=std::uint16_t(o.word(jp?0xa46:0xa50));result.guard=std::uint16_t(o.word(jp?0xa56:0xa60));return result;
}
GlobalOwners global_owners(const GlobalNative &n,const SourceGlobalDrawEntry &entry) {
  GlobalOwners result;result.objects=object_owners(n);result.page=entry.page();const auto &w=n.world;
  for(unsigned i=0;i<30;++i) {
    result.priorities[i]=w.actors.authored_draw_priority(i);result.sorting[i]=w.actor_object_display_state.draw_sorting[i];
    result.raw[i]={entry.rows()[i].map_high,entry.rows()[i].callback};
    if(const auto id=w.actors.actor_for_role(i);id&&n.actors[i]&&*id==*n.actors[i]) {
      const auto &actor=w.actors.actor(*id);const auto &record=w.actor_lifecycle_state.roles[i];const auto &map=w.actor_object_maps->role(i);
      result.actors[i]=GlobalRowOwners{w.actors.source_next_entity_offset(i),map.pointer,map.size,record.body_divide,record.displayed_reference,
        actor.action().animation,actor.behavior.surface_flags,actor.appearance_context.overlay_flags,std::uint16_t(actor.behavior.projected_x),
        std::uint16_t(actor.behavior.projected_y),std::uint16_t(w.actors.authored_position(i)[1]>>16)};
    }
  }
  result.first=w.actors.source_first_entity_offset();result.guard=w.clock.action_scripts_disabled;return result;
}
void same_global(GlobalOriginal &o,const GlobalNative &n,const SourceGlobalDrawEntry &entry,const GlobalCase &c,const char *where) {
  same_screen(o,n,where);const auto expected=global_owners(o,c),actual=global_owners(n,entry);
  if(actual!=expected) {
    std::ostringstream out;out<<where<<" global owners PC="<<std::hex<<o.cpu.program_counter
      <<" page="<<(actual.page==expected.page)<<" sorting="<<(actual.sorting==expected.sorting)<<" priority="<<(actual.priorities==expected.priorities)
      <<" raw="<<(actual.raw==expected.raw)<<" actors="<<(actual.actors==expected.actors)<<" first="<<actual.first<<'/'<<expected.first
      <<" guard="<<actual.guard<<'/'<<expected.guard<<" maps="<<(actual.objects.maps==expected.objects.maps)
      <<" scratch="<<(actual.objects.bank==expected.objects.bank&&actual.objects.x==expected.objects.x&&actual.objects.y==expected.objects.y&&
        actual.objects.current_y==expected.objects.current_y&&actual.objects.high_bank==expected.objects.high_bank);
    for(unsigned i=0;i<256;++i)if(actual.page[i]!=expected.page[i]){out<<" first_page_byte="<<i<<':'<<unsigned(actual.page[i])<<'/'<<unsigned(expected.page[i]);break;}
    for(unsigned i=0;i<30;++i)if(actual.sorting[i]!=expected.sorting[i]){out<<" first_sort_row="<<i<<':'<<actual.sorting[i]<<'/'<<expected.sorting[i];break;}
    require(false,out.str());
  }
  ++checks;
}
void global_metadata(GlobalOriginal &o,const GlobalNative &n,const GlobalCase &c) {
  const auto &frame=n.world.actor_object_display_state.buffers[c.selected-1];
  for(unsigned slot=0;slot<128;++slot) {
    const auto role=o.accepted_roles[slot];const auto id=role?n.actors[*role]:std::optional<ActorId>{};
    require(frame.identities[slot]==(id?*id:0),"Global screen identity lacks an actual original accepted Y store/map role");
    const auto &anchor=frame.anchors[slot];
    require(anchor.owned==bool(role),"Global screen anchor attached to an unaccepted original descriptor");
    if(role) {
      const auto found=std::find_if(c.roles.begin(),c.roles.end(),[&](const auto &value){return value.role==*role;});
      require(found!=c.roles.end()&&anchor.x==std::int16_t(found->projected_x)&&anchor.y==std::int16_t(found->projected_y),
        "Global screen part lost its actual live projected actor anchor");
    }
  }
}
void global_audit(GlobalOriginal &o,unsigned selected) {
  draw_audit(o);const auto writes=o.cpu.observe_memory_write;
  o.cpu.observe_memory_write=[&o,writes,selected](unsigned address,std::uint8_t value) {
    writes(address,value);
    if(o.instruction_entry==0xc08d62-o.delta()) {
      const unsigned base=selected==1?0x500:0x800,at=address&0xffff;
      require(at>=base+1&&at<base+512&&(at-base)%4==1&&o.emitter_role.has_value(),
        "Global original accepted Y store escaped its selected descriptor/map owner");
      o.accepted_roles[(at-base)/4]=o.emitter_role;
    }
  };
}
void global_creation_baseline(GlobalOriginal &o,const GlobalNative &n,const GlobalCase &c) {
  const bool jp=o.bus.game_version()==GameVersion::JP;const auto &w=n.world;
  require(std::equal(w.actor_object_map_state.bytes.begin(),w.actor_object_map_state.bytes.end(),o.bus.work_ram.begin()+(jp?0x4a04:0x467e)),
    "Genuine independent multi-role map pool allocation bytes differ");
  const auto first=c.roles.empty()?0xffff:c.roles.front().role*2;
  require(o.word(jp?0xa46:0xa50)==first&&w.actors.source_first_entity_offset()==first,
    "Genuine independent creation FIRST lost its real sparse-role order");
  for(unsigned index=0;index<c.roles.size();++index) {
    const auto &role=c.roles[index];const unsigned r=role.role*2;
    const unsigned next=index+1<c.roles.size()?c.roles[index+1].role*2:0xffff;
    const auto &record=w.actor_lifecycle_state.roles[role.role];const auto &map=w.actor_object_maps->role(role.role);
    require(o.word((jp?0xa94:0xa9e)+r)==next&&w.actors.source_next_entity_offset(role.role)==next,
      "Genuine independent creation NEXT lost its real linked insertion order");
    require(o.word((jp?0x1124:0x112e)+r)==map.pointer&&o.word((jp?0x2d14:0x2916)+r)==map.size&&
      o.word((jp?0x2fe4:0x2be6)+r)==record.body_divide&&o.word((jp?0x1ab8:0x341a)+r)==record.displayed_reference&&
      o.word((jp?0x11d8:0x11e2)+r)==(jp?0xa383:0xa3a4)&&o.word((jp?0x1160:0x116a)+r)==0x7e,
      "Genuine independent multi-role CREATE body/reference/callback/map baseline differs");
    require(n.actors[role.role]&&w.actors.actor(*n.actors[role.role]).authored_role()==role.role,
      "Native multi-role creation lost the exact actual assigned role");
  }
  ++checks;
}
void global_case(const GameAssets &assets,const session::Content &content,const GlobalCase &c,std::set<unsigned> &sites) {
  const bool jp=assets.version==GameVersion::JP;
  context=assets.title+" GLOBAL fast="+std::to_string(c.fast)+" budget="+std::to_string(c.budget)+" selected="+std::to_string(c.selected)+
    " actors="+std::to_string(c.roles.size())+" phase="+std::to_string(c.line)+":"+std::to_string(c.horizontal);
  GlobalOriginal o(assets,c.fast,c.selected);GlobalNative n(assets,content,c);const auto creation=original_global_creation(assets,c);
  // Original-produced state feeds only this original measured host; its old
  // producer timeline is not copied or normalized into either physical clock.
  o.bus.work_ram=creation.ram;o.bus.video_ram=creation.video;
  for(unsigned i=0;i<creation.dma.size();++i)o.bus.write_byte(0x4300+i,creation.dma[i]);
  global_creation_baseline(o,n,c);auto &w=n.world;
  for(const auto &role:c.roles) {
    const unsigned r=role.role*2;OriginalCreatedMap m;m.origin=std::uint16_t(jp?0x4a04:0x467e);
    m.pointer=std::uint16_t(o.word((jp?0x1124:0x112e)+r));m.size=std::uint16_t(o.word((jp?0x2d14:0x2916)+r));m.bank=0x7e;
    require(m.pointer>=m.origin&&m.size&&unsigned(m.pointer-m.origin)+unsigned(m.size)*2<=m.bytes.size(),
      "Original live multi-role allocation escaped its actual pool extent");o.creations[role.role]=m;
  }
  auto operation=prepare_global_screen(o,n,c.selected,0x1234,0,0,c.selected^3,c.line,c.horizontal,c.enabled);
  // These explicit component words have no projection/graphics-upload/full RUN
  // predecessor claim. Each is established independently in its actual host.
  std::array<SourceRoleDrawFacts,30> facts{};
  for(unsigned role=0;role<30;++role) {
    facts[role]={0x407e,std::uint16_t(jp?0xa383:0xa3a4)};
    o.put((jp?0x1160:0x116a)+role*2,0x407e);o.put((jp?0x11d8:0x11e2)+role*2,jp?0xa383:0xa3a4);
    w.actors.set_authored_draw_priority(role,0);o.put((jp?0x1034:0x103e)+role*2,0);
    const auto link=std::uint16_t(role*0x51+0x2137);w.actor_object_display_state.draw_sorting[role]=link;o.put((jp?0x2c0c:0x280c)+role*2,link);
  }
  for(const auto &role:c.roles) {
    const unsigned r=role.role*2;auto &actor=w.actors.actor(*n.actors[role.role]);
    actor.behavior.projected_x=std::int16_t(role.projected_x);actor.behavior.projected_y=std::int16_t(role.projected_y);
    actor.behavior.surface_flags=role.surface;actor.appearance_context.overlay_flags=0;actor.action().animation=0;
    auto position=w.actors.authored_position(role.role);position[1]=(unsigned(role.absolute_y)<<16)|0x5a37;w.actors.set_authored_position(role.role,position);
    w.actor_lifecycle_state.roles[role.role].displayed_reference=std::uint16_t(role.mirrored?0x5a01:0x5a00);
    w.actors.set_authored_draw_priority(role.role,role.priority);
    o.put((jp?0xb0c:0xb16)+r,role.projected_x);o.put((jp?0xb48:0xb52)+r,role.projected_y);o.put((jp?0xbc0:0xbca)+r,role.absolute_y);
    o.put((jp?0x2fa8:0x2baa)+r,role.surface);o.put((jp?0x3278:0x2e7a)+r,0);o.put((jp?0x10e8:0x10f2)+r,0);
    o.put((jp?0x1ab8:0x341a)+r,role.mirrored?0x5a01:0x5a00);o.put((jp?0x1034:0x103e)+r,role.priority);
  }
  const auto page=draw_page();SourceGlobalDrawEntry entry(facts,page);std::copy(page.begin(),page.end(),o.bus.work_ram.begin()+0x1d00);
  w.actor_object_display_state.scratch={0x6d7e,0x2137,0x6b51,0xe731,0};
  o.put(0xb,0x6d7e);o.put(0x9b,0x2137);o.put(0x9d,0x6b51);o.put(0x9f,0xe731);o.bus.work_ram[9]=0;
  w.clock.action_scripts_disabled=1;o.put(jp?0xa56:0xa60,1);
  const unsigned caller=jp?0x8094a7:0x8094c8,target=jp?0x80dad7:0x80db0f,selector=jp?0xa54:0xa5e;
  const auto at=caller&0x3fffff;
  require(assets.image[at]==0xfc&&(assets.image[at+1]|unsigned(assets.image[at+2])<<8)==selector,
    "Global component lost its actual authored bank80 indirect JSR");
  // The raw selector and X0 belong only to the separately charged original
  // caller input. Named native global body does not claim live RUN dispatch.
  o.put(selector,target&0xffff);o.cpu.program_counter=caller;o.cpu.status_register=4;o.cpu.data_bank=0x7e;o.cpu.direct_page=0x1e00;
  o.cpu.accumulator=0x1234;o.cpu.x_index=0;o.cpu.y_index=0x89ab;
  global_audit(o,c.selected);const auto before=global_owners(n,entry);const auto audio=n.audio.master_clocks(),refresh=n.work->refresh_pauses();
  const auto actor_ticks=w.actors.ticks();require(!w.actors.in_tick(),"Global component predecessor left an unfinished semantic actor tick");
  same_global(o,n,entry,c,"independent declared global entry");
  o.instruction();n.work->retire_source_work({8,3,4,0});
  require(o.cpu.program_counter==target&&o.cpu.stack_pointer==0x1ffd,"Original indirect global caller changed target/stack");
  same_global(o,n,entry,c,"actual separately charged indirect JSR");
  auto leaf=operation->begin_source_global_draw(*n.work,global_context,{entry});const auto called=global_owners(n,entry);bool early{};
  require(!leaf->advance(0)&&global_owners(n,entry)==called&&!leaf->retired_instructions(),"Zero global budget advanced literal work or owners");
  try{operation->respond_source_global_draw(*leaf);}catch(const std::logic_error&){early=true;}
  require(early&&global_owners(n,entry)==called,"Incomplete global receipt changed actual continuation");
  unsigned atoms{};
  if(c.budget==1)for(unsigned i=0;;++i) {
    require(i<50000,"Actual global helper did not near return");o.instruction();++atoms;const bool done=leaf->advance(1);
    same_global(o,n,entry,c,"literal global retirement");
    require(leaf->retired_instructions()==atoms&&done==(o.cpu.program_counter==caller+3),"Global helper skipped atoms or changed near return");if(done)break;
  } else {
    while(o.cpu.program_counter!=caller+3){o.instruction();++atoms;}
    while(!leaf->advance(c.budget)){}same_global(o,n,entry,c,"budgeted global return");
    require(leaf->retired_instructions()==atoms,"Global budget changed literal retirement count");
  }
  require(o.cpu.stack_pointer==0x1fff&&o.cpu.direct_page==0x1e00&&o.cpu.data_bank==0x7e&&!(o.cpu.status_register&0x30)&&
    w.actors.ticks()==actor_ticks&&!w.actors.in_tick(),"Global return lost bank/stack/D/width or traversed semantic actors");
  const auto prepared=global_owners(n,entry);operation->respond_source_global_draw(*leaf);bool duplicate{};
  try{operation->respond_source_global_draw(*leaf);}catch(const std::logic_error&){duplicate=true;}
  require(duplicate&&global_owners(n,entry)==prepared,"Duplicate global response replayed shared page/queue/generation effects");
  o.cpu.program_counter=o.call();const auto count=o.foreground;auto screen=operation->begin_source_screen(*n.work,object_screen_context);
  if(c.budget==1)for(unsigned i=0;;++i) {
    require(i<50000,"Actual globally prepared Screen did not far return");o.instruction();const bool done=screen->advance(1);
    same_global(o,n,entry,c,"literal global-prepared screen retirement");global_metadata(o,n,c);
    require(screen->retired_instructions()==o.foreground-count&&done==(o.cpu.program_counter==o.returned()),"Global Screen skipped an atom or changed its far return");if(done)break;
  } else {
    while(o.cpu.program_counter!=o.returned())o.instruction();
    while(!screen->advance(c.budget)){}
    same_global(o,n,entry,c,"budgeted global-prepared screen return");global_metadata(o,n,c);
    require(screen->retired_instructions()==o.foreground-count,"Global Screen budget changed literal retirement count");
  }
  require(o.cpu.stack_pointer==0x1fff&&o.cpu.direct_page==0x1e00&&o.cpu.data_bank==0x7e&&!(o.cpu.status_register&0x30),"Global Screen lost literal caller context");
  require(n.work->refresh_pauses()-refresh==o.refreshes(),"Global+Screen refresh accounting differs");
  require(n.audio.master_clocks()-audio==n.work->master_clocks()-before.objects.screen.clocks,"Global+Screen audio elapsed duplicated or omitted");
  require(w.clock.input_polls==0&&w.clock.publications==o.interrupts&&w.actors.ticks()==actor_ticks&&!w.actors.in_tick(),
    "Global+Screen polled input, published synthetically or advanced a semantic actor tick");
  const auto emitted=global_owners(n,entry);operation->respond_source_screen(*screen);
  require(global_owners(n,entry)==emitted&&operation->advance()==dialogue::Progress::Suspended&&operation->service()==SceneService::Frame,
    "Global Screen receipt changed owners or resumed a different actual WAIT");
  sites.insert(o.interrupted_sites.begin(),o.interrupted_sites.end());
}

GlobalCase global_triple() {
  GlobalCase c;c.roles={{0},{2},{4}};return c;
}
struct GlobalFixture {
  GlobalCase specification;
  GlobalNative native;
  std::unique_ptr<WorldRuntime::Operation> operation;
  std::unique_ptr<SourceGlobalDrawEntry> entry;
  GlobalFixture(const GameAssets &assets,const session::Content &content,bool interrupt_owner=true,bool physical_owner=true,bool world_callback=false)
    :specification(global_triple()),native(assets,content,specification,interrupt_owner,physical_owner) {
    if(world_callback)native.world.runtime->restore_world_interrupt_callback();
    operation=native.screen();std::array<SourceRoleDrawFacts,30> facts{};const bool jp=assets.version==GameVersion::JP;
    for(unsigned role=0;role<30;++role) {
      facts[role]={0x407e,std::uint16_t(jp?0xa383:0xa3a4)};
      native.world.actor_object_display_state.draw_sorting[role]=std::uint16_t(role*0x51+0x2137);
    }
    for(const auto &role:specification.roles) {
      auto &actor=native.world.actors.actor(*native.actors[role.role]);actor.behavior.surface_flags=0x80;
      actor.appearance_context.overlay_flags=0;native.world.actors.set_authored_draw_priority(role.role,1);
    }
    native.world.actor_object_display_state.scratch={0x6d7e,0x2137,0x6b51,0xe731,0};
    entry=std::make_unique<SourceGlobalDrawEntry>(facts,draw_page());
  }
  std::unique_ptr<SourceGlobalDraw> begin() {
    return operation->begin_source_global_draw(*native.work,global_context,{*entry});
  }
};
struct GlobalRegressionOwners {
  ObjectOwners objects;
  std::optional<std::array<std::uint8_t,256>> page;
  std::optional<std::array<std::array<std::uint16_t,2>,30>> raw;
  std::array<std::uint16_t,30> priority,sorting,next;
  std::array<entities::graphics::RoleGraphics,30> graphics;
  std::array<std::optional<std::array<std::uint16_t,3>>,30> actors;
  std::uint16_t first{},guard{},select{};
  std::uint64_t ticks{},count{};
  bool in_tick{},default_callback{};
  bool operator==(const GlobalRegressionOwners&) const=default;
};
GlobalRegressionOwners global_snapshot(const GlobalFixture &f) {
  GlobalRegressionOwners result;const auto &n=f.native;const auto &w=n.world;result.objects=object_owners(n);
  if(f.entry){result.page=f.entry->page();result.raw.emplace();for(unsigned i=0;i<30;++i)(*result.raw)[i]={f.entry->rows()[i].map_high,f.entry->rows()[i].callback};}
  result.graphics=w.actor_lifecycle_state.roles;result.sorting=w.actor_object_display_state.draw_sorting;
  for(unsigned i=0;i<30;++i) {
    result.priority[i]=w.actors.authored_draw_priority(i);result.next[i]=0xffff;
    if(const auto id=w.actors.actor_for_role(i);id) {
      const auto &actor=w.actors.actor(*id);result.actors[i]=std::array<std::uint16_t,3>{actor.action().animation,actor.behavior.surface_flags,actor.appearance_context.overlay_flags};
      try{result.next[i]=w.actors.source_next_entity_offset(i);}catch(const std::logic_error&){result.next[i]=0xfffe;}
    }
  }
  try{result.first=w.actors.source_first_entity_offset();}catch(const std::logic_error&){result.first=0xfffe;}
  result.guard=w.clock.action_scripts_disabled;result.select=w.input.state[1];result.ticks=w.actors.ticks();result.count=w.actors.size();
  result.in_tick=w.actors.in_tick();result.default_callback=w.runtime->uses_default_interrupt_callback();return result;
}
void global_rejection(const GameAssets &assets,const session::Content &content,unsigned kind) {
  context=assets.title+" GLOBAL pure admission kind="+std::to_string(kind);
  GlobalFixture f(assets,content,kind!=25,kind!=26,kind==31);auto &w=f.native.world;auto ctx=global_context;
  if(kind==0)ctx.native_mode=false;
  if(kind==1)ctx.low_wram_stack=false;
  if(kind==2)ctx.wide_indexes=false;
  if(kind==3)ctx.decimal_clear=false;
  if(kind==4)ctx.program_bank=0xc0;
  if(kind==5)ctx.data_bank=0;
  if(kind==6)ctx.direct_page=0x1d00;
  if(kind==7)ctx.stack_pointer=0x1fff;
  if(kind==8)w.input.state[1]|=0x2000;
  if(kind==9)f.entry->set_role(0,{0x807e,std::uint16_t(assets.version==GameVersion::JP?0xa383:0xa3a4)});
  if(kind==10)f.entry->set_role(0,{0x407f,std::uint16_t(assets.version==GameVersion::JP?0xa383:0xa3a4)});
  if(kind==11)f.entry->set_role(2,{0x407e,0xa0ca});
  if(kind==12)w.actors.actor(*f.native.actors[2]).action().animation=0x8000;
  if(kind==13)w.actors.actor(*f.native.actors[2]).behavior.surface_flags=4;
  if(kind==14)w.actors.actor(*f.native.actors[2]).behavior.surface_flags=8;
  if(kind==15)w.actors.actor(*f.native.actors[2]).appearance_context.overlay_flags=1;
  if(kind==16)w.actors.set_authored_draw_priority(2,4);
  if(kind==17)w.actors.set_authored_draw_priority(0,0x803f);
  if(kind==18){w.actors.set_authored_draw_priority(0,0x8002);w.actors.set_authored_draw_priority(2,0x8000);}
  if(kind==19)++w.actor_lifecycle_state.roles[2].body_divide;
  if(kind==20)w.actor_object_map_state.bytes[w.actor_object_maps->role(2).pointer-w.actor_object_maps->origin()]=0x80;
  if(kind==21)++w.actor_object_display_state.builder.address;
  if(kind==22)w.actor_object_display_state.working[260]=2;
  if(kind==23)w.actor_object_display_state.scratch.high_pointer_bank=1;
  if(kind==24){w.clock.interrupt_mask=0x90;w.clock.retained_hardware_interrupt_mask=0x90;}
  if(kind==25){f.native.physical->nmi_enabled(true);w.clock.interrupt_mask=0x80;w.clock.retained_hardware_interrupt_mask=0x80;}
  if(kind==27)w.frame_display.request_retained_screen();
  if(kind==28){for(unsigned i=0;i<255;++i)w.frame_display.request_retained_screen();require(w.frame_display.display_request()==0x0101,"Global same-buffer regression lost its real full request word");}
  if(kind==29)w.actor_graphics->release(2);
  if(kind==30){WorldActorSpec spec;spec.sprite=1;spec.script=35;w.actors.create(spec);}
  const auto before=global_snapshot(f);const auto audio=f.native.audio.master_clocks(),interrupts=f.native.work->completed_source_interrupts();const auto picture=w.runtime->scene().frame();bool rejected{};
  try{f.operation->begin_source_global_draw(*f.native.work,ctx,{*f.entry});}catch(const std::logic_error&){rejected=true;}
  require(rejected&&global_snapshot(f)==before&&f.native.audio.master_clocks()==audio&&f.native.work->completed_source_interrupts()==interrupts&&
    w.runtime->scene().frame()==picture&&!w.runtime->failed(),"Unsupported global work claimed/poisoned a shared generation or mutated pure admission");
}
void global_expired_entry(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" GLOBAL typed entry expires before admission";GlobalFixture f(assets,content);SourceGlobalDrawCall call{*f.entry};f.entry.reset();
  const auto before=global_snapshot(f);const auto audio=f.native.audio.master_clocks();bool rejected{};
  try{f.operation->begin_source_global_draw(*f.native.work,global_context,call);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&global_snapshot(f)==before&&f.native.audio.master_clocks()==audio&&!f.native.world.runtime->failed(),"Global factory borrowed expired page/raw rows or mutated admission");
}
void global_receipts(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" GLOBAL exact one-page/generation receipt and Screen single consumer";GlobalFixture f(assets,content),foreign(assets,content);
  auto leaf=f.begin();const auto before=global_snapshot(f),other=global_snapshot(foreign);bool second{},screen{},ordinary{},publication{},rows{},page{};
  try{f.begin();}catch(const std::logic_error&){second=true;}
  try{f.operation->begin_source_screen(*f.native.work,object_screen_context);}catch(const std::logic_error&){screen=true;}
  try{f.operation->complete_frame({0,0});}catch(const std::logic_error&){ordinary=true;}
  try{f.operation->complete_publication();}catch(const std::logic_error&){publication=true;}
  try{f.entry->set_role(0,{0x7e,0});}catch(const std::logic_error&){rows=true;}
  try{f.entry->set_page({});}catch(const std::logic_error&){page=true;}
  require(second&&screen&&ordinary&&publication&&rows&&page&&global_snapshot(f)==before,"Live global producer allowed bypass/shared-page rewrite or mutated owners");
  while(!leaf->advance(1)){}
  const auto complete=global_snapshot(f);bool wrong{},unacknowledged{};
  try{foreign.operation->respond_source_global_draw(*leaf);}catch(const std::logic_error&){wrong=true;}
  try{f.operation->begin_source_screen(*f.native.work,object_screen_context);}catch(const std::logic_error&){unacknowledged=true;}
  require(wrong&&unacknowledged&&global_snapshot(f)==complete&&global_snapshot(foreign)==other,"Foreign/unacknowledged global receipt consumed another generation");
  f.operation->respond_source_global_draw(*leaf);leaf.reset();bool locked{};
  try{f.entry->set_page({});}catch(const std::logic_error&){locked=true;}
  require(locked&&global_snapshot(f)==complete,"Prepared global generation unlocked its live shared page");
  auto emission=f.operation->begin_source_screen(*f.native.work,object_screen_context);while(!emission->advance(1)){}
  const auto emitted=global_snapshot(f);f.operation->respond_source_screen(*emission);bool duplicate{};
  try{f.operation->respond_source_screen(*emission);}catch(const std::logic_error&){duplicate=true;}
  require(duplicate&&global_snapshot(f)==emitted,"Duplicate global-prepared Screen response replayed literal effects");
  f.entry->set_page(draw_page());f.entry->set_role(0,{0x407e,std::uint16_t(assets.version==GameVersion::JP?0xa383:0xa3a4)});
  require(f.operation->advance()==dialogue::Progress::Suspended&&f.operation->service()==SceneService::Frame,"Global Screen did not resume exact WAIT");
  f.operation->complete_frame({0,0});require(f.operation->advance()==dialogue::Progress::Finished,"Masked global predecessor did not finish its real frame");
  f.operation.reset();auto later=f.native.screen();const auto fresh=global_snapshot(f);bool stale{};
  try{later->respond_source_screen(*emission);}catch(const std::logic_error&){stale=true;}
  require(stale&&global_snapshot(f)==fresh,"Old global-prepared Screen receipt consumed a fresh actual CLEAR");
}
void global_abandonment(const GameAssets &assets,const session::Content &content,bool parent,bool complete) {
  context=assets.title+" GLOBAL abandon parent="+std::to_string(parent)+" complete="+std::to_string(complete);GlobalFixture f(assets,content);auto leaf=f.begin();
  if(complete){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Global REP alone completed its draw");
  const auto before=global_snapshot(f);const auto audio=f.native.audio.master_clocks();bool rejected{};
  if(parent){f.operation.reset();try{leaf->advance(1);}catch(const std::logic_error&){rejected=true;}}
  else{leaf.reset();try{f.begin();}catch(const std::logic_error&){rejected=true;}}
  require(rejected&&global_snapshot(f)==before&&f.native.audio.master_clocks()==audio,"Abandoned global parent/leaf reused or advanced borrowed work");
}
void global_retired_before_admission(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" GLOBAL genuine bare retirement before fresh graph admission";
  GlobalFixture f(assets,content);auto &w=f.native.world;const bool jp=assets.version==GameVersion::JP;
  GlobalOriginal o(assets,true);const auto creation=original_global_creation(assets,f.specification);
  // Original-produced preparation feeds only this original host. This real
  // retirement call's predecessor and timing are outside the measured leaf.
  o.bus.work_ram=creation.ram;o.bus.video_ram=creation.video;
  for(unsigned i=0;i<creation.dma.size();++i)o.bus.write_byte(0x4300+i,creation.dma[i]);
  global_creation_baseline(o,f.native,f.specification);
  const auto pool=w.actor_object_map_state.bytes;const auto graphics=w.actor_lifecycle_state.roles;
  const auto retained=w.actor_object_maps->role(2);const unsigned r=4;
  const std::array<unsigned,4> original_retained{o.word((jp?0x1124:0x112e)+r),o.word((jp?0x2d14:0x2916)+r),
    o.word((jp?0x2fe4:0x2be6)+r),o.word((jp?0x1ab8:0x341a)+r)};
  // Actual PLAY_CAST_SCENE JSL bytes, with explicitly declared standalone
  // component A/X=role, DB7E/D1E00/S1FFF; no whole cast-frame provenance claim.
  o.cpu.status_register=4;o.cpu.accumulator=2;o.cpu.x_index=2;o.cpu.y_index=0x89ab;
  o.cpu.direct_page=0x1e00;o.cpu.stack_pointer=0x1fff;o.cpu.data_bank=0x7e;
  const unsigned caller=jp?0xc4bfbe:0xc4ed63;
  o.far(caller,jp?0xc09c14:0xc09c35);
  require(o.cpu.program_counter==caller+4&&o.cpu.direct_page==0x1e00&&o.cpu.stack_pointer==0x1fff&&
    o.cpu.data_bank==0x7e&&!o.cpu.emulation_mode&&!(o.cpu.status_register&0x30),
    "Original bare retirement lost its genuine far return/context");
  w.actors.retire(*f.native.actors[2]);
  require(w.actors.size()==2&&!w.actors.actor_for_role(2)&&o.word(jp?0xa46:0xa50)==0&&w.actors.source_first_entity_offset()==0&&
    o.word(jp?0xa94:0xa9e)==8&&w.actors.source_next_entity_offset(0)==8&&
    o.word((jp?0xa94:0xa9e)+8)==0xffff&&w.actors.source_next_entity_offset(4)==0xffff,
    "Independent genuine bare retirement changed the current live FIRST/NEXT graph differently");
  const auto &map=w.actor_object_maps->role(2);
  require(map.allocated&&map.pointer==retained.pointer&&map.size==retained.size&&w.actor_object_map_state.bytes==pool&&
    w.actor_lifecycle_state.roles==graphics&&graphics[2].allocated&&
    std::equal(pool.begin(),pool.end(),o.bus.work_ram.begin()+(jp?0x4a04:0x467e))&&
    o.word((jp?0x1124:0x112e)+r)==original_retained[0]&&o.word((jp?0x2d14:0x2916)+r)==original_retained[1]&&
    o.word((jp?0x2fe4:0x2be6)+r)==original_retained[2]&&o.word((jp?0x1ab8:0x341a)+r)==original_retained[3],
    "Bare script retirement released or changed genuine retained graphics/map owners");
  const auto before=global_snapshot(f);const auto audio=f.native.audio.master_clocks();
  const auto clock=f.native.work->master_clocks();const auto picture=w.runtime->scene().frame();auto leaf=f.begin();
  require(global_snapshot(f)==before&&f.native.audio.master_clocks()==audio&&f.native.work->master_clocks()==clock&&
    w.runtime->scene().frame()==picture&&!w.runtime->failed()&&!leaf->complete()&&leaf->retired_instructions()==0,
    "Fresh reduced-graph admission changed owner bytes, input, clocks or publication");
  require(!leaf->advance(0)&&leaf->retired_instructions()==0&&global_snapshot(f)==before&&f.native.audio.master_clocks()==audio&&
    f.native.work->master_clocks()==clock&&w.runtime->scene().frame()==picture&&!w.runtime->failed(),
    "Zero-budget fresh graph lease mutated retained owners or retired source work");
  // The fresh lease now owns the remaining identities/links. Losing one is
  // still a strict error before its first source atom, unlike earlier shrink.
  w.actors.retire(*f.native.actors[0]);const auto lost=global_snapshot(f);bool rejected{};
  try{leaf->advance(1);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&leaf->retired_instructions()==0&&global_snapshot(f)==lost&&f.native.audio.master_clocks()==audio&&
    f.native.work->master_clocks()==clock&&w.runtime->scene().frame()==picture,
    "Fresh reduced-graph lease ignored captured actor/link loss or advanced effects");
}
void global_lost_owner(const GameAssets &assets,const session::Content &content,unsigned owner,unsigned stage) {
  if(owner==6&&stage==0){global_retired_before_admission(assets,content);return;}
  context=assets.title+" GLOBAL lost owner="+std::to_string(owner)+" stage="+std::to_string(stage);GlobalFixture f(assets,content);std::unique_ptr<SourceGlobalDraw> leaf;
  if(stage){leaf=f.begin();if(stage==2){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Lost-owner global REP completed draw");}
  std::optional<SourceGlobalDrawCall> call;if(owner==0&&stage==0)call.emplace(*f.entry);
  if(owner==0)f.entry.reset();
  if(owner==1)f.native.nmi.reset();
  if(owner==2)f.native.physical.reset();
  if(owner==3)f.native.work.reset();
  if(owner==4)f.native.world.actor_graphics->release(2);
  if(owner==5)f.native.world.actor_object_display.reset();
  if(owner==6)f.native.world.actors.retire(*f.native.actors[2]);
  if(owner==7)f.native.world.actors.clear_drawing_input(f.native.world.input);
  const auto before=global_snapshot(f);const auto audio=f.native.audio.master_clocks();const auto picture=f.native.world.runtime->scene().frame();bool rejected{};
  try{if(!stage){if(call)leaf=f.operation->begin_source_global_draw(*f.native.work,global_context,*call);else leaf=f.begin();}
    else if(stage==1)leaf->advance(1);else f.operation->respond_source_global_draw(*leaf);
  }catch(const std::logic_error&){rejected=true;}
  require(rejected&&global_snapshot(f)==before&&f.native.audio.master_clocks()==audio&&f.native.world.runtime->scene().frame()==picture,
    "Global producer borrowed expired entry/map/graph/input/display/interrupt/work/physical or advanced effects");
}
void global_prepared_loss(const GameAssets &assets,const session::Content &content,unsigned owner,unsigned stage) {
  context=assets.title+" GLOBAL prepared owner loss="+std::to_string(owner)+" screen_stage="+std::to_string(stage);GlobalFixture f(assets,content);
  auto leaf=f.begin();while(!leaf->advance(1)){}f.operation->respond_source_global_draw(*leaf);std::unique_ptr<SourceScreenUpdate> screen;
  if(stage){screen=f.operation->begin_source_screen(*f.native.work,object_screen_context);if(stage==2){while(!screen->advance(1)){}}else require(!screen->advance(1),"Screen JSL completed all globally prepared maps");}
  if(owner==0)f.entry.reset();
  if(owner==1)f.native.world.actor_graphics->release(2);
  if(owner==2)f.native.world.actors.retire(*f.native.actors[2]);
  const auto before=global_snapshot(f);const auto audio=f.native.audio.master_clocks();bool rejected{};
  try{if(!stage)screen=f.operation->begin_source_screen(*f.native.work,object_screen_context);else if(stage==1)screen->advance(1);else f.operation->respond_source_screen(*screen);}
  catch(const std::logic_error&){rejected=true;}
  require(rejected&&global_snapshot(f)==before&&f.native.audio.master_clocks()==audio,"Prepared global Screen consumed a lost shared-page/map/graph owner");
}
void global_generation(const GameAssets &assets,const session::Content &content,bool eager) {
  context=assets.title+" GLOBAL revoked unchanged-cursor generation eager="+std::to_string(eager);GlobalFixture f(assets,content);
  if(eager){auto image=f.native.world.actor_object_display->capture_objects(1);require(bool(image),"Eager zero-object capture absent");}
  else f.native.world.actor_object_display->clear_photograph_prefix();
  const auto before=global_snapshot(f);const auto audio=f.native.audio.master_clocks();bool rejected{};
  try{f.begin();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&global_snapshot(f)==before&&f.native.audio.master_clocks()==audio,"Global draw reused a revoked/eager-emitted unchanged cursor generation");
}
void global_active_clear(const GameAssets &assets,const session::Content &content,bool complete) {
  context=assets.title+" GLOBAL active shared generation cannot CLEAR complete="+std::to_string(complete);GlobalFixture f(assets,content);auto leaf=f.begin();
  if(complete){while(!leaf->advance(1)){}f.operation->respond_source_global_draw(*leaf);}else require(!leaf->advance(1),"Global REP completed active clear case");
  const auto before=global_snapshot(f);bool rejected{};try{f.native.work->clear_objects();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&global_snapshot(f)==before,"Actual CLEAR replaced a live shared global generation");
}
void global_clipped_generation(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" GLOBAL all-clipped still consumes exactly one fresh generation";GlobalFixture f(assets,content);
  for(const auto &role:f.specification.roles)f.native.world.actors.actor(*f.native.actors[role.role]).behavior.projected_y=256;
  const auto initial=f.native.world.actor_object_display_state.draw_sorting;auto leaf=f.begin();while(!leaf->advance(1)){}f.operation->respond_source_global_draw(*leaf);
  auto screen=f.operation->begin_source_screen(*f.native.work,object_screen_context);while(!screen->advance(1)){}
  const auto &state=f.native.world.actor_object_display_state;
  require(state.builder.address==0x500&&state.builder.high_address==0x700&&state.builder.high_buffer==0x80&&state.draw_sorting==initial,
    "Clipped-before-sort graph changed sorting/builder or invoked a role");
  for(unsigned q=0;q<4;++q)require(!state.working[4+q*258+256]&&!state.working[4+q*258+257],"Clipped graph manufactured a queue entry");
  f.operation->respond_source_screen(*screen);const auto before=global_snapshot(f);bool rejected{};
  try{f.begin();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&global_snapshot(f)==before,"All-clipped global generation remained reusable despite actual Screen consumer");
}
unsigned global_regressions(const GameAssets &assets,const session::Content &content) {
  for(unsigned kind=0;kind<32;++kind)global_rejection(assets,content,kind);
  global_expired_entry(assets,content);global_receipts(assets,content);
  for(bool parent:{false,true})for(bool complete:{false,true})global_abandonment(assets,content,parent,complete);
  for(unsigned owner=0;owner<8;++owner)for(unsigned stage=0;stage<3;++stage)if(owner!=3||stage)global_lost_owner(assets,content,owner,stage);
  for(unsigned owner=0;owner<3;++owner)for(unsigned stage=0;stage<3;++stage)global_prepared_loss(assets,content,owner,stage);
  for(bool eager:{false,true})global_generation(assets,content,eager);
  for(bool complete:{false,true})global_active_clear(assets,content,complete);
  global_clipped_generation(assets,content);return 75;
}
} // namespace

int main(int argc,char **argv) {try {
  if(argc<2)return 77;
  const bool smoke=std::string(argv[1])=="--global-draw-smoke";
  if(smoke&&argc<3)return 77;
  for(int arg=smoke?2:1;arg<argc;++arg) {
    const auto assets=load_game_assets(argv[arg],asset_profiles());const session::Content content(assets.image,assets.version);
    unsigned cases{};std::set<unsigned> sites;
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned scenario=0;scenario<8;++scenario) {
      GlobalCase c;c.fast=fast;c.budget=budget;c.selected=1+(scenario&1);
      if(scenario==1)c.roles={{0,1,false,128,112,100,0x80,2}};
      if(scenario==2)c.roles={{24}};
      if(scenario==3)c.roles=global_triple().roles;
      if(scenario==4)c.roles={{24,1,false,128,112,100,0x80,0},{2,1,true,144,120,0xffff,0x81,1},
        {29,1,false,160,128,0x8000,0x82,2},{0,1,true,176,136,0x7fff,0x83,3}};
      if(scenario==5)c.roles={{24,1,false,128,112,0x7fff},{2,1,true,144,120,0xffff},
        {29,1,false,160,128,0},{0,1,true,176,136,0x8000}};
      if(scenario==6)c.roles={{24,1,false,128,256},{2,1,true,320,112},
        {29,1,false,128,0xffbf},{0,1,true,0xffc0,0xffc0}};
      if(scenario==7)c.roles={{0,1,false,128,112,100,0x80,0x8002},{2,1,true,144,120,200,0x81,3},
        {4,1,false,160,128,300,0x82,0xc002},{6,1,true,176,136,400,0x83,1}};
      global_case(assets,content,c,sites);++cases;
    }
    const auto regressions=global_regressions(assets,content);
    if(!smoke) {
      const std::array<std::array<unsigned,4>,4> orders{{{24,2,29,0},{0,29,2,24},{2,0,24,29},{29,24,0,2}}};
      const std::array<std::array<unsigned,4>,4> positions{{{0,0x7fff,0x8000,0xffff},{0xffff,0x8000,0x7fff,0},{100,100,100,100},{0x8000,0,0xffff,0x7fff}}};
      for(const auto &order:orders)for(const auto &position:positions)for(unsigned priority=0;priority<4;++priority)for(bool mirror:{false,true}) {
        GlobalCase c;c.selected=1+unsigned(mirror);c.fast=bool(priority&1);
        for(unsigned i=0;i<order.size();++i)c.roles.push_back({order[i],1,mirror,std::uint16_t(128+i*16),std::uint16_t(112+i*8),
          std::uint16_t(position[i]),std::uint16_t(0x80|(i%4)),std::uint16_t(priority)});
        global_case(assets,content,c,sites);++cases;
      }
      // Global clipping is before deferred sorting and differs from emitter
      // clipping. Include both sides of each unsigned global boundary.
      const std::array<std::array<unsigned,2>,10> coordinates{{{128,112},{0,0},{319,255},{320,112},{128,256},
        {0xffbf,112},{0xffc0,112},{128,0xffbf},{128,0xffc0},{0xffc0,0xffc0}}};
      for(unsigned group:{0u,1u,254u})for(const auto &xy:coordinates)for(unsigned priority=0;priority<4;++priority)
        for(bool mirror:{false,true})for(bool fast:{false,true}) {
          GlobalCase c;c.fast=fast;c.selected=1+unsigned(mirror);
          c.roles={{mirror?29u:0u,group,mirror,std::uint16_t(xy[0]),std::uint16_t(xy[1]),0xffff,
            std::uint16_t(0x80|(priority%4)),std::uint16_t(priority)}};
          global_case(assets,content,c,sites);++cases;
        }
      // Actual creation body-divide tables straddle different page boundaries
      // in the two regions. Each host creates all three sparse rows together.
      for(unsigned group:{0u,1u,254u})for(unsigned surface=0;surface<4;++surface)for(bool mirror:{false,true})
        for(unsigned priority=0;priority<4;++priority) {
          GlobalCase c;c.selected=1+unsigned(mirror);c.fast=bool(surface&1);
          for(unsigned role:{12u,13u,14u})c.roles.push_back({role,group,mirror,128,112,std::uint16_t(role*71),
            std::uint16_t(0x80|surface),std::uint16_t(priority)});
          global_case(assets,content,c,sites);++cases;
        }
      for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(bool mirror:{false,true})
        for(std::uint16_t raw:{std::uint16_t(0x8002),std::uint16_t(0xc002)}) {
          GlobalCase c;c.fast=fast;c.budget=budget;c.selected=1+unsigned(mirror);
          c.roles={{0,1,mirror,128,112,0xffff,0x80,raw},{2,1,!mirror,144,120,0x8000,0x81,3},
            {4,1,mirror,160,128,0x7fff,0x82,raw},{6,1,!mirror,176,136,0,0x83,1}};
          global_case(assets,content,c,sites);++cases;
        }
      for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned selected:{1u,2u}) {
        GlobalCase c;c.fast=fast;c.budget=budget;c.selected=selected;
        for(unsigned role=0;role<30;++role)c.roles.push_back({role,1,bool(role&1),128,112,std::uint16_t(role*2001),
          std::uint16_t(0x80|(role%4)),std::uint16_t(role%4)});
        global_case(assets,content,c,sites);++cases;
      }
      for(bool fast:{false,true})for(unsigned selected:{1u,2u}) {
        auto c=global_triple();c.fast=fast;c.selected=selected;c.enabled=false;c.line=224;c.horizontal=1300;
        global_case(assets,content,c,sites);++cases;
      }
      // Independent source vector for three genuine group1 two-piece maps:
      // global C2360/R1260/S592, external indirect JSR C8/R3/S4, Screen
      // C1632/R920/S376 including the real fourth-piece high-table flush.
      // Combined C4000/R2183/S972 gives25944fast/30310slow useful clocks.
      // This uniform25-line range includes physical refresh/NMI naturally;
      // neither elapsed delay nor a phase is fitted to reference output.
      for(bool fast:{false,true})for(unsigned line=200;line<=224;++line)for(unsigned h=0;h<1364;h+=16) {
        auto c=global_triple();c.fast=fast;c.line=line;c.horizontal=h;
        global_case(assets,content,c,sites);++cases;
      }
      const unsigned global_shift=assets.version==GameVersion::JP?56:0,role_shift=assets.version==GameVersion::JP?21:0;
      require(sites.contains(0x80db66-global_shift),"Declared physical grid missed actual global deferred sorting prepend store");
      require(sites.contains(0x80dbab-global_shift),"Declared physical grid missed actual greater/equal-Y candidate replacement store");
      require(sites.contains(0x80dbd4-global_shift),"Declared physical grid missed actual non-head sorting splice store");
      const auto role_reached=[&](unsigned lo,unsigned hi){return std::any_of(sites.begin(),sites.end(),[&](unsigned pc){return pc>=lo-role_shift&&pc<=hi-role_shift;});};
      require(role_reached(0x80a3d8,0x80a3e1)||role_reached(0x80a3f0,0x80a3f9),"Declared physical grid missed nested child attribute read/modify/store");
      require(role_reached(0x80a401,0x80a409),"Declared physical grid missed nested distinct bank/priority stores");
      require(sites.contains(assets.version==GameVersion::JP?0x8094aa:0x8094cb),"Declared physical grid missed actual indirect caller after final global near RTS");
      const unsigned screen_shift=assets.version==GameVersion::JP?15:0;
      require(sites.contains(0xc08b86-screen_shift)||sites.contains(0xc08b88-screen_shift),
        "Declared physical grid missed original NMI between final display selection and next-buffer toggle stores");
    }
    std::cout<<"PASS "<<assets.title<<" actual bank80 global draw compositions="<<cases<<" regressions="<<regressions<<" checks="<<checks<<'\n';
  }
  return 0;
}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}}
