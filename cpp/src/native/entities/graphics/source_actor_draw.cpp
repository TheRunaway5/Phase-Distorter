#include "eb/native/entities/graphics/source_actor_draw.hpp"
#include "eb/native/entities/graphics/source_actor_kernel.hpp"
#include "eb/native/entities/graphics/object_display.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/world_runtime.hpp"
#include <stdexcept>
namespace eb::native::story {
namespace {
void require(bool value,const char *message){if(!value)throw std::logic_error(message);}
std::uint16_t word(const entities::graphics::ObjectDisplayState &state,unsigned at){
  return std::uint16_t(state.working[at]|unsigned(state.working[at+1])<<8);
}
}
void SourceActorDrawEntry::set_map_high(std::uint16_t value){
  require(!claimed_,"Source actor draw entry is already leased");map_high_=value;
}
void SourceActorDrawEntry::set_callback(std::uint16_t value){
  require(!claimed_,"Source actor draw entry is already leased");callback_=value;
}
void SourceActorDrawEntry::set_page(std::array<std::uint8_t,256> value){
  require(!claimed_,"Source actor draw entry is already leased");page_=value;
}
void SourceActorDraw::validate_owner(SourceWorkClock &work,TickState &ticks,const battle::FrameDisplay &frames){
  work.require_healthy();
  require(&work.frames_==&frames&&work.uses_clock(work.physical_,ticks)&&
      frames.uses_object_source(work.object_display_)&&&work.object_display_.state()==&work.objects_,
      "Source actor draw requires its actual clock/display/OAM owners");
  require(frames.pending_display_id()<=2,"Source actor draw has an unowned pending display selection");
  const auto *peripherals=frames.peripherals();
  require(peripherals&&peripherals->uses(work.physical_)&&work.physical_.uses_peripherals(*peripherals),
      "Source actor draw requires its actual physical peripheral owner");
  require(!(ticks.effective_interrupt_mask()&0x30),"Source actor draw has unowned H/V IRQ work");
  require(!(ticks.effective_interrupt_mask()&0x80)||work.has_interrupt_work(),
      "Source actor draw lacks actual NMI work");
  // The default callback and represented NMI D0 body do not touch declared
  // C-stack page1D00. Other callback-local aliases require their own proof.
  require(work.runtime_.uses_default_interrupt_callback(),
      "Source actor draw has an unrepresented callback/local-page dependency");
}
struct SourceActorDraw::Admission {
  using Generation=entities::graphics::ObjectDisplay::SourceGeneration;
  entities::graphics::ObjectDisplay &display;
  std::shared_ptr<Generation> generation;
  entities::graphics::SourceObjectMap map;
  SourceActorDrawEntry &entry;
  std::weak_ptr<const void> entry_lifetime;
  ActorId actor{};
  unsigned role{};
  Admission(entities::graphics::ObjectDisplay &owner,std::shared_ptr<Generation> gen,
      entities::graphics::SourceObjectMap content,SourceActorDrawCall call,unsigned source_role)
      :display(owner),generation(std::move(gen)),map(std::move(content)),entry(call.entry),
       entry_lifetime(call.entry_lifetime),actor(call.actor),role(source_role){}
  void validate() const {
    require(!entry_lifetime.expired(),"Source actor draw lost its declared entry owner");
    map.validate();
    require(display.source_generation_==generation&&
        (generation->phase==Generation::Phase::Cleared||generation->phase==Generation::Phase::Inserting||
         generation->phase==Generation::Phase::Prepared||generation->phase==Generation::Phase::Emitting),
        "Source actor draw lost its exact unemitted clear generation");
    require(display.actors_.actor_for_role(role)==actor&&display.lifecycle_.owns(actor)&&
        !display.lifecycle_.busy()&&!display.lifecycle_.failed(),
        "Source actor draw lost its actual authored actor/creation owner");
  }
};
std::shared_ptr<SourceActorDraw::Admission> SourceActorDraw::admit(SourceWorkClock &work,
    SourceActorDrawContext context,SourceActorDrawCall call){
  auto &display=work.object_display_;auto &actors=display.actors_;
  require(!call.entry_lifetime.expired(),"Source actor draw lost its declared entry before admission");
  require(!call.entry.claimed_,"Source actor draw entry belongs to another invocation");
  require(!actors.in_tick()&&!display.lifecycle_.busy()&&!display.lifecycle_.failed()&&
      display.lifecycle_.owns(call.actor),"Source actor draw lacks a complete healthy actual created actor");
  const auto &actor=actors.actor(call.actor);const auto source_role=actor.authored_role();
  require(source_role&&*source_role<30,"Source actor draw lacks its real numeric role");
  require(std::uint8_t(call.entry.map_high_)==0x7e&&!(call.entry.map_high_&0x8000),
      "Source actor draw has an unsupported retained full map-high word");
  const auto callback=actors.version()==GameVersion::JP?0xa383:0xa3a4;
  require(call.entry.callback_==callback,"Source actor draw has an unsupported actual callback selector");
  require(!(actor.action().animation&0x8000),"Source actor draw has an unsupported negative animation gate");
  require(!(actor.behavior.surface_flags&0x000c)&&!actor.appearance_context.overlay_flags,
      "Source actor draw has unrepresented actual water/overlay work");
  const auto raw=actor.action().priority;
  require(!(raw&0x8000)||(raw&0x3f)<30,"Source actor draw parent priority leaves its actual30 rows");
  const auto group=raw&0x8000?actors.authored_draw_priority(raw&0x3f):raw;
  require(group<4,"Source actor draw priority leaves its actual four queues");
  auto map=display.source_actor_map(call.actor,false);map.validate_path(127);
  display.source_actor_map(call.actor,true).validate_path(127);
  const auto &record=display.maps_.role(*source_role);
  const auto divide=display.lifecycle_.role(*source_role).body_divide;
  require(record.size&&record.size%5==0&&unsigned(divide>>8)+unsigned(divide&0xff)==record.size/5&&
      (divide>>8)<=64&&(divide&0xff)<=64&&bool(map.write_),
      "Source actor draw lacks its actual retained creation body split/map extent");
  // This first callback owns genuine ordinary creation halves. Declared
  // linked maps need their attribute-store/link reachability proof separately.
  for(unsigned half=0;half<2;++half)for(unsigned part=0;part<record.size/5;++part){
    const auto at=std::uint16_t(record.pointer+half*record.size+part*5);
    require(map.read(at)!=0x80&&bool(map.read(std::uint16_t(at+4))&0x80)==(part+1==record.size/5),
        "Source actor draw has unrepresented linked/noncreation map work");
  }
  const auto generation=display.source_generation_;
  require(generation&&generation->phase==Admission::Generation::Phase::Cleared&&
      generation->buffer==work.frames_.next_buffer_id(),
      "Source actor draw requires its fresh actual selected OAM_CLEAR generation");
  require(!work.frames_.pending()||work.frames_.pending_display_id()!=generation->buffer,
      "Source actor draw would overwrite its pending physical descriptor");
  for(unsigned queue=0;queue<4;++queue)require(!word(work.objects_,4+queue*258+256),
      "Source actor draw clear already contains queued work");
  const unsigned base=generation->buffer==1?0x500:0x800;const auto &builder=work.objects_.builder;
  require(builder.address==base&&builder.end_address==base+512&&builder.high_address==base+512&&builder.high_buffer==0x80,
      "Source actor draw lacks its actual fresh cleared builder");
  require(work.objects_.scratch.high_pointer_bank==0||work.objects_.scratch.high_pointer_bank==0x7e,
      "Source actor draw lacks its actual high-table pointer bank");
  (void)context;
  return std::make_shared<Admission>(display,generation,std::move(map),call,*source_role);
}
std::unique_ptr<SourceActorDraw> Scene::Operation::begin_source_actor_draw(SourceWorkClock &work,
    SourceActorDrawContext context,SourceActorDrawCall call){
  require(context.native_mode&&context.low_wram_stack&&context.wide_indexes&&context.decimal_clear&&
      context.program_bank==0x80&&context.data_bank==0x7e&&context.direct_page==0x1e00&&context.stack_pointer==0x1ffd,
      "Source actor draw requires actual bank80/7E/native/X16/binary/D1E00/S1FFD near-entry context");
  auto admission=std::make_shared<std::shared_ptr<SourceActorDraw::Admission>>();
  auto receipt=pin_source_objects(work,[&work,admission,call,context](TickState &ticks,const battle::FrameDisplay &frames){
    SourceActorDraw::validate_owner(work,ticks,frames);
    if(!*admission)*admission=SourceActorDraw::admit(work,context,call);
    (*admission)->validate();
  });
  try{return std::unique_ptr<SourceActorDraw>(new SourceActorDraw(work,receipt,context,call,*admission));}
  catch(...){receipt->poison();throw;}
}
struct SourceActorDraw::Execution {
  SourceObjectReceipt &receipt;
  std::shared_ptr<Admission> admission;
  std::unique_ptr<SourceActorDrawKernel> kernel;
  std::uint64_t retired{};
  Execution(SourceWorkClock &work,SourceObjectReceipt &lease,SourceActorDrawContext context,
      SourceActorDrawCall call,std::shared_ptr<Admission> accepted)
      :receipt(lease),admission(std::move(accepted)),
       kernel(new SourceActorDrawKernel(work,admission->display,work.objects_,context,call.actor,
         admission->role,admission->map,call.entry.map_high_,call.entry.callback_,call.entry.page_,
         [accepted=admission](unsigned group,unsigned at,const entities::graphics::SourceObjectMap &map){
           accepted->generation->maps[group][at]=map;
         })){}
  void step(){
    kernel->step();++retired;
    if(kernel->complete()){
      receipt.completed=true;admission->generation->phase=Admission::Generation::Phase::Prepared;
    }
  }
};
SourceActorDraw::SourceActorDraw(SourceWorkClock &work,std::shared_ptr<SourceObjectReceipt> receipt,
    SourceActorDrawContext context,SourceActorDrawCall call,std::shared_ptr<Admission> accepted)
    :receipt_(std::move(receipt)),execution_(std::make_unique<Execution>(work,*receipt_,context,call,accepted)){
  accepted->entry.claimed_=true;accepted->generation->phase=Admission::Generation::Phase::Inserting;
  receipt_->begin_emission=[accepted]{
    accepted->validate();require(accepted->generation->phase==Admission::Generation::Phase::Prepared,
        "Source actor descriptor requires its exact completed prepared generation");
    accepted->generation->phase=Admission::Generation::Phase::Emitting;
  };
  receipt_->finish_emission=[accepted]{
    accepted->validate();require(accepted->generation->phase==Admission::Generation::Phase::Emitting,
        "Source actor descriptor finish requires its exact emitting generation");
    accepted->generation->phase=Admission::Generation::Phase::Emitted;accepted->entry.claimed_=false;
  };
}
SourceActorDraw::~SourceActorDraw(){
  if(receipt_->live&&!receipt_->acknowledged&&!receipt_->consumed)receipt_->poison();
}
bool SourceActorDraw::advance(unsigned budget){
  require(receipt_->live&&!receipt_->consumed&&!receipt_->executing&&!receipt_->emitting,
      "Source actor draw lost its live single invocation");
  receipt_->executing=true;
  try{
    receipt_->validate();
    while(budget--&&!receipt_->completed){receipt_->validate();execution_->step();}
    receipt_->executing=false;return receipt_->completed;
  }catch(...){receipt_->executing=false;receipt_->poison();throw;}
}
bool SourceActorDraw::complete() const noexcept{return receipt_->completed;}
std::uint64_t SourceActorDraw::retired_instructions() const noexcept{return execution_->retired;}
}
namespace eb::native {
std::unique_ptr<story::SourceActorDraw> WorldRuntime::Operation::begin_source_actor_draw(story::SourceWorkClock &work,
    story::SourceActorDrawContext context,story::SourceActorDrawCall call){
  return source_screen_owner().begin_source_actor_draw(work,context,call);
}
}
