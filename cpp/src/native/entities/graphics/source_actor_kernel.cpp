#include "eb/native/entities/graphics/source_actor_kernel.hpp"
#include "eb/native/entities/graphics/source_insertion.hpp"
#include "eb/native/story/work_clock.hpp"
#include <stdexcept>
namespace eb::native::story {
namespace {
void require(bool value,const char *message){if(!value)throw std::logic_error(message);}
void put(entities::graphics::ObjectDisplayState &state,unsigned at,std::uint16_t value){
  state.working[at]=std::uint8_t(value);state.working[at+1]=std::uint8_t(value>>8);
}
}
struct SourceActorDrawKernel::Execution {
  enum class Phase {Wide,PushD,PushRole,Page,Carry,Subtract,Mask,SetPage,PullRole,RoleBranch,Double,Index,StoreRole,Call,
    High,HighBranch,OverflowBranch,StoreHigh,Low,StoreLow,Animation,AnimationBranch,Callback,
    Reference,ReferenceMask,MirrorBranch,Size,MirrorCarry,MirrorAdd,MirrorStore,Byte,
    AttributePriority,LowerIndex,UpperStore,LowerStore,Surface,SurfaceShift,LowerBranch,LowerOverride,
    SurfaceShiftAgain,UpperBranch,UpperOverride,UpperCount,UpperIndex,InitialY,UpperCheckJump,UpperDecrement,UpperLoopBranch,
    LowerRole,LowerCount,LowerCountIndex,LowerCheckJump,LowerDecrement,LowerLoopBranch,
    AttributeNext,AttributeRead,AttributeMask,AttributeOr,AttributeStore,
    WideX,RestoreRole,BankByte,StoreBankByte,WideA,Priority,StorePriority,PriorityY,PriorityMask,ParentBranch,
    ParentA,ParentMask,ParentDouble,ParentIndex,ParentPriority,ParentRestoreRole,StoreParentPriority,RawA,RawMask,
    OneShotBranch,ZeroPriority,ClearPriority,CallOverlay,OverlayBank,OverlayLocalBank,OverlayStoreBank,OverlayIndex,
    OverlaySurface,OverlaySurfaceMask,OverlaySurfaceBranch,OverlayOffset,OverlayStoreOffset,Water,WaterMask,WaterBranch,
    OverlayRole,OverlayFlags,OverlayFlagsBranch,OverlayReturn,TailRole,TailBank,TailStoreBank,TailY,TailX,TailIndex,
    TailMap,TailJump,Insertion,RestorePage,Return,Done};
  SourceWorkClock &work;
  entities::graphics::ObjectDisplayState &state;
  entities::graphics::ObjectDisplay &display;
  ActorId actor_id{};
  unsigned role{};
  entities::graphics::SourceObjectMap map;
  std::uint16_t &map_high,&callback;
  std::array<std::uint8_t,256> &page_bytes;
  std::function<void(unsigned,unsigned,const entities::graphics::SourceObjectMap&)> retain;
  SourceActorDrawContext context;
  Phase phase=Phase::Wide;
  std::uint16_t value{},index{},raw_priority{},page{},source_x{},source_y{};
  std::uint8_t y{},count{};
  bool carry{},overflow{},lower{};
  unsigned next_y{};
  std::unique_ptr<SourceObjectInsertion> insertion;
  std::uint64_t retired{};
  Execution(SourceWorkClock &clock,entities::graphics::ObjectDisplay &owner,
      entities::graphics::ObjectDisplayState &objects,SourceActorDrawContext input,
      ActorId actor,unsigned source_role,entities::graphics::SourceObjectMap content,
      std::uint16_t &high,std::uint16_t &target,std::array<std::uint8_t,256> &locals,
      std::function<void(unsigned,unsigned,const entities::graphics::SourceObjectMap&)> retainer)
      :work(clock),state(objects),display(owner),actor_id(actor),role(source_role),map(std::move(content)),
       map_high(high),callback(target),page_bytes(locals),retain(std::move(retainer)),context(input){}
  WorldActor &actor(){return display.actors_.actor(actor_id);}
  const entities::graphics::RoleGraphics &graphics(){return display.lifecycle_.role(role);}
  std::uint16_t local(unsigned at) const{return std::uint16_t(page_bytes[at]|unsigned(page_bytes[at+1])<<8);}
  void store_local(unsigned at,std::uint16_t v){page_bytes[at]=std::uint8_t(v);page_bytes[at+1]=std::uint8_t(v>>8);}
  void retire(SourceWorkCost cost,Phase next,const std::function<void()> &effect={}){
    work.retire_source_work(cost,effect);++retired;phase=next;
  }
  void branch(bool taken,Phase yes,Phase no){retire({taken?3u:2u,2,0,0},taken?yes:no);}
  unsigned count_read_cycles() const{
    const unsigned base=display.actors_.version()==GameVersion::JP?0x2fe4:0x2be6;
    return 4u+unsigned(((base+(lower?0:1))&0xff)+std::uint8_t(index)>0xff);
  }
  void step();
};
void SourceActorDrawKernel::Execution::step(){
  using P=Phase;
  switch(phase){
  case P::Wide:retire({3,2,0,0},P::PushD);break;
  case P::PushD:retire({4,1,2,0},P::PushRole);break;
  case P::PushRole:retire({4,1,2,0},P::Page);break;
  case P::Page:retire({2,1,0,0},P::Carry,[&]{value=context.direct_page;});break;
  case P::Carry:retire({2,1,0,0},P::Subtract,[&]{carry=true;});break;
  case P::Subtract:retire({3,3,0,0},P::Mask,[&]{
    const auto before=value;value=std::uint16_t(before-0xa0);carry=before>=0xa0;
    overflow=bool((before^0xa0)&(before^value)&0x8000);
  });break;
  case P::Mask:retire({3,3,0,0},P::SetPage,[&]{value&=0xff00;});break;
  case P::SetPage:retire({2,1,0,0},P::PullRole,[&]{page=value;});break;
  case P::PullRole:retire({5,1,2,0},P::RoleBranch,[&]{value=std::uint16_t(role);});break;
  case P::RoleBranch:require(!(value&0x8000),"Source actor draw reached the original negative-role spin");
    branch(false,P::RoleBranch,P::Double);break;
  case P::Double:retire({2,1,0,0},P::Index,[&]{carry=bool(value&0x8000);value=std::uint16_t(value<<1);});break;
  case P::Index:retire({2,1,0,0},P::StoreRole,[&]{index=value;});break;
  case P::StoreRole:require(page==0x1d00,"Source actor draw DP locals leave their declared nonaliasing page");
    retire({4,2,2,0},P::Call,[&]{store_local(0x88,index);});break;
  case P::Call:retire({6,3,2,0},P::High);break;
  case P::High:retire({6,3,2,0},P::HighBranch,[&]{value=map_high;});break;
  case P::HighBranch:require(!(value&0x8000),"Source actor draw sampled an unsupported disabled map");
    branch(false,P::StoreHigh,P::OverflowBranch);break;
  case P::OverflowBranch:require(!overflow,"Source actor draw sampled the original unsupported overflow return");
    branch(false,P::StoreHigh,P::StoreHigh);break;
  case P::StoreHigh:require(std::uint8_t(value)==map.bank(),"Source actor draw sampled an unowned map bank");
    retire({4,2,2,0},P::Low,[&]{store_local(0x8e,value);});break;
  case P::Low:retire({6,3,2,0},P::StoreLow,[&]{value=display.maps_.role(role).pointer;});break;
  case P::StoreLow:retire({4,2,2,0},P::Animation,[&]{store_local(0x8c,value);});break;
  case P::Animation:retire({6,3,2,0},P::AnimationBranch,[&]{value=actor().action().animation;});break;
  case P::AnimationBranch:require(!(value&0x8000),"Source actor draw sampled an unsupported negative animation");
    branch(false,P::Callback,P::Callback);break;
  case P::Callback:{
    const auto target=display.actors_.version()==GameVersion::JP?0xa383:0xa3a4;
    require(callback==target,"Source actor draw sampled an unowned callback table target");
    retire({6,3,2,0},P::Reference);break;
  }
  case P::Reference:retire({6,3,2,0},P::ReferenceMask,[&]{value=graphics().displayed_reference;});break;
  case P::ReferenceMask:retire({3,3,0,0},P::MirrorBranch,[&]{value&=1;});break;
  case P::MirrorBranch:branch(!value,P::Byte,P::Size);break;
  case P::Size:retire({6,3,2,0},P::MirrorCarry,[&]{value=display.maps_.role(role).size;});break;
  case P::MirrorCarry:retire({2,1,0,0},P::MirrorAdd,[&]{carry=false;});break;
  case P::MirrorAdd:retire({4,2,2,0},P::MirrorStore,[&]{
    const auto before=value;const unsigned sum=unsigned(value)+local(0x8c)+unsigned(carry);
    value=std::uint16_t(sum);carry=sum>0xffff;
    overflow=bool(~(before^local(0x8c))&(before^value)&0x8000);
  });break;
  case P::MirrorStore:retire({4,2,2,0},P::Byte,[&]{store_local(0x8c,value);});break;
  case P::Byte:retire({3,2,0,0},P::AttributePriority);break; // M8/X8
  case P::AttributePriority:retire({2,2,0,0},P::LowerIndex,[&]{value=0x30;});break;
  case P::LowerIndex:retire({2,2,0,0},P::UpperStore,[&]{y=0x20;});break;
  case P::UpperStore:retire({3,2,1,0},P::LowerStore,[&]{page_bytes[0]=std::uint8_t(value);});break;
  case P::LowerStore:retire({3,2,1,0},P::Surface,[&]{page_bytes[2]=std::uint8_t(value);});break;
  case P::Surface:retire({4,3,1,0},P::SurfaceShift,[&]{value=std::uint8_t(actor().behavior.surface_flags);});break;
  case P::SurfaceShift:retire({2,1,0,0},P::LowerBranch,[&]{carry=bool(value&1);value=std::uint8_t(value)>>1;});break;
  case P::LowerBranch:branch(!carry,P::SurfaceShiftAgain,P::LowerOverride);break;
  case P::LowerOverride:retire({3,2,1,0},P::SurfaceShiftAgain,[&]{page_bytes[2]=y;});break;
  case P::SurfaceShiftAgain:retire({2,1,0,0},P::UpperBranch,[&]{carry=bool(value&1);value=std::uint8_t(value)>>1;});break;
  case P::UpperBranch:branch(!carry,P::UpperCount,P::UpperOverride);break;
  case P::UpperOverride:retire({3,2,1,0},P::UpperCount,[&]{page_bytes[0]=y;});break;
  case P::UpperCount:lower=false;retire({count_read_cycles(),3,1,0},P::UpperIndex,[&]{value=std::uint8_t(graphics().body_divide>>8);});break;
  case P::UpperIndex:retire({2,1,0,0},P::InitialY,[&]{index=std::uint8_t(value);});break;
  case P::InitialY:retire({2,2,0,0},P::UpperCheckJump,[&]{y=0xfd;});break;
  case P::UpperCheckJump:retire({3,2,0,0},P::UpperDecrement);break;
  case P::UpperDecrement:retire({2,1,0,0},P::UpperLoopBranch,[&]{count=std::uint8_t(index-1);index=count;});break;
  case P::UpperLoopBranch:next_y=0;branch(!(count&0x80),P::AttributeNext,P::LowerRole);break;
  case P::LowerRole:retire({3,2,1,0},P::LowerCount,[&]{index=page_bytes[0x88];});break;
  case P::LowerCount:lower=true;retire({count_read_cycles(),3,1,0},P::LowerCountIndex,[&]{value=std::uint8_t(graphics().body_divide);});break;
  case P::LowerCountIndex:retire({2,1,0,0},P::LowerCheckJump,[&]{index=std::uint8_t(value);});break;
  case P::LowerCheckJump:retire({3,2,0,0},P::LowerDecrement);break;
  case P::LowerDecrement:retire({2,1,0,0},P::LowerLoopBranch,[&]{count=std::uint8_t(index-1);index=count;});break;
  case P::LowerLoopBranch:next_y=0;branch(!(count&0x80),P::AttributeNext,P::WideX);break;
  case P::AttributeNext:retire({2,1,0,0},next_y==4?P::AttributeRead:P::AttributeNext,[&]{y=std::uint8_t(y+1);++next_y;});break;
  case P::AttributeRead:require(std::uint8_t(local(0x8e))==map.bank(),"Source actor attributes lost their actual indirect bank");
    retire({6,2,4,0},P::AttributeMask,[&]{value=map.read(std::uint16_t(local(0x8c)+y));});break;
  case P::AttributeMask:retire({2,2,0,0},P::AttributeOr,[&]{value&=0xcf;});break;
  case P::AttributeOr:retire({3,2,1,0},P::AttributeStore,[&]{value|=page_bytes[lower?2:0];});break;
  case P::AttributeStore:retire({6,2,4,0},lower?P::LowerDecrement:P::UpperDecrement,[&]{
    map.write_(std::uint16_t(local(0x8c)+y),std::uint8_t(value));
  });break;
  case P::WideX:retire({3,2,0,0},P::RestoreRole);break;
  case P::RestoreRole:retire({4,2,2,0},P::BankByte,[&]{index=local(0x88);});break;
  case P::BankByte:retire({3,2,1,0},P::StoreBankByte,[&]{value=page_bytes[0x8e];});break;
  case P::StoreBankByte:retire({4,3,1,0},P::WideA,[&]{state.scratch.spritemap_bank=std::uint16_t((state.scratch.spritemap_bank&0xff00)|value);});break;
  case P::WideA:retire({3,2,0,0},P::Priority);break;
  case P::Priority:retire({6,3,2,0},P::StorePriority,[&]{value=actor().action().priority;});break;
  case P::StorePriority:retire({5,3,2,0},P::PriorityY,[&]{put(state,0,value);});break;
  case P::PriorityY:retire({2,1,0,0},P::PriorityMask,[&]{raw_priority=value;});break;
  case P::PriorityMask:retire({3,3,0,0},P::ParentBranch,[&]{value&=0x8000;});break;
  case P::ParentBranch:branch(!value,P::CallOverlay,P::ParentA);break;
  case P::ParentA:retire({2,1,0,0},P::ParentMask,[&]{value=raw_priority;});break;
  case P::ParentMask:retire({3,3,0,0},P::ParentDouble,[&]{value&=0x3f;});break;
  case P::ParentDouble:retire({2,1,0,0},P::ParentIndex,[&]{value=std::uint16_t(value<<1);});break;
  case P::ParentIndex:retire({2,1,0,0},P::ParentPriority,[&]{index=value;});break;
  case P::ParentPriority:require(index/2<30,"Source actor parent priority sampled an unowned row");
    retire({6,3,2,0},P::ParentRestoreRole,[&]{value=display.actors_.authored_draw_priority(index/2);});break;
  case P::ParentRestoreRole:retire({4,2,2,0},P::StoreParentPriority,[&]{index=local(0x88);});break;
  case P::StoreParentPriority:require(value<4,"Source actor parent priority sampled an unowned queue");
    retire({5,3,2,0},P::RawA,[&]{put(state,0,value);});break;
  case P::RawA:retire({2,1,0,0},P::RawMask,[&]{value=raw_priority;});break;
  case P::RawMask:retire({3,3,0,0},P::OneShotBranch,[&]{value&=0x4000;});break;
  case P::OneShotBranch:branch(bool(value),P::CallOverlay,P::ZeroPriority);break;
  case P::ZeroPriority:retire({3,3,0,0},P::ClearPriority,[&]{value=0;});break;
  case P::ClearPriority:retire({6,3,2,0},P::CallOverlay,[&]{actor().action().priority=value;});break;
  case P::CallOverlay:retire({8,4,3,0},P::OverlayBank);break;
  case P::OverlayBank:retire({3,3,0,0},P::OverlayLocalBank,[&]{value=0xc4;});break;
  case P::OverlayLocalBank:retire({4,2,2,0},P::OverlayStoreBank,[&]{store_local(4,value);});break;
  case P::OverlayStoreBank:retire({5,3,2,0},P::OverlayIndex,[&]{state.scratch.spritemap_bank=value;});break;
  case P::OverlayIndex:retire({3,3,0,0},P::OverlaySurface,[&]{source_y=0;});break;
  case P::OverlaySurface:retire({6,3,2,0},P::OverlaySurfaceMask,[&]{value=actor().behavior.surface_flags;});break;
  case P::OverlaySurfaceMask:retire({3,3,0,0},P::OverlaySurfaceBranch,[&]{value&=1;});break;
  case P::OverlaySurfaceBranch:branch(!value,P::OverlayStoreOffset,P::OverlayOffset);break;
  case P::OverlayOffset:retire({3,3,0,0},P::OverlayStoreOffset,[&]{source_y=5;});break;
  case P::OverlayStoreOffset:retire({4,2,2,0},P::Water,[&]{store_local(0,source_y);});break;
  case P::Water:retire({6,3,2,0},P::WaterMask,[&]{value=actor().behavior.surface_flags;});break;
  case P::WaterMask:retire({3,3,0,0},P::WaterBranch,[&]{value&=0xc;});break;
  case P::WaterBranch:require(!value,"Source actor draw sampled unrepresented water work");
    branch(true,P::OverlayRole,P::OverlayRole);break;
  case P::OverlayRole:retire({4,2,2,0},P::OverlayFlags,[&]{index=local(0x88);});break;
  case P::OverlayFlags:retire({6,3,2,0},P::OverlayFlagsBranch,[&]{value=actor().appearance_context.overlay_flags;});break;
  case P::OverlayFlagsBranch:require(!value,"Source actor draw sampled unrepresented overlay work");
    branch(false,P::OverlayReturn,P::OverlayReturn);break;
  case P::OverlayReturn:retire({6,1,3,0},P::TailRole);break;
  case P::TailRole:retire({4,2,2,0},P::TailBank,[&]{index=local(0x88);});break;
  case P::TailBank:retire({4,2,2,0},P::TailStoreBank,[&]{value=local(0x8e);});break;
  case P::TailStoreBank:retire({5,3,2,0},P::TailY,[&]{state.scratch.spritemap_bank=value;});break;
  case P::TailY:retire({6,3,2,0},P::TailX,[&]{source_y=std::uint16_t(actor().behavior.projected_y);});break;
  case P::TailX:retire({6,3,2,0},P::TailIndex,[&]{value=std::uint16_t(actor().behavior.projected_x);});break;
  case P::TailIndex:retire({2,1,0,0},P::TailMap,[&]{source_x=value;});break;
  case P::TailMap:retire({4,2,2,0},P::TailJump,[&]{value=local(0x8c);});break;
  case P::TailJump:{
    auto queued_map=map;queued_map.pointer_=value;queued_map.anchor_={std::int16_t(source_x),std::int16_t(source_y),true};
    queued_map.validate_path(127);
    auto prepared=std::unique_ptr<SourceObjectInsertion>(new SourceObjectInsertion(work,state,{std::move(queued_map),source_x,source_y},retain));
    retire({3,3,0,0},P::Insertion,[&]{insertion=std::move(prepared);});break;
  }
  case P::Insertion:insertion->step();++retired;if(insertion->complete())phase=P::RestorePage;break;
  case P::RestorePage:retire({5,1,2,0},P::Return,[&]{page=context.direct_page;});break;
  case P::Return:retire({6,1,2,0},P::Done);break;
  case P::Done:break;
  }
}
SourceActorDrawKernel::SourceActorDrawKernel(SourceWorkClock &work,entities::graphics::ObjectDisplay &display,
    entities::graphics::ObjectDisplayState &objects,SourceActorDrawContext context,ActorId actor,unsigned role,
    entities::graphics::SourceObjectMap map,std::uint16_t &high,std::uint16_t &callback,
    std::array<std::uint8_t,256> &page,
    std::function<void(unsigned,unsigned,const entities::graphics::SourceObjectMap&)> retain)
    :execution_(std::make_unique<Execution>(work,display,objects,context,actor,role,std::move(map),high,callback,page,std::move(retain))){}
SourceActorDrawKernel::~SourceActorDrawKernel()=default;
void SourceActorDrawKernel::step(){execution_->step();}
bool SourceActorDrawKernel::complete() const noexcept{return execution_->phase==Execution::Phase::Done;}
std::uint64_t SourceActorDrawKernel::retired_instructions() const noexcept{return execution_->retired;}
}
