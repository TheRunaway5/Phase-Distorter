// Actual bank80 near role draw wrapper, attribute/priority/no-overlay work,
// tail insertion and one original UPDATE_SCREEN. Both hosts create their own
// real map allocation. Retained component inputs precede measured work;
// unsuppressed RUN, global sorting and upload timing remain outside this proof.
#define EB_NATIVE_SOURCE_OBJECTS_REFERENCE_NO_MAIN
#include "native_source_objects_reference.cpp"
#undef EB_NATIVE_SOURCE_OBJECTS_REFERENCE_NO_MAIN
#include "eb/native/entities/graphics/source_actor_draw.hpp"

namespace {
constexpr SourceActorDrawContext draw_context{true,true,true,true,0x80,0x7e,0x1e00,0x1ffd};
struct ActorCreatedMap {
  OriginalCreatedMap map;
  std::uint16_t body_divide{},displayed{},callback{},map_high{};
};
ActorCreatedMap actor_created_map(const GameAssets &assets,unsigned group,unsigned role) {
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
  return {result,word((jp?0x2fe4:0x2be6)+role*2),word((jp?0x1ab8:0x341a)+role*2),
      word((jp?0x11d8:0x11e2)+role*2),word((jp?0x1160:0x116a)+role*2)};
}

std::array<std::uint8_t,256> draw_page() {
  std::array<std::uint8_t,256> result;
  for(unsigned i=0;i<result.size();++i)result[i]=std::uint8_t(i*73+91);
  return result;
}
struct DrawCase {
  bool fast=true,mirrored=false;
  unsigned budget=1,selected=1,group=1,role=0,line=40,horizontal=100;
  std::uint16_t x=128,y=112,surface=0x80,priority=0,map_high=0x407e;
};
struct DrawOwners {
  ObjectOwners objects;
  std::array<std::uint8_t,256> page;
  std::array<std::uint16_t,30> priorities;
  std::uint16_t body_divide{},displayed{},callback{},map_high{},animation{},surface{},overlay{};
  bool operator==(const DrawOwners&) const=default;
};
DrawOwners draw_owners(ObjectOriginal &o,unsigned origin,unsigned role) {
  const bool jp=o.bus.game_version()==GameVersion::JP;const unsigned r=role*2;
  DrawOwners result;result.objects=object_owners(o,origin);
  std::copy_n(o.bus.work_ram.begin()+0x1d00,256,result.page.begin());
  for(unsigned i=0;i<30;++i)result.priorities[i]=std::uint16_t(o.word((jp?0x1034:0x103e)+i*2));
  result.body_divide=std::uint16_t(o.word((jp?0x2fe4:0x2be6)+r));
  result.displayed=std::uint16_t(o.word((jp?0x1ab8:0x341a)+r));
  result.callback=std::uint16_t(o.word((jp?0x11d8:0x11e2)+r));
  result.map_high=std::uint16_t(o.word((jp?0x1160:0x116a)+r));
  result.animation=std::uint16_t(o.word((jp?0x10e8:0x10f2)+r));
  result.surface=std::uint16_t(o.word((jp?0x2fa8:0x2baa)+r));
  result.overlay=std::uint16_t(o.word((jp?0x3278:0x2e7a)+r));return result;
}
DrawOwners draw_owners(const ObjectNative &n,const SourceActorDrawEntry &entry,unsigned role) {
  DrawOwners result;result.objects=object_owners(n);result.page=entry.page();
  const auto &w=n.world;for(unsigned i=0;i<30;++i)result.priorities[i]=w.actors.authored_draw_priority(i);
  const auto &record=w.actor_graphics->role(role);const auto &actor=w.actors.actor(n.created_actor);
  result.body_divide=record.body_divide;result.displayed=record.displayed_reference;
  result.callback=entry.callback();result.map_high=entry.map_high();result.animation=actor.action().animation;
  result.surface=actor.behavior.surface_flags;result.overlay=actor.appearance_context.overlay_flags;return result;
}
void same_draw(ObjectOriginal &o,const ObjectNative &n,const SourceActorDrawEntry &entry,unsigned origin,unsigned role,const char *where) {
  same_objects(o,n,origin,where);const auto expected=draw_owners(o,origin,role),actual=draw_owners(n,entry,role);
  if(actual!=expected) {
    std::ostringstream out;out<<where<<" draw owners PC="<<std::hex<<o.cpu.program_counter
      <<" page="<<(actual.page==expected.page)<<" priorities="<<(actual.priorities==expected.priorities)
      <<" body="<<actual.body_divide<<'/'<<expected.body_divide<<" displayed="<<actual.displayed<<'/'<<expected.displayed
      <<" mapHigh="<<actual.map_high<<'/'<<expected.map_high<<" callback="<<actual.callback<<'/'<<expected.callback
      <<" animation="<<actual.animation<<'/'<<expected.animation<<" surface="<<actual.surface<<'/'<<expected.surface
      <<" overlay="<<actual.overlay<<'/'<<expected.overlay;require(false,out.str());
  }
  ++checks;
}
void draw_audit(ObjectOriginal &o) {
  o.audit();const auto writes=o.cpu.observe_memory_write;
  o.cpu.observe_memory_write=[&o,writes](unsigned address,std::uint8_t value) {
    const auto before=o.stores.size();writes(address,value);
    if(o.stores.size()!=before)o.stores.back().site=o.instruction_entry;
  };
  o.bus.debug_read_rom=[&o](unsigned offset,std::uint8_t value) {
    const auto site=o.cpu.program_counter&0x3fffff;
    const auto table=(0xc08c65-o.delta())&0x3fffff;
    require((offset>=site&&offset-site<4)||offset==0xffea||offset==0xffeb||(offset>=table&&offset-table<8),
        "Actual draw wrapper read undeclared immutable original ROM content");
    o.access_penalty+=(!o.fast||(o.cpu.program_counter>>16)==0||offset==0xffea||offset==0xffeb)?2:0;return value;
  };
}
void draw_case(const GameAssets &assets,const session::Content &content,const DrawCase &c,std::set<unsigned> &sites) {
  const bool jp=assets.version==GameVersion::JP;const unsigned r=c.role*2;
  context=assets.title+" DRAW fast="+std::to_string(c.fast)+" budget="+std::to_string(c.budget)+
    " group="+std::to_string(c.group)+" role="+std::to_string(c.role)+" mirror="+std::to_string(c.mirrored)+
    " surface="+std::to_string(c.surface)+" priority="+std::to_string(c.priority)+" phase="+
    std::to_string(c.line)+":"+std::to_string(c.horizontal);
  ObjectOriginal o(assets,c.fast,c.selected);ObjectNative n(assets,content,c.fast,true,c.selected,true,c.group,c.role,c.x,c.y);
  const auto creation=actor_created_map(assets,c.group,c.role);auto &w=n.world;
  const auto &record=w.actor_graphics->role(c.role);const auto &allocation=w.actor_object_maps->role(c.role);
  require(creation.map.bytes==w.actor_object_map_state.bytes&&creation.map.pointer==allocation.pointer&&
      creation.map.size==allocation.size&&creation.body_divide==record.body_divide&&creation.displayed==record.displayed_reference&&
      creation.callback==(jp?0xa383:0xa3a4)&&creation.map_high==0x7e,
      "Independent real CREATE/Lifecycle map/body/reference/callback baseline differs");
  std::copy(creation.map.bytes.begin(),creation.map.bytes.end(),o.bus.work_ram.begin()+creation.map.origin);
  o.bus.video_ram=creation.map.video;for(unsigned i=0;i<creation.map.dma.size();++i)o.bus.write_byte(0x4300+i,creation.map.dma[i]);
  auto operation=prepare_screen(o,n,c.selected,0x1234,0,0,c.selected^3,c.line,c.horizontal);
  // Independently declared retained component words in their actual owners.
  // Their projection/appearance/upload predecessor timing is excluded.
  auto &actor=w.actors.actor(n.created_actor);actor.behavior.surface_flags=c.surface;actor.action().animation=0;
  actor.appearance_context.overlay_flags=0;
  w.actor_lifecycle_state.roles[c.role].displayed_reference=std::uint16_t(c.mirrored?0x5a01:0x5a00);
  o.put((jp?0x1ab8:0x341a)+r,c.mirrored?0x5a01:0x5a00);o.put((jp?0x2fe4:0x2be6)+r,creation.body_divide);
  o.put((jp?0x1160:0x116a)+r,c.map_high);o.put((jp?0x1124:0x112e)+r,creation.map.pointer);
  o.put((jp?0x2d14:0x2916)+r,creation.map.size);o.put((jp?0x11d8:0x11e2)+r,jp?0xa383:0xa3a4);
  o.put((jp?0x10e8:0x10f2)+r,0);o.put((jp?0x2fa8:0x2baa)+r,c.surface);o.put((jp?0x3278:0x2e7a)+r,0);
  o.put((jp?0xb0c:0xb16)+r,c.x);o.put((jp?0xb48:0xb52)+r,c.y);
  for(unsigned i=0;i<30;++i){w.actors.set_authored_draw_priority(i,std::uint16_t(i%4));o.put((jp?0x1034:0x103e)+i*2,i%4);}
  w.actors.set_authored_draw_priority(c.role,c.priority);o.put((jp?0x1034:0x103e)+r,c.priority);
  const auto page=draw_page();SourceActorDrawEntry entry(c.map_high,std::uint16_t(jp?0xa383:0xa3a4),page);
  std::copy(page.begin(),page.end(),o.bus.work_ram.begin()+0x1d00);
  w.actor_object_display_state.scratch={0x6d7e,0x2137,0x6b51,0xe731,0};
  o.put(0xb,0x6d7e);o.put(0x9b,0x2137);o.put(0x9d,0x6b51);o.put(0x9f,0xe731);o.bus.work_ram[9]=0;
  const unsigned caller=jp?0x80db36:0x80db6e,target=jp?0x80a0a9:0x80a0ca;
  const auto at=caller&0x3fffff;
  require(assets.image[at]==0x20&&(assets.image[at+1]|unsigned(assets.image[at+2])<<8)==(target&0xffff),
      "Actual regional bank80 near role caller no longer matches immutable original bytes");
  o.cpu.program_counter=caller;o.cpu.status_register=4;o.cpu.data_bank=0x7e;o.cpu.direct_page=0x1e00;
  o.cpu.accumulator=std::uint16_t(c.role);o.cpu.x_index=0x4567;o.cpu.y_index=0x89ab;
  draw_audit(o);const auto before=draw_owners(n,entry,c.role);const auto audio=n.audio.master_clocks(),refresh=n.work->refresh_pauses();
  same_draw(o,n,entry,creation.map.origin,c.role,"independent retained actor entry");
  o.instruction();n.work->retire_source_work({6,3,2,0});
  require(o.cpu.program_counter==target&&o.cpu.stack_pointer==0x1ffd,"Authored external near caller lost its bank/stack");
  same_draw(o,n,entry,creation.map.origin,c.role,"actual separate caller JSR");
  auto leaf=operation->begin_source_actor_draw(*n.work,draw_context,{n.created_actor,entry});
  const auto called=draw_owners(n,entry,c.role);bool early{};
  require(!leaf->advance(0)&&draw_owners(n,entry,c.role)==called&&!leaf->retired_instructions(),"Zero actor-draw budget mutated owners");
  try{operation->respond_source_actor_draw(*leaf);}catch(const std::logic_error&){early=true;}
  require(early&&draw_owners(n,entry,c.role)==called,"Incomplete actor-draw receipt changed parent/owners");
  unsigned atoms{};
  if(c.budget==1)for(unsigned i=0;;++i) {
    require(i<20000,"Actual role wrapper did not near return");o.instruction();++atoms;const bool done=leaf->advance(1);
    same_draw(o,n,entry,creation.map.origin,c.role,"literal actor-draw retirement");
    require(leaf->retired_instructions()==atoms&&done==(o.cpu.program_counter==caller+3),"Actor draw skipped literal atoms or changed near return");if(done)break;
  } else {
    while(o.cpu.program_counter!=caller+3){o.instruction();++atoms;}
    while(!leaf->advance(c.budget)){}same_draw(o,n,entry,creation.map.origin,c.role,"budgeted actor-draw return");
    require(leaf->retired_instructions()==atoms,"Actor-draw budget changed actual literal count");
  }
  require(o.cpu.stack_pointer==0x1fff&&o.cpu.direct_page==0x1e00&&o.cpu.data_bank==0x7e&&!(o.cpu.status_register&0x30)&&
      o.cpu.x_index==2&&o.cpu.y_index==c.y&&o.cpu.accumulator==c.map_high,
      "Actual bank80 role return lost its stack/D/DB/width/register context");
  const auto prepared=draw_owners(n,entry,c.role);operation->respond_source_actor_draw(*leaf);
  bool duplicate{};try{operation->respond_source_actor_draw(*leaf);}catch(const std::logic_error&){duplicate=true;}
  require(duplicate&&draw_owners(n,entry,c.role)==prepared,"Duplicate actor preparation changed actual owners");
  PreparedObjects map;map.original=creation.map;map.actor=n.created_actor;map.native=w.actor_object_display->source_actor_map(map.actor,c.mirrored);
  ObjectCase metadata;metadata.selected=c.selected;metadata.x=c.x;metadata.y=c.y;
  o.cpu.program_counter=o.call();const auto count=o.foreground;
  auto screen=operation->begin_source_screen(*n.work,object_screen_context);
  if(c.budget==1)for(unsigned i=0;;++i) {
    require(i<20000,"Actual role-prepared screen did not return");o.instruction();const bool done=screen->advance(1);
    same_draw(o,n,entry,creation.map.origin,c.role,"literal actor-prepared screen retirement");object_metadata(o,n,map,metadata);
    require(screen->retired_instructions()==o.foreground-count&&done==(o.cpu.program_counter==o.returned()),"Actor-prepared screen skipped an atom or changed return");if(done)break;
  } else {
    while(o.cpu.program_counter!=o.returned())o.instruction();
    while(!screen->advance(c.budget)){}
    same_draw(o,n,entry,creation.map.origin,c.role,"budgeted actor-prepared screen return");object_metadata(o,n,map,metadata);
    require(screen->retired_instructions()==o.foreground-count,"Actor-prepared screen budget changed literal count");
  }
  require(o.cpu.stack_pointer==0x1fff&&o.cpu.direct_page==0x1e00&&o.cpu.data_bank==0x7e&&!(o.cpu.status_register&0x30),"Composed screen lost actual role caller context");
  require(n.work->refresh_pauses()-refresh==o.refreshes(),"Actor-draw composition refresh differs");
  require(n.audio.master_clocks()-audio==n.work->master_clocks()-before.objects.screen.clocks,"Actor-draw audio elapsed duplicated or omitted");
  require(w.clock.input_polls==0&&w.clock.publications==o.interrupts,"Role draw introduced input or synthetic publication");
  const auto emitted=draw_owners(n,entry,c.role);operation->respond_source_screen(*screen);
  require(draw_owners(n,entry,c.role)==emitted&&operation->advance()==dialogue::Progress::Suspended&&operation->service()==SceneService::Frame,
      "Actor-prepared screen changed owners or resumed the wrong exact WAIT");
  sites.insert(o.interrupted_sites.begin(),o.interrupted_sites.end());
}

struct DrawFixture {
  ObjectFixture base;
  std::unique_ptr<SourceActorDrawEntry> entry;
  DrawFixture(const GameAssets &assets,const session::Content &content,bool nmi=true,bool peripherals=true)
      :base(assets,content,nmi,peripherals),entry(std::make_unique<SourceActorDrawEntry>(0x407e,
        std::uint16_t(assets.version==GameVersion::JP?0xa383:0xa3a4),draw_page())) {
    auto &actor=base.native.world.actors.actor(base.actor);
    actor.behavior.surface_flags=0x80;actor.appearance_context.overlay_flags=0;
    base.native.world.actors.set_authored_draw_priority(0,2);
  }
  std::unique_ptr<SourceActorDraw> begin() {
    return base.operation->begin_source_actor_draw(*base.native.work,draw_context,{base.actor,*entry});
  }
};
struct DrawRegressionOwners {
  ObjectOwners objects;
  std::optional<std::array<std::uint8_t,256>> page;
  std::array<std::uint16_t,30> priorities;
  std::array<entities::graphics::RoleGraphics,30> graphics;
  std::optional<std::array<std::uint16_t,3>> actor;
  bool operator==(const DrawRegressionOwners&) const=default;
};
DrawRegressionOwners draw_snapshot(const DrawFixture &f) {
  DrawRegressionOwners result;const auto &n=f.base.native;const auto &w=n.world;
  result.objects=object_owners(n);if(f.entry)result.page=f.entry->page();
  for(unsigned i=0;i<30;++i)result.priorities[i]=w.actors.authored_draw_priority(i);
  result.graphics=w.actor_lifecycle_state.roles;
  if(const auto id=w.actors.actor_for_role(0);id&&*id==f.base.actor) {
    const auto &actor=w.actors.actor(*id);
    result.actor=std::array<std::uint16_t,3>{actor.action().animation,actor.behavior.surface_flags,actor.appearance_context.overlay_flags};
  }
  return result;
}
void draw_rejection(const GameAssets &assets,const session::Content &content,unsigned kind) {
  context=assets.title+" DRAW pure admission kind="+std::to_string(kind);
  DrawFixture f(assets,content,kind!=25,kind!=26);auto &w=f.base.native.world;
  auto entry=draw_context;ActorId actor=f.base.actor;
  if(kind==0)entry.native_mode=false;
  if(kind==1)entry.low_wram_stack=false;
  if(kind==2)entry.wide_indexes=false;
  if(kind==3)entry.decimal_clear=false;
  if(kind==4)entry.program_bank=0xc0;
  if(kind==5)entry.data_bank=0;
  if(kind==6)entry.direct_page=0x200;
  if(kind==7)entry.stack_pointer=0x1fff;
  if(kind==8)f.entry->set_map_high(0x807e);
  if(kind==9)f.entry->set_map_high(0x407f);
  if(kind==10)f.entry->set_callback(0xa0ca);
  if(kind==11)actor=0;
  if(kind==12)w.actors.actor(f.base.actor).behavior.surface_flags=4;
  if(kind==13)w.actors.actor(f.base.actor).behavior.surface_flags=8;
  if(kind==14)w.actors.actor(f.base.actor).appearance_context.overlay_flags=1;
  if(kind==15)w.actors.actor(f.base.actor).appearance_context.overlay_flags=0x4000;
  if(kind==16)w.actors.actor(f.base.actor).action().animation=0x8000;
  if(kind==17)w.actors.set_authored_draw_priority(0,4);
  if(kind==18)w.actors.set_authored_draw_priority(0,0x801e);
  if(kind==19){w.actors.set_authored_draw_priority(0,0x8002);w.actors.set_authored_draw_priority(2,0x8000);}
  if(kind==20)++w.actor_lifecycle_state.roles[0].body_divide;
  if(kind==21)w.actor_object_map_state.bytes[w.actor_object_maps->role(0).pointer-w.actor_object_maps->origin()]=0x80;
  if(kind==22)w.actor_object_display_state.builder.address=0x504;
  if(kind==23)w.actor_object_display_state.working[260]=2;
  if(kind==24){w.clock.interrupt_mask=0x90;w.clock.retained_hardware_interrupt_mask=0x90;}
  if(kind==25){f.base.native.physical->nmi_enabled(true);w.clock.interrupt_mask=0x80;w.clock.retained_hardware_interrupt_mask=0x80;}
  if(kind==27)w.frame_display.request_retained_screen();
  if(kind==28)w.actor_graphics->release(0);
  const auto before=draw_snapshot(f);const auto audio=f.base.native.audio.master_clocks(),interrupts=f.base.native.work->completed_source_interrupts();
  const auto picture=w.runtime->scene().frame();bool rejected{};
  try{f.base.operation->begin_source_actor_draw(*f.base.native.work,entry,{actor,*f.entry});}
  catch(const std::logic_error&){rejected=true;}
  require(rejected&&draw_snapshot(f)==before&&f.base.native.audio.master_clocks()==audio&&
      f.base.native.work->completed_source_interrupts()==interrupts&&w.runtime->scene().frame()==picture&&!w.runtime->failed(),
      "Unsupported actual actor/page/context work mutated owners or poisoned pure admission");
}
void draw_expired_entry_admission(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" DRAW expired borrowed typed entry before factory";
  DrawFixture f(assets,content);SourceActorDrawCall call{f.base.actor,*f.entry};f.entry.reset();
  const auto before=draw_snapshot(f);const auto audio=f.base.native.audio.master_clocks();bool rejected{};
  try{f.base.operation->begin_source_actor_draw(*f.base.native.work,draw_context,call);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&draw_snapshot(f)==before&&f.base.native.audio.master_clocks()==audio&&!f.base.native.world.runtime->failed(),
      "Factory dereferenced an expired typed component owner or mutated admission");
}
void draw_same_buffer_admission(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" DRAW genuine retained same-buffer request admission";
  DrawFixture f(assets,content);auto &w=f.base.native.world;
  require(w.frame_display.display_request()==2&&w.frame_display.next_buffer_id()==1,
      "Same-buffer regression lost its actual retained producer entry");
  for(unsigned request=0;request<255;++request)w.frame_display.request_retained_screen();
  require(w.frame_display.display_request()==0x0101&&w.frame_display.next_buffer_id()==1,
      "Genuine retained requests did not produce the declared full same-buffer latch");
  const auto before=draw_snapshot(f);const auto audio=f.base.native.audio.master_clocks();
  const auto interrupts=f.base.native.work->completed_source_interrupts();const auto picture=w.runtime->scene().frame();bool rejected{};
  try{f.begin();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&draw_snapshot(f)==before&&f.base.native.audio.master_clocks()==audio&&
      f.base.native.work->completed_source_interrupts()==interrupts&&w.runtime->scene().frame()==picture&&!w.runtime->failed(),
      "Actual same-buffer request claimed/poisoned a producer or mutated admission");
}
void draw_receipts(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" DRAW exact typed preparation/Screen lease single consumer";
  DrawFixture f(assets,content),foreign(assets,content);auto leaf=f.begin();const auto before=draw_snapshot(f),other=draw_snapshot(foreign);
  bool second{},screen{},ordinary{},publication{},high{},callback{},page{};
  try{f.begin();}catch(const std::logic_error&){second=true;}
  try{f.base.operation->begin_source_screen(*f.base.native.work,object_screen_context);}catch(const std::logic_error&){screen=true;}
  try{f.base.operation->complete_frame({0,0});}catch(const std::logic_error&){ordinary=true;}
  try{f.base.operation->complete_publication();}catch(const std::logic_error&){publication=true;}
  try{f.entry->set_map_high(0x7e);}catch(const std::logic_error&){high=true;}
  try{f.entry->set_callback(0);}catch(const std::logic_error&){callback=true;}
  try{f.entry->set_page({});}catch(const std::logic_error&){page=true;}
  require(second&&screen&&ordinary&&publication&&high&&callback&&page&&draw_snapshot(f)==before,
      "Live actor producer allowed a second/bypass/entry rewrite or changed owners");
  while(!leaf->advance(1)){}
  const auto complete=draw_snapshot(f);bool wrong{},unacknowledged{};
  try{foreign.base.operation->respond_source_actor_draw(*leaf);}catch(const std::logic_error&){wrong=true;}
  try{f.base.operation->begin_source_screen(*f.base.native.work,object_screen_context);}catch(const std::logic_error&){unacknowledged=true;}
  require(wrong&&unacknowledged&&draw_snapshot(f)==complete&&draw_snapshot(foreign)==other,
      "Foreign/unacknowledged actual actor receipt consumed a prepared generation");
  f.base.operation->respond_source_actor_draw(*leaf);leaf.reset();bool locked{};
  try{f.entry->set_page({});}catch(const std::logic_error&){locked=true;}
  require(locked&&draw_snapshot(f)==complete,"Acknowledged actor producer unlocked its still-unemitted local page");
  auto emission=f.base.operation->begin_source_screen(*f.base.native.work,object_screen_context);
  while(!emission->advance(1)){}
  const auto emitted=draw_snapshot(f);f.base.operation->respond_source_screen(*emission);bool duplicate{};
  try{f.base.operation->respond_source_screen(*emission);}catch(const std::logic_error&){duplicate=true;}
  require(duplicate&&draw_snapshot(f)==emitted,"Duplicate actor-prepared Screen response replayed actual effects");
  f.entry->set_page(draw_page());f.entry->set_map_high(0x7e);f.entry->set_callback(std::uint16_t(assets.version==GameVersion::JP?0xa383:0xa3a4));
  require(f.base.operation->advance()==dialogue::Progress::Suspended&&f.base.operation->service()==SceneService::Frame,
      "Actor draw+Screen failed to resume the exact real WAIT");
  f.base.operation->complete_frame({0,0});require(f.base.operation->advance()==dialogue::Progress::Finished,"Masked actor predecessor did not finish");
  f.base.operation.reset();auto later=f.base.native.screen();const auto fresh=draw_snapshot(f);bool stale{};
  try{later->respond_source_screen(*emission);}catch(const std::logic_error&){stale=true;}
  require(stale&&draw_snapshot(f)==fresh,"Old actor-prepared Screen receipt consumed a fresh actual CLEAR");
}
void draw_abandonment(const GameAssets &assets,const session::Content &content,bool parent,bool complete) {
  context=assets.title+" DRAW abandonment parent="+std::to_string(parent)+" complete="+std::to_string(complete);
  DrawFixture f(assets,content);auto leaf=f.begin();if(complete){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"REP alone finished role wrapper");
  const auto before=draw_snapshot(f);const auto audio=f.base.native.audio.master_clocks();bool rejected{};
  if(parent){f.base.operation.reset();try{leaf->advance(1);}catch(const std::logic_error&){rejected=true;}}
  else{leaf.reset();try{f.begin();}catch(const std::logic_error&){rejected=true;}}
  require(rejected&&draw_snapshot(f)==before&&f.base.native.audio.master_clocks()==audio,
      "Abandoned actor producer/parent reused entry or advanced borrowed effects");
}
void draw_lost_owner(const GameAssets &assets,const session::Content &content,unsigned owner,unsigned stage) {
  context=assets.title+" DRAW lost owner="+std::to_string(owner)+" stage="+std::to_string(stage);
  DrawFixture f(assets,content);std::unique_ptr<SourceActorDraw> leaf;
  if(stage){leaf=f.begin();if(stage==2){while(!leaf->advance(1)){}}else require(!leaf->advance(1),"Lost-owner REP completed draw");}
  std::optional<SourceActorDrawCall> call;if(owner==0&&stage==0)call.emplace(f.base.actor,*f.entry);
  if(owner==0)f.entry.reset();
  if(owner==1)f.base.native.nmi.reset();
  if(owner==2)f.base.native.physical.reset();
  if(owner==3)f.base.native.work.reset();
  if(owner==4)f.base.native.world.actor_graphics->release(0);
  if(owner==5)f.base.native.world.actor_object_display.reset();
  if(owner==6)f.base.native.world.actors.retire(f.base.actor);
  const auto before=draw_snapshot(f);const auto audio=f.base.native.audio.master_clocks();const auto picture=f.base.native.world.runtime->scene().frame();bool rejected{};
  try{
    if(stage==0){if(call)leaf=f.base.operation->begin_source_actor_draw(*f.base.native.work,draw_context,*call);else leaf=f.begin();}
    else if(stage==1)leaf->advance(1);
    else f.base.operation->respond_source_actor_draw(*leaf);
  }catch(const std::logic_error&){rejected=true;}
  require(rejected&&draw_snapshot(f)==before&&f.base.native.audio.master_clocks()==audio&&f.base.native.world.runtime->scene().frame()==picture,
      "Expired actor/entry/map/display/interrupt/work/physical owner was borrowed or mutated");
}
void draw_prepared_owner_loss(const GameAssets &assets,const session::Content &content,bool entry,bool emitting,bool complete) {
  context=assets.title+" DRAW prepared owner loss entry="+std::to_string(entry)+" emitting="+std::to_string(emitting)+" complete="+std::to_string(complete);
  DrawFixture f(assets,content);auto leaf=f.begin();while(!leaf->advance(1)){}f.base.operation->respond_source_actor_draw(*leaf);
  std::unique_ptr<SourceScreenUpdate> screen;
  if(emitting){screen=f.base.operation->begin_source_screen(*f.base.native.work,object_screen_context);
    if(complete){while(!screen->advance(1)){}}else require(!screen->advance(1),"Screen JSL finished descriptor");}
  if(entry)f.entry.reset();else f.base.native.world.actor_graphics->release(0);
  const auto before=draw_snapshot(f);const auto audio=f.base.native.audio.master_clocks();bool rejected{};
  try{if(!emitting)screen=f.base.operation->begin_source_screen(*f.base.native.work,object_screen_context);
    else if(complete)f.base.operation->respond_source_screen(*screen);else screen->advance(1);}
  catch(const std::logic_error&){rejected=true;}
  require(rejected&&draw_snapshot(f)==before&&f.base.native.audio.master_clocks()==audio,
      "Prepared/emitting Screen lost actor entry/map lifetime but read or changed effects");
}
void draw_generation(const GameAssets &assets,const session::Content &content,bool eager) {
  context=assets.title+" DRAW zero-cursor consumed/revoked generation eager="+std::to_string(eager);
  DrawFixture f(assets,content);
  if(eager){auto image=f.base.native.world.actor_object_display->capture_objects(1);require(bool(image),"Eager zero-object capture absent");}
  else f.base.native.world.actor_object_display->clear_photograph_prefix();
  const auto before=draw_snapshot(f);const auto audio=f.base.native.audio.master_clocks();bool rejected{};
  try{f.begin();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&draw_snapshot(f)==before&&f.base.native.audio.master_clocks()==audio,
      "Actor draw reused a photograph-revoked/eager-emitted unchanged builder generation");
}
void draw_active_clear(const GameAssets &assets,const session::Content &content,bool complete) {
  context=assets.title+" DRAW active generation cannot CLEAR complete="+std::to_string(complete);
  DrawFixture f(assets,content);auto leaf=f.begin();if(complete){while(!leaf->advance(1)){}f.base.operation->respond_source_actor_draw(*leaf);}
  else require(!leaf->advance(1),"Active-clear REP completed role wrapper");
  const auto before=draw_snapshot(f);bool rejected{};try{f.base.native.work->clear_objects();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&draw_snapshot(f)==before,"Actual CLEAR replaced a live role producer/prepared generation");
}
void draw_clipped_generation(const GameAssets &assets,const session::Content &content) {
  context=assets.title+" DRAW all-clipped nonempty queue still consumes exact preparation";
  DrawFixture f(assets,content);f.base.native.world.actors.actor(f.base.actor).behavior.projected_y=0x7fff;
  auto leaf=f.begin();while(!leaf->advance(1)){}f.base.operation->respond_source_actor_draw(*leaf);
  auto screen=f.base.operation->begin_source_screen(*f.base.native.work,object_screen_context);while(!screen->advance(1)){}
  const auto &s=f.base.native.world.actor_object_display_state;
  require(s.builder.address==0x500&&s.builder.high_address==0x700&&s.builder.high_buffer==0x80&&s.working[776]==2,
      "All-clipped role producer changed cursor or lost genuine priority2 queue entry");
  f.base.operation->respond_source_screen(*screen);const auto before=draw_snapshot(f);bool reuse{};
  try{f.begin();}catch(const std::logic_error&){reuse=true;}
  require(reuse&&draw_snapshot(f)==before,"All-clipped role source generation remained reusable");
}
unsigned draw_regressions(const GameAssets &assets,const session::Content &content) {
  for(unsigned kind=0;kind<29;++kind)draw_rejection(assets,content,kind);
  draw_expired_entry_admission(assets,content);draw_same_buffer_admission(assets,content);draw_receipts(assets,content);
  for(bool parent:{false,true})for(bool complete:{false,true})draw_abandonment(assets,content,parent,complete);
  for(unsigned owner=0;owner<7;++owner)for(unsigned stage=0;stage<3;++stage)if(owner!=3||stage)draw_lost_owner(assets,content,owner,stage);
  for(bool entry:{false,true})for(bool emitting:{false,true})for(bool complete:{false,true})
    if(emitting||!complete)draw_prepared_owner_loss(assets,content,entry,emitting,complete);
  for(bool eager:{false,true})draw_generation(assets,content,eager);
  for(bool complete:{false,true})draw_active_clear(assets,content,complete);
  draw_clipped_generation(assets,content);
  return 67;
}
}

