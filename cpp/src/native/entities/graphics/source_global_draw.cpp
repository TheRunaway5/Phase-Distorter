#include "eb/native/entities/graphics/source_global_draw.hpp"
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
void SourceGlobalDrawEntry::set_role(unsigned role,SourceRoleDrawFacts value){
  require(!claimed_,"Source global draw entry is already leased");rows_.at(role)=value;
}
void SourceGlobalDrawEntry::set_page(std::array<std::uint8_t,256> value){
  require(!claimed_,"Source global draw entry is already leased");page_=value;
}
void SourceGlobalDraw::validate_owner(SourceWorkClock &work,TickState &ticks,const battle::FrameDisplay &frames,
    const InputState &input,const ActorWorld &actors){
  work.require_healthy();
  require(&work.frames_==&frames&&work.uses_clock(work.physical_,ticks)&&
      frames.uses_object_source(work.object_display_)&&&work.object_display_.state()==&work.objects_&&
      &work.object_display_.actors_==&actors&&actors.uses_drawing_input(input),
      "Source global draw requires its actual clock/display/actor/input owners");
  require(frames.pending_display_id()<=2,"Source global draw has an unowned pending display selection");
  const auto *peripherals=frames.peripherals();
  require(peripherals&&peripherals->uses(work.physical_)&&work.physical_.uses_peripherals(*peripherals),
      "Source global draw requires its actual physical peripheral owner");
  require(!(ticks.effective_interrupt_mask()&0x30),"Source global draw has unowned H/V IRQ work");
  require(!(ticks.effective_interrupt_mask()&0x80)||work.has_interrupt_work(),"Source global draw lacks actual NMI work");
  require(work.runtime_.uses_default_interrupt_callback(),"Source global draw has an unrepresented callback/local-page dependency");
}
struct SourceGlobalDraw::Admission {
  using Generation=entities::graphics::ObjectDisplay::SourceGeneration;
  struct Row {ActorId actor{};entities::graphics::SourceObjectMap map;std::uint16_t next{},body_divide{};};
  entities::graphics::ObjectDisplay &display;
  std::shared_ptr<Generation> generation;
  SourceGlobalDrawEntry &entry;
  std::weak_ptr<const void> lifetime;
  const InputState &input;
  std::array<std::optional<Row>,30> rows;
  std::uint16_t first{};
  Admission(entities::graphics::ObjectDisplay &owner,std::shared_ptr<Generation> gen,
      const InputState &pads,SourceGlobalDrawCall call):display(owner),generation(std::move(gen)),
       entry(call.entry),lifetime(call.lifetime_),input(pads){}
  void validate() const {
    require(!lifetime.expired(),"Source global draw lost its declared entry owner");
    for(unsigned role=0;role<rows.size();++role)if(rows[role]){
      const auto &row=*rows[role];row.map.validate();
      require(display.actors_.actor_for_role(role)==row.actor&&display.lifecycle_.owns(row.actor)&&
          display.actors_.source_next_entity_offset(role)==row.next&&
          display.lifecycle_.role(role).body_divide==row.body_divide,
          "Source global draw lost its actual linked actor/creation owner");
    }
    require(!display.actors_.in_tick()&&!display.lifecycle_.busy()&&!display.lifecycle_.failed()&&
        display.actors_.source_first_entity_offset()==first&&display.actors_.uses_drawing_input(input),
        "Source global draw lost its complete actual graph/input owner");
    require(display.source_generation_==generation&&
        (generation->phase==Generation::Phase::Cleared||generation->phase==Generation::Phase::Inserting||
         generation->phase==Generation::Phase::Prepared||generation->phase==Generation::Phase::Emitting),
        "Source global draw lost its exact unemitted clear generation");
  }
};
std::shared_ptr<SourceGlobalDraw::Admission> SourceGlobalDraw::admit(SourceWorkClock &work,
    const InputState &input,SourceGlobalDrawCall call){
  require(!call.lifetime_.expired(),"Source global draw lost its entry before admission");
  require(!call.entry.claimed_,"Source global draw entry belongs to another invocation");
  require(!(input.state[1]&0x2000),"Source global draw has unrepresented numeric SELECT work");
  auto &display=work.object_display_;auto &actors=display.actors_;
  require(!actors.in_tick()&&!display.lifecycle_.busy()&&!display.lifecycle_.failed(),
      "Source global draw requires a complete healthy actual actor/creation owner");
  const auto generation=display.source_generation_;
  require(generation&&generation->phase==Admission::Generation::Phase::Cleared&&
      generation->buffer==work.frames_.next_buffer_id(),"Source global draw requires its fresh selected OAM_CLEAR");
  require(!work.frames_.pending()||work.frames_.pending_display_id()!=generation->buffer,
      "Source global draw would overwrite its pending physical descriptor");
  for(unsigned queue=0;queue<4;++queue)require(!word(work.objects_,4+queue*258+256),
      "Source global draw clear already has queued work");
  const unsigned base=generation->buffer==1?0x500:0x800;const auto &builder=work.objects_.builder;
  require(builder.address==base&&builder.end_address==base+512&&builder.high_address==base+512&&builder.high_buffer==0x80,
      "Source global draw lacks its actual fresh cleared builder");
  require(work.objects_.scratch.high_pointer_bank==0||work.objects_.scratch.high_pointer_bank==0x7e,
      "Source global draw lacks its actual high-table pointer bank");
  auto accepted=std::make_shared<Admission>(display,generation,input,call);
  accepted->first=actors.source_first_entity_offset();unsigned count{},parts{};
  for(auto offset=accepted->first;offset!=0xffff;){
    require(offset<60&&!(offset&1)&&!accepted->rows[offset/2],"Source global draw has an invalid or cyclic linked row");
    const unsigned role=offset/2;const auto id=actors.actor_for_role(role);
    require(id&&display.lifecycle_.owns(*id),"Source global draw has an unowned active creation row");
    const auto &actor=actors.actor(*id);const auto &facts=call.entry.rows_[role];
    require(std::uint8_t(facts.map_high)==0x7e&&!(facts.map_high&0x8000)&&
        facts.callback==(actors.version()==GameVersion::JP?0xa383:0xa3a4),
        "Source global draw has an unsupported actual map-high/callback row");
    require(!(actor.action().animation&0x8000)&&!(actor.behavior.surface_flags&0xc)&&!actor.appearance_context.overlay_flags,
        "Source global draw has unsupported animation/water/overlay work");
    const auto raw=actor.action().priority;
    require(!(raw&0x8000)||(raw&0x3f)<30,"Source global draw parent priority leaves its actual30 rows");
    require((raw&0x8000?actors.authored_draw_priority(raw&0x3f):raw)<4,
        "Source global draw initial resolved priority leaves its actual four queues");
    auto map=display.source_actor_map(*id,false);map.validate_path(127);
    display.source_actor_map(*id,true).validate_path(127);
    const auto &record=display.maps_.role(role);const auto divide=display.lifecycle_.role(role).body_divide;
    require(record.size&&record.size%5==0&&unsigned(divide>>8)+unsigned(divide&0xff)==record.size/5&&
        (divide>>8)<=64&&(divide&0xff)<=64&&bool(map.write_),
        "Source global draw lacks its actual creation body split/map extent");
    for(unsigned half=0;half<2;++half)for(unsigned part=0;part<record.size/5;++part){
      const auto at=std::uint16_t(record.pointer+half*record.size+part*5);
      require(map.read(at)!=0x80&&bool(map.read(std::uint16_t(at+4))&0x80)==(part+1==record.size/5),
          "Source global draw has unrepresented linked/noncreation map work");
    }
    parts+=record.size/5;require(parts<128,"Source global draw combined maps reach the unowned full-capacity high byte");
    const auto next=actors.source_next_entity_offset(role);
    accepted->rows[role]=Admission::Row{*id,std::move(map),next,divide};offset=next;++count;
  }
  require(count==actors.size(),"Source global draw has unrepresented untagged/unlinked host actors");
  return accepted;
}
std::unique_ptr<SourceGlobalDraw> Scene::Operation::begin_source_global_draw(SourceWorkClock &work,
    SourceGlobalDrawContext context,SourceGlobalDrawCall call){
  require(context.native_mode&&context.low_wram_stack&&context.wide_indexes&&context.decimal_clear&&
      context.program_bank==0x80&&context.data_bank==0x7e&&context.direct_page==0x1e00&&context.stack_pointer==0x1ffd,
      "Source global draw requires declared bank80/7E/native/X16/binary/D1E00/S1FFD component context");
  auto admission=std::make_shared<std::shared_ptr<SourceGlobalDraw::Admission>>();
  auto receipt=pin_source_global_draw(work,[&work,admission,call](TickState &ticks,const battle::FrameDisplay &frames,
      const InputState &input,const ActorWorld &actors){
    SourceGlobalDraw::validate_owner(work,ticks,frames,input,actors);
    if(!*admission)*admission=SourceGlobalDraw::admit(work,input,call);
    (*admission)->validate();
  });
  try{return std::unique_ptr<SourceGlobalDraw>(new SourceGlobalDraw(work,receipt,context,call,*admission));}
  catch(...){receipt->poison();throw;}
}
struct SourceGlobalDraw::Execution {
  enum class Phase {Wide,PushD,Page,Reserve,SetPage,Pad,PadMask,PadBranch,HeadValue,HeadStore,First,CurrentStore,ToCheck,
    ClipYA,ClipYShift,ClipYDouble,ClipYIndex,ClipY,ClipYCompare,ClipYBranch,ClipYNegative,ClipYNegativeBranch,
    ClipXA,ClipXShift,ClipXDouble,ClipXIndex,ClipX,ClipXCompare,ClipXBranch,ClipXNegative,ClipXNegativeBranch,
    RoleA,RoleShift,RoleStore,RoleDouble,RoleIndex,Priority,PriorityCompare,PriorityBranch,
    HeadRead,SortingStore,RoleRead,HeadUpdate,SkipSort,ImmediateRole,ImmediateCall,RoleBody,
    CurrentLocal,NextA,NextShift,NextDouble,NextIndex,Next,NextStore,CheckA,CheckIncrement,CheckBranch,ToHead,
    HeadCheck,HeadIncrement,HeadBranch,SortHead,ChosenStore,SortHeadAgain,SortDouble,SortIndex,HeadY,MaxStore,
    PreviousNone,PreviousNoneStore,HeadPrevious,PreviousStore,SortNext,SortToCheck,
    CandidateCheck,CandidateIncrement,CandidateBranch,CandidateA,CandidateDouble,CandidateIndex,CandidateY,
    CandidateCompare,CandidateLowerBranch,CandidateMaxStore,CandidateChosenStore,PreviousRead,PredecessorStore,
    TraversalStore,CandidateAAgain,CandidateDoubleAgain,CandidateIndexAgain,CandidateNext,
    SortedRole,SortedCall,RemovePrevious,RemovePreviousIncrement,RemovePreviousBranch,MiddlePrevious,MiddleDouble,
    PushPrevious,MiddleChosen,MiddleChosenDouble,MiddleChosenIndex,MiddleNext,PullPrevious,MiddleStore,MiddleToHead,
    RootChosen,RootDouble,RootIndex,RootNext,RootHeadStore,RestorePage,Return,Done};
  SourceWorkClock &work;
  entities::graphics::ObjectDisplayState &state;
  SourceObjectReceipt &receipt;
  SourceGlobalDrawContext context;
  std::shared_ptr<Admission> admission;
  SourceGlobalDrawEntry &entry;
  Phase phase=Phase::Wide,after_role{};
  std::uint16_t value{},x{},y{},page{},saved_previous{};
  bool carry{},zero{};
  std::unique_ptr<SourceActorDrawKernel> kernel;
  std::uint64_t retired{};
  Execution(SourceWorkClock &clock,SourceObjectReceipt &lease,SourceGlobalDrawContext input,
      SourceGlobalDrawCall call,std::shared_ptr<Admission> accepted)
      :work(clock),state(clock.objects_),receipt(lease),context(input),admission(std::move(accepted)),entry(call.entry){}
  std::uint16_t local(unsigned at) const {
    const auto offset=0xe8+at;return std::uint16_t(entry.page_[offset]|unsigned(entry.page_[offset+1])<<8);
  }
  void store(unsigned at,std::uint16_t v){
    const auto offset=0xe8+at;entry.page_[offset]=std::uint8_t(v);entry.page_[offset+1]=std::uint8_t(v>>8);
  }
  WorldActor &actor(unsigned role){
    require(role<30&&admission->rows[role].has_value(),"Source global draw sampled an unowned role row");
    return admission->display.actors_.actor(admission->rows[role]->actor);
  }
  std::uint16_t sorting(unsigned index) const {
    require(index<60&&!(index&1),"Source global draw sampled an unowned sorting row");
    return state.draw_sorting[index/2];
  }
  void retire(SourceWorkCost cost,Phase next,const std::function<void()> &effect={}){
    work.retire_source_work(cost,effect);++retired;phase=next;
  }
  void branch(bool taken,Phase yes,Phase no){retire({taken?3u:2u,2,0,0},taken?yes:no);}
  void role_call(Phase next){
    require(value<30&&admission->rows[value].has_value(),"Source global draw sampled an unowned near-call role");
    const auto role=unsigned(value);const auto &row=*admission->rows[role];auto &facts=entry.rows_[role];
    auto child=std::unique_ptr<SourceActorDrawKernel>(new SourceActorDrawKernel(work,admission->display,state,
        {true,true,true,true,0x80,0x7e,page,std::uint16_t(context.stack_pointer-4)},
        row.actor,role,row.map,facts.map_high,facts.callback,entry.page_,
        [accepted=admission](unsigned group,unsigned at,const entities::graphics::SourceObjectMap &map){
          accepted->generation->maps[group][at]=map;
        }));
    retire({6,3,2,0},Phase::RoleBody,[&]{after_role=next;kernel=std::move(child);});
  }
  void step(){
    using P=Phase;
    switch(phase){
    case P::Wide:retire({3,2,0,0},P::PushD,[&]{carry=false;});break;
    case P::PushD:retire({4,1,2,0},P::Page);break;
    case P::Page:retire({2,1,0,0},P::Reserve,[&]{value=context.direct_page;});break;
    case P::Reserve:retire({3,3,0,0},P::SetPage,[&]{const unsigned sum=unsigned(value)+0xffe8+unsigned(carry);value=std::uint16_t(sum);carry=sum>0xffff;});break;
    case P::SetPage:retire({2,1,0,0},P::Pad,[&]{page=value;});break;
    case P::Pad:retire({5,3,2,0},P::PadMask,[&]{value=admission->input.state[1];});break;
    case P::PadMask:retire({3,3,0,0},P::PadBranch,[&]{value&=0x2000;});break;
    case P::PadBranch:require(!value,"Source global draw sampled unrepresented numeric SELECT work");branch(true,P::HeadValue,P::HeadValue);break;
    case P::HeadValue:retire({3,3,0,0},P::HeadStore,[&]{value=0xffff;});break;
    case P::HeadStore:retire({5,2,2,0},P::First,[&]{store(0x16,value);});break;
    case P::First:retire({5,3,2,0},P::CurrentStore,[&]{y=admission->display.actors_.source_first_entity_offset();});break;
    case P::CurrentStore:retire({5,2,2,0},P::ToCheck,[&]{store(0x14,y);});break;
    case P::ToCheck:retire({3,2,0,0},P::CheckA);break;
    case P::ClipYA:retire({2,1,0,0},P::ClipYShift,[&]{value=y;});break;
    case P::ClipYShift:retire({2,1,0,0},P::ClipYDouble,[&]{carry=bool(value&1);value>>=1;});break;
    case P::ClipYDouble:retire({2,1,0,0},P::ClipYIndex,[&]{carry=bool(value&0x8000);value=std::uint16_t(value<<1);});break;
    case P::ClipYIndex:retire({2,1,0,0},P::ClipY,[&]{x=value;});break;
    case P::ClipY:retire({6,3,2,0},P::ClipYCompare,[&]{value=std::uint16_t(actor(x/2).behavior.projected_y);});break;
    case P::ClipYCompare:retire({3,3,0,0},P::ClipYBranch,[&]{carry=value>=256;});break;
    case P::ClipYBranch:branch(!carry,P::ClipXA,P::ClipYNegative);break;
    case P::ClipYNegative:retire({3,3,0,0},P::ClipYNegativeBranch,[&]{carry=value>=0xffc0;});break;
    case P::ClipYNegativeBranch:branch(!carry,P::CurrentLocal,P::ClipXA);break;
    case P::ClipXA:retire({2,1,0,0},P::ClipXShift,[&]{value=y;});break;
    case P::ClipXShift:retire({2,1,0,0},P::ClipXDouble,[&]{carry=bool(value&1);value>>=1;});break;
    case P::ClipXDouble:retire({2,1,0,0},P::ClipXIndex,[&]{carry=bool(value&0x8000);value=std::uint16_t(value<<1);});break;
    case P::ClipXIndex:retire({2,1,0,0},P::ClipX,[&]{x=value;});break;
    case P::ClipX:retire({6,3,2,0},P::ClipXCompare,[&]{value=std::uint16_t(actor(x/2).behavior.projected_x);});break;
    case P::ClipXCompare:retire({3,3,0,0},P::ClipXBranch,[&]{carry=value>=320;});break;
    case P::ClipXBranch:branch(!carry,P::RoleA,P::ClipXNegative);break;
    case P::ClipXNegative:retire({3,3,0,0},P::ClipXNegativeBranch,[&]{carry=value>=0xffc0;});break;
    case P::ClipXNegativeBranch:branch(!carry,P::CurrentLocal,P::RoleA);break;
    case P::RoleA:retire({2,1,0,0},P::RoleShift,[&]{value=y;});break;
    case P::RoleShift:retire({2,1,0,0},P::RoleStore,[&]{carry=bool(value&1);value>>=1;});break;
    case P::RoleStore:retire({5,2,2,0},P::RoleDouble,[&]{store(0x12,value);});break;
    case P::RoleDouble:retire({2,1,0,0},P::RoleIndex,[&]{value=std::uint16_t(value<<1);});break;
    case P::RoleIndex:retire({2,1,0,0},P::Priority,[&]{x=value;});break;
    case P::Priority:retire({6,3,2,0},P::PriorityCompare,[&]{value=actor(x/2).action().priority;});break;
    case P::PriorityCompare:retire({3,3,0,0},P::PriorityBranch,[&]{carry=value>=1;zero=value==1;});break;
    case P::PriorityBranch:branch(!zero,P::ImmediateRole,P::HeadRead);break;
    case P::HeadRead:retire({5,2,2,0},P::SortingStore,[&]{value=local(0x16);});break;
    case P::SortingStore:require(x<60&&!(x&1),"Source global draw sorting store leaves its actual rows");retire({6,3,2,0},P::RoleRead,[&]{state.draw_sorting[x/2]=value;});break;
    case P::RoleRead:retire({5,2,2,0},P::HeadUpdate,[&]{value=local(0x12);});break;
    case P::HeadUpdate:retire({5,2,2,0},P::SkipSort,[&]{store(0x16,value);});break;
    case P::SkipSort:retire({3,2,0,0},P::CurrentLocal);break;
    case P::ImmediateRole:retire({5,2,2,0},P::ImmediateCall,[&]{value=local(0x12);});break;
    case P::ImmediateCall:role_call(P::CurrentLocal);break;
    case P::RoleBody:kernel->step();++retired;if(kernel->complete()){kernel.reset();phase=after_role;}break;
    case P::CurrentLocal:retire({5,2,2,0},P::NextA,[&]{y=local(0x14);});break;
    case P::NextA:retire({2,1,0,0},P::NextShift,[&]{value=y;});break;
    case P::NextShift:retire({2,1,0,0},P::NextDouble,[&]{value>>=1;});break;
    case P::NextDouble:retire({2,1,0,0},P::NextIndex,[&]{value=std::uint16_t(value<<1);});break;
    case P::NextIndex:retire({2,1,0,0},P::Next,[&]{x=value;});break;
    case P::Next:retire({6,3,2,0},P::NextStore,[&]{y=admission->display.actors_.source_next_entity_offset(x/2);});break;
    case P::NextStore:retire({5,2,2,0},P::CheckA,[&]{store(0x14,y);});break;
    case P::CheckA:retire({2,1,0,0},P::CheckIncrement,[&]{value=y;});break;
    case P::CheckIncrement:retire({2,1,0,0},P::CheckBranch,[&]{value=std::uint16_t(value+1);});break;
    case P::CheckBranch:branch(bool(value),P::ClipYA,P::ToHead);break;
    case P::ToHead:retire({3,2,0,0},P::HeadCheck);break;
    case P::HeadCheck:retire({5,2,2,0},P::HeadIncrement,[&]{value=local(0x16);});break;
    case P::HeadIncrement:retire({2,1,0,0},P::HeadBranch,[&]{value=std::uint16_t(value+1);});break;
    case P::HeadBranch:branch(bool(value),P::SortHead,P::RestorePage);break;
    case P::SortHead:retire({5,2,2,0},P::ChosenStore,[&]{value=local(0x16);});break;
    case P::ChosenStore:retire({5,2,2,0},P::SortHeadAgain,[&]{store(0x10,value);});break;
    case P::SortHeadAgain:retire({5,2,2,0},P::SortDouble,[&]{value=local(0x16);});break;
    case P::SortDouble:retire({2,1,0,0},P::SortIndex,[&]{value=std::uint16_t(value<<1);});break;
    case P::SortIndex:retire({2,1,0,0},P::HeadY,[&]{x=value;});break;
    case P::HeadY:retire({6,3,2,0},P::MaxStore,[&]{value=std::uint16_t(actor(x/2).action().position[1]>>16);});break;
    case P::MaxStore:retire({5,2,2,0},P::PreviousNone,[&]{store(0x0e,value);});break;
    case P::PreviousNone:retire({3,3,0,0},P::PreviousNoneStore,[&]{value=0xffff;});break;
    case P::PreviousNoneStore:retire({5,2,2,0},P::HeadPrevious,[&]{store(4,value);});break;
    case P::HeadPrevious:retire({5,2,2,0},P::PreviousStore,[&]{value=local(0x16);});break;
    case P::PreviousStore:retire({5,2,2,0},P::SortNext,[&]{store(2,value);});break;
    case P::SortNext:retire({6,3,2,0},P::SortToCheck,[&]{y=sorting(x);});break;
    case P::SortToCheck:retire({3,2,0,0},P::CandidateCheck);break;
    case P::CandidateCheck:retire({2,1,0,0},P::CandidateIncrement,[&]{value=y;});break;
    case P::CandidateIncrement:retire({2,1,0,0},P::CandidateBranch,[&]{value=std::uint16_t(value+1);});break;
    case P::CandidateBranch:branch(bool(value),P::CandidateA,P::SortedRole);break;
    case P::CandidateA:retire({2,1,0,0},P::CandidateDouble,[&]{value=y;});break;
    case P::CandidateDouble:retire({2,1,0,0},P::CandidateIndex,[&]{value=std::uint16_t(value<<1);});break;
    case P::CandidateIndex:retire({2,1,0,0},P::CandidateY,[&]{x=value;});break;
    case P::CandidateY:retire({6,3,2,0},P::CandidateCompare,[&]{value=std::uint16_t(actor(x/2).action().position[1]>>16);});break;
    case P::CandidateCompare:retire({5,2,2,0},P::CandidateLowerBranch,[&]{carry=value>=local(0x0e);});break;
    case P::CandidateLowerBranch:branch(!carry,P::TraversalStore,P::CandidateMaxStore);break;
    case P::CandidateMaxStore:retire({5,2,2,0},P::CandidateChosenStore,[&]{store(0x0e,value);});break;
    case P::CandidateChosenStore:retire({5,2,2,0},P::PreviousRead,[&]{store(0x10,y);});break;
    case P::PreviousRead:retire({5,2,2,0},P::PredecessorStore,[&]{value=local(2);});break;
    case P::PredecessorStore:retire({5,2,2,0},P::TraversalStore,[&]{store(4,value);});break;
    case P::TraversalStore:retire({5,2,2,0},P::CandidateAAgain,[&]{store(2,y);});break;
    case P::CandidateAAgain:retire({2,1,0,0},P::CandidateDoubleAgain,[&]{value=y;});break;
    case P::CandidateDoubleAgain:retire({2,1,0,0},P::CandidateIndexAgain,[&]{value=std::uint16_t(value<<1);});break;
    case P::CandidateIndexAgain:retire({2,1,0,0},P::CandidateNext,[&]{x=value;});break;
    case P::CandidateNext:retire({6,3,2,0},P::CandidateCheck,[&]{y=sorting(x);});break;
    case P::SortedRole:retire({5,2,2,0},P::SortedCall,[&]{value=local(0x10);});break;
    case P::SortedCall:role_call(P::RemovePrevious);break;
    case P::RemovePrevious:retire({5,2,2,0},P::RemovePreviousIncrement,[&]{value=local(4);});break;
    case P::RemovePreviousIncrement:retire({2,1,0,0},P::RemovePreviousBranch,[&]{value=std::uint16_t(value+1);});break;
    case P::RemovePreviousBranch:branch(!value,P::RootChosen,P::MiddlePrevious);break;
    case P::MiddlePrevious:retire({5,2,2,0},P::MiddleDouble,[&]{value=local(4);});break;
    case P::MiddleDouble:retire({2,1,0,0},P::PushPrevious,[&]{value=std::uint16_t(value<<1);});break;
    case P::PushPrevious:retire({4,1,2,0},P::MiddleChosen,[&]{saved_previous=value;});break;
    case P::MiddleChosen:retire({5,2,2,0},P::MiddleChosenDouble,[&]{value=local(0x10);});break;
    case P::MiddleChosenDouble:retire({2,1,0,0},P::MiddleChosenIndex,[&]{value=std::uint16_t(value<<1);});break;
    case P::MiddleChosenIndex:retire({2,1,0,0},P::MiddleNext,[&]{x=value;});break;
    case P::MiddleNext:retire({6,3,2,0},P::PullPrevious,[&]{value=sorting(x);});break;
    case P::PullPrevious:retire({5,1,2,0},P::MiddleStore,[&]{x=saved_previous;});break;
    case P::MiddleStore:require(x<60&&!(x&1),"Source global draw unlink leaves its actual sorting rows");retire({6,3,2,0},P::MiddleToHead,[&]{state.draw_sorting[x/2]=value;});break;
    case P::MiddleToHead:retire({3,2,0,0},P::HeadCheck);break;
    case P::RootChosen:retire({5,2,2,0},P::RootDouble,[&]{value=local(0x10);});break;
    case P::RootDouble:retire({2,1,0,0},P::RootIndex,[&]{value=std::uint16_t(value<<1);});break;
    case P::RootIndex:retire({2,1,0,0},P::RootNext,[&]{x=value;});break;
    case P::RootNext:retire({6,3,2,0},P::RootHeadStore,[&]{value=sorting(x);});break;
    case P::RootHeadStore:retire({5,2,2,0},P::HeadCheck,[&]{store(0x16,value);});break;
    case P::RestorePage:retire({5,1,2,0},P::Return,[&]{page=context.direct_page;});break;
    case P::Return:retire({6,1,2,0},P::Done);receipt.completed=true;
      admission->generation->phase=Admission::Generation::Phase::Prepared;break;
    case P::Done:break;
    }
  }
};
SourceGlobalDraw::SourceGlobalDraw(SourceWorkClock &work,std::shared_ptr<SourceObjectReceipt> receipt,
    SourceGlobalDrawContext context,SourceGlobalDrawCall call,std::shared_ptr<Admission> accepted)
    :receipt_(std::move(receipt)),execution_(std::make_unique<Execution>(work,*receipt_,context,call,accepted)){
  accepted->entry.claimed_=true;accepted->generation->phase=Admission::Generation::Phase::Inserting;
  receipt_->begin_emission=[accepted]{
    accepted->validate();require(accepted->generation->phase==Admission::Generation::Phase::Prepared,
        "Source global descriptor requires its exact completed generation");
    accepted->generation->phase=Admission::Generation::Phase::Emitting;
  };
  receipt_->finish_emission=[accepted]{
    accepted->validate();require(accepted->generation->phase==Admission::Generation::Phase::Emitting,
        "Source global descriptor finish requires its exact emitting generation");
    accepted->generation->phase=Admission::Generation::Phase::Emitted;accepted->entry.claimed_=false;
  };
}
SourceGlobalDraw::~SourceGlobalDraw(){if(receipt_->live&&!receipt_->acknowledged&&!receipt_->consumed)receipt_->poison();}
bool SourceGlobalDraw::advance(unsigned budget){
  require(receipt_->live&&!receipt_->consumed&&!receipt_->executing&&!receipt_->emitting,
      "Source global draw lost its live single invocation");
  receipt_->executing=true;
  try{receipt_->validate();while(budget--&&!receipt_->completed){receipt_->validate();execution_->step();}
    receipt_->executing=false;return receipt_->completed;
  }catch(...){receipt_->executing=false;receipt_->poison();throw;}
}
bool SourceGlobalDraw::complete() const noexcept{return receipt_->completed;}
std::uint64_t SourceGlobalDraw::retired_instructions() const noexcept{return execution_->retired;}
}
namespace eb::native {
std::unique_ptr<story::SourceGlobalDraw> WorldRuntime::Operation::begin_source_global_draw(story::SourceWorkClock &work,
    story::SourceGlobalDrawContext context,story::SourceGlobalDrawCall call){
  return source_screen_owner().begin_source_global_draw(work,context,call);
}
}
