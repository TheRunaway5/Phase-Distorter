#include "eb/native/entities/graphics/source_insertion.hpp"
#include "eb/native/story/source_work.hpp"
#include <stdexcept>
namespace eb::native::story {
namespace {
void require(bool value,const char *message){if(!value)throw std::logic_error(message);}
std::uint16_t word(const entities::graphics::ObjectDisplayState &state,unsigned at){
  return std::uint16_t(state.working[at]|unsigned(state.working[at+1])<<8);
}
void put(entities::graphics::ObjectDisplayState &state,unsigned at,std::uint16_t value){
  state.working[at]=std::uint8_t(value);state.working[at+1]=std::uint8_t(value>>8);
}
}
struct SourceObjectInsertion::Execution {
  enum class Phase {Wide,PushX,PushMap,Priority,Double,Index,PullMap,Dispatch,Offset,
    StoreMap,PullX,StoreX,Y,StoreY,Bank,StoreBank,Next,NextAgain,StoreOffset,Return,Done};
  SourceWorkService &work;
  entities::graphics::ObjectDisplayState &state;
  SourceObjectCall call;
  std::function<void(unsigned,unsigned,const entities::graphics::SourceObjectMap&)> retain;
  Phase phase=Phase::Wide;
  unsigned group{},offset{};
  std::uint16_t value{};
  std::uint64_t retired{};
  Execution(SourceWorkService &clock,entities::graphics::ObjectDisplayState &owner,SourceObjectCall input,
      std::function<void(unsigned,unsigned,const entities::graphics::SourceObjectMap&)> retained)
      :work(clock),state(owner),call(std::move(input)),retain(std::move(retained)){}
  void retire(SourceWorkCost cost,Phase next,const std::function<void()> &effect={}){
    work.retire_source_work(cost,effect);++retired;phase=next;
  }
  unsigned at() const{return 4+group*258+offset;}
  void step(){
    using P=Phase;
    switch(phase){
    case P::Wide:retire({3,2,0,0},P::PushX);break;
    case P::PushX:retire({4,1,2,0},P::PushMap);break;
    case P::PushMap:retire({4,1,2,0},P::Priority);break;
    case P::Priority:retire({5,3,2,0},P::Double,[&]{value=word(state,0);});break;
    case P::Double:retire({2,1,0,0},P::Index,[&]{value=std::uint16_t(value<<1);});break;
    case P::Index:retire({2,1,0,0},P::PullMap,[&]{group=value/2;});break;
    case P::PullMap:retire({5,1,2,0},P::Dispatch,[&]{value=call.map.pointer();});break;
    case P::Dispatch:require(group<4,"Source insertion sampled priority leaves its actual dispatch table");
      retire({6,5,0,0},P::Offset);break;
    case P::Offset:retire({5,3,2,0},P::StoreMap,[&]{offset=word(state,4+group*258+256);});break;
    case P::StoreMap:require(offset<64&&!(offset&1),"Source insertion sampled offset leaves its owned queue");
      retire({6,3,2,0},P::PullX,[&]{put(state,at(),value);retain(group,offset/2,call.map);});break;
    case P::PullX:retire({5,1,2,0},P::StoreX,[&]{value=call.x;});break;
    case P::StoreX:retire({6,3,2,0},P::Y,[&]{put(state,at()+64,value);});break;
    case P::Y:retire({2,1,0,0},P::StoreY,[&]{value=call.y;});break;
    case P::StoreY:retire({6,3,2,0},P::Bank,[&]{put(state,at()+128,value);});break;
    case P::Bank:retire({5,3,2,0},P::StoreBank,[&]{value=state.scratch.spritemap_bank;});break;
    case P::StoreBank:require(std::uint8_t(value)==call.map.bank(),"Source insertion sampled bank lost its owned extent");
      retire({6,3,2,0},P::Next,[&]{put(state,at()+192,value);});break;
    case P::Next:retire({2,1,0,0},P::NextAgain,[&]{++offset;});break;
    case P::NextAgain:retire({2,1,0,0},P::StoreOffset,[&]{++offset;});break;
    case P::StoreOffset:retire({5,3,2,0},P::Return,[&]{put(state,4+group*258+256,std::uint16_t(offset));});break;
    case P::Return:retire({6,1,2,0},P::Done);break;
    case P::Done:break;
    }
  }
};
SourceObjectInsertion::SourceObjectInsertion(SourceWorkService &work,entities::graphics::ObjectDisplayState &state,
    SourceObjectCall call,std::function<void(unsigned,unsigned,const entities::graphics::SourceObjectMap&)> retained)
    :execution_(std::make_unique<Execution>(work,state,std::move(call),std::move(retained))){}
SourceObjectInsertion::~SourceObjectInsertion()=default;
void SourceObjectInsertion::step(){execution_->step();}
bool SourceObjectInsertion::complete() const noexcept{return execution_->phase==Execution::Phase::Done;}
std::uint64_t SourceObjectInsertion::retired_instructions() const noexcept{return execution_->retired;}
}