#ifndef EB_NATIVE_SOURCE_ACTOR_DRAW_REFERENCE_NO_MAIN
int main(int argc,char **argv) {try {
  if(argc<2)return 77;
  const bool smoke=std::string(argv[1])=="--actor-draw-smoke";
  if(smoke&&argc<3)return 77;
  for(int arg=smoke?2:1;arg<argc;++arg) {
    const auto assets=load_game_assets(argv[arg],asset_profiles());const session::Content content(assets.image,assets.version);
    unsigned cases{};std::set<unsigned> sites;
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned role:{0u,24u})for(bool mirror:{false,true}) {
      DrawCase c;c.fast=fast;c.budget=budget;c.role=role;c.mirrored=mirror;c.selected=mirror?2u:1u;
      draw_case(assets,content,c,sites);++cases;
    }
    const auto regressions=draw_regressions(assets,content);
    if(!smoke) {
      for(unsigned role:{0u,12u,13u,14u,24u,29u})for(unsigned surface=0;surface<4;++surface)
        for(bool mirror:{false,true})for(unsigned priority=0;priority<4;++priority) {
          DrawCase c;c.role=role;c.surface=std::uint16_t(0x80|surface);c.mirrored=mirror;c.priority=std::uint16_t(priority);
          c.selected=1+(priority&1);c.fast=bool(role&1);draw_case(assets,content,c,sites);++cases;
        }
      for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned role:{0u,24u})
        for(bool mirror:{false,true})for(std::uint16_t raw:{std::uint16_t(0x8002),std::uint16_t(0xc002)}) {
          DrawCase c;c.fast=fast;c.budget=budget;c.role=role;c.mirrored=mirror;c.priority=raw;c.selected=mirror?2u:1u;
          draw_case(assets,content,c,sites);++cases;
        }
      for(unsigned group:{0u,1u,254u})for(bool mirror:{false,true})
        for(const auto xy:std::array<std::array<unsigned,2>,7>{{{128,112},{0,0},{319,223},{320,256},{0xffc0,0xffc0},{383,0x7fff},{0xffbf,255}}}) {
          DrawCase c;c.group=group;c.mirrored=mirror;c.x=std::uint16_t(xy[0]);c.y=std::uint16_t(xy[1]);c.selected=mirror?2u:1u;
          c.surface=std::uint16_t(0x80|(cases%4));c.priority=std::uint16_t(cases%4);draw_case(assets,content,c,sites);++cases;
        }
      for(bool fast:{false,true})for(unsigned budget:{1u,4096u})
        for(std::uint16_t word:{std::uint16_t(0x007e),std::uint16_t(0x407e),std::uint16_t(0x7f7e)}) {
          DrawCase c;c.fast=fast;c.budget=budget;c.map_high=word;draw_case(assets,content,c,sites);++cases;
        }
      // Static source count for genuine group1 (two parts), from the actual
      // separate near JSR through final display STA: C1184/R675/S286, useful
      // 7676fast/9026slow clocks before real refresh/NMI. This uniform eight
      // scanline grid covers those6–7lines; no delay is fitted to oracle output.
      for(bool fast:{false,true})for(unsigned line:{217u,218u,219u,220u,221u,222u,223u,224u})
        for(unsigned h=0;h<1364;h+=16) {
          DrawCase c;c.fast=fast;c.line=line;c.horizontal=h;draw_case(assets,content,c,sites);++cases;
        }
      const unsigned shift=assets.version==GameVersion::JP?21:0;
      const auto reached=[&](unsigned lo,unsigned hi){return std::any_of(sites.begin(),sites.end(),[&](unsigned pc){return pc>=lo-shift&&pc<=hi-shift;});};
      require(reached(0x80a0e6,0x80a0ea),"Declared physical grid missed actual sampled map-high/branch/DP stores");
      require(reached(0x80a3d8,0x80a3e1)||reached(0x80a3f0,0x80a3f9),"Declared physical grid missed original attribute read/modify/store");
      require(reached(0x80a401,0x80a409),"Declared physical grid missed distinct byte-bank and priority stores");
      require(sites.contains(assets.version==GameVersion::JP?0x80db39:0x80db71),"Declared physical grid missed the actual caller after final near RTS");
      const unsigned screen_shift=assets.version==GameVersion::JP?15:0;
      require(sites.contains(0xc08b86-screen_shift)||sites.contains(0xc08b88-screen_shift),
          "Declared physical grid missed original NMI between final display selection and next-buffer toggle stores");
    }
    std::cout<<"PASS "<<assets.title<<" actual bank80 actor draw compositions="<<cases<<" regressions="<<regressions<<" checks="<<checks<<'\n';
  }
  return 0;
}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}}

#endif
