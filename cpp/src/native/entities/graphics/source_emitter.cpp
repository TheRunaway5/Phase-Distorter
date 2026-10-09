#include "eb/native/entities/graphics/source_emitter.hpp"
#include <stdexcept>
namespace eb::native::story {
namespace {
void require(bool value,const char *message) {if(!value)throw std::logic_error(message);}
}
struct SourceObjectEmitter::Execution {
  enum class Phase {Flags,PushD,ZeroD,PullD,Wide,BaseX,BaseY,MapIndex,Cursor,Capacity,CapacityBranch,
    FullPullD,FullFlags,FullReturn,PushBank,Byte,Bank,PushA,PullBank,ToRecord,
    Link,LinkIndex,LinkBranch,Next1,Next2,Next3,Next4,Next5,
    RecordWide,ReadY,MaskY,CompareY,YBranch,LinkBranchTest,SignY,ClearY,
    AddY,DecrementY,CompareTop,TopBranch,CompareBottom,BottomBranch,RejectByte,RejectFlags,RejectBranch,RejectReturn,
    StoreY,Tile,StoreTile,ReadX,MaskX,CompareX,XBranch,SignX,ClearX,AddX,XByte,StoreX,SwapX,
    ZeroXBranch,CompareXHigh,XHighBranch,RotateX,HighX,FlagsSize,RotateSize,HighSize,FlushBranch,
    HighRead,HighStore,HighIncrement,Sentinel,StoreSentinel,FinalY,StoreFinalY,
    NextX1,NextX2,NextX3,NextX4,EndFlags,EndBranch,ContinueWide,ContinueCapacity,ContinueBranch,
    StoreCursor,RestoreBank,RestoreD,RestoreFlags,Return,Done};
  SourceWorkService &work;
  entities::graphics::ObjectDisplayState &state;
  entities::graphics::SourceObjectMap map;
  Phase phase=Phase::Flags;
  std::uint16_t input_x{},input_y{},pointer{},cursor{},a{};
  bool carry{},zero{},negative{};
  Execution(SourceWorkService &clock,entities::graphics::ObjectDisplayState &owner,
      entities::graphics::SourceObjectMap content,std::uint16_t at,std::uint16_t x,std::uint16_t y)
      :work(clock),state(owner),map(std::move(content)),input_x(x),input_y(y),pointer(at) {}
  void retire(SourceWorkCost cost,Phase next,const std::function<void()> &effect={}) {
    work.retire_source_work(cost,effect);phase=next;
  }
  void branch(bool taken,Phase yes,Phase no) {retire({taken?3u:2u,2,0,0},taken?yes:no);}
  SourceWorkCost read_cost(bool narrow) const {
    const unsigned bytes=narrow?1:2;const bool rom=map.bank()==0xc4;
    return {narrow?5u:6u,3+(rom?bytes:0),rom?0:bytes,0};
  }
  std::uint16_t read_word(unsigned displacement) const {
    require(unsigned(pointer)+displacement+1<=0xffff,"Source word read crosses its actual owned map bank");
    const auto at=std::uint16_t(pointer+displacement);
    return std::uint16_t(map.read(at)|unsigned(map.read(std::uint16_t(at+1)))<<8);
  }
  void byte(std::uint8_t value) {a=std::uint16_t((a&0xff00)|value);zero=value==0;negative=value&0x80;}
  void compare(std::uint16_t value,bool narrow=false) {
    const unsigned lhs=narrow?std::uint8_t(a):a;carry=lhs>=value;zero=lhs==value;
  }
  void add(std::uint16_t value) {
    const unsigned sum=unsigned(a)+value+unsigned(carry);a=std::uint16_t(sum);carry=sum>0xffff;zero=a==0;
  }
  void rotate_high() {
    const auto before=state.builder.high_buffer;
    state.builder.high_buffer=std::uint8_t((before>>1)|(carry?0x80:0));carry=before&1;
  }
  entities::graphics::ObjectFrame &frame() {
    const unsigned base=state.builder.end_address==0x700?0x500:state.builder.end_address==0xa00?0x800:0;
    require(base&&cursor>=base&&cursor<base+512&&!(unsigned(cursor-base)&3),
        "Source emitter cursor leaves its owned OAM descriptor");
    return state.buffers[base==0x500?0:1];
  }
  unsigned entry_offset() const {return cursor-(state.builder.end_address-512);}
  void step() {
    using P=Phase;
    map.validate();
    switch(phase) {
    case P::Flags:retire({3,1,1,0},P::PushD);break;
    case P::PushD:retire({4,1,2,0},P::ZeroD);break;
    case P::ZeroD:retire({5,3,2,0},P::PullD);break;
    case P::PullD:retire({5,1,2,0},P::Wide);break;
    case P::Wide:retire({3,2,0,0},P::BaseX);break;
    case P::BaseX:retire({4,2,2,0},P::BaseY,[&]{state.scratch.base_x=input_x;});break;
    case P::BaseY:retire({4,2,2,0},P::MapIndex,[&]{state.scratch.base_y=input_y;});break;
    case P::MapIndex:retire({2,1,0,0},P::Cursor);break;
    case P::Cursor:retire({4,2,2,0},P::Capacity,[&]{cursor=state.builder.address;});break;
    case P::Capacity:retire({4,2,2,0},P::CapacityBranch,[&]{carry=cursor>=state.builder.end_address;});break;
    case P::CapacityBranch:branch(!carry,P::PushBank,P::FullPullD);break;
    case P::FullPullD:retire({5,1,2,0},P::FullFlags);break;
    case P::FullFlags:retire({4,1,1,0},P::FullReturn);break;
    case P::FullReturn:retire({6,1,3,0},P::Done);break;
    case P::PushBank:retire({3,1,1,0},P::Byte);break;
    case P::Byte:retire({3,2,0,0},P::Bank);break;
    case P::Bank:retire({3,2,1,0},P::PushA,[&]{byte(std::uint8_t(state.scratch.spritemap_bank));});break;
    case P::PushA:require(std::uint8_t(a)==map.bank(),"Source emitter sampled bank lost its owned map");
      retire({3,1,1,0},P::PullBank);break;
    case P::PullBank:retire({4,1,1,0},P::ToRecord);break;
    case P::ToRecord:retire({3,2,0,0},P::RecordWide);break;
    case P::Link:retire(read_cost(false),P::LinkIndex,[&]{a=read_word(1);});break;
    case P::LinkIndex:retire({2,1,0,0},P::LinkBranch,[&]{pointer=a;});break;
    case P::LinkBranch:retire({3,2,0,0},P::RecordWide);break;
    case P::Next1:retire({2,1,0,0},P::Next2,[&]{++pointer;});break;
    case P::Next2:retire({2,1,0,0},P::Next3,[&]{++pointer;});break;
    case P::Next3:retire({2,1,0,0},P::Next4,[&]{++pointer;});break;
    case P::Next4:retire({2,1,0,0},P::Next5,[&]{++pointer;});break;
    case P::Next5:retire({2,1,0,0},P::RecordWide,[&]{++pointer;});break;
    case P::RecordWide:retire({3,2,0,0},P::ReadY);break;
    case P::ReadY:retire(read_cost(false),P::MaskY,[&]{a=read_word(0);});break;
    case P::MaskY:retire({3,3,0,0},P::CompareY,[&]{a&=0xff;});break;
    case P::CompareY:retire({3,3,0,0},P::YBranch,[&]{compare(0x80);});break;
    case P::YBranch:branch(!carry,P::AddY,P::LinkBranchTest);break;
    case P::LinkBranchTest:branch(zero,P::Link,P::SignY);break;
    case P::SignY:retire({3,3,0,0},P::ClearY,[&]{a|=0xff00;});break;
    case P::ClearY:retire({2,1,0,0},P::AddY,[&]{carry=false;});break;
    case P::AddY:retire({4,2,2,0},P::DecrementY,[&]{add(state.scratch.base_y);});break;
    case P::DecrementY:retire({2,1,0,0},P::CompareTop,[&]{--a;});break;
    case P::CompareTop:retire({3,3,0,0},P::TopBranch,[&]{compare(0xe0);});break;
    case P::TopBranch:branch(!carry,P::StoreY,P::CompareBottom);break;
    case P::CompareBottom:retire({3,3,0,0},P::BottomBranch,[&]{compare(0xffe0);});break;
    case P::BottomBranch:branch(carry,P::StoreY,P::RejectByte);break;
    case P::RejectByte:retire({3,2,0,0},P::RejectFlags);break;
    case P::RejectFlags:retire(read_cost(true),P::RejectBranch,[&]{byte(map.read(std::uint16_t(pointer+4)));});break;
    case P::RejectBranch:branch(!negative,P::Next1,P::RejectReturn);break;
    case P::RejectReturn:retire({3,2,0,0},P::StoreCursor);break;
    case P::StoreY:retire({4,2,2,0},P::Tile,[&]{state.scratch.current_y=a;});break;
    case P::Tile:retire(read_cost(false),P::StoreTile,[&]{a=read_word(1);});break;
    case P::StoreTile:retire({5,2,2,0},P::ReadX,[&]{auto &out=frame();const auto at=entry_offset()+2;
      out.bytes[at]=std::uint8_t(a);out.bytes[at+1]=std::uint8_t(a>>8);});break;
    case P::ReadX:retire(read_cost(false),P::MaskX,[&]{a=read_word(3);});break;
    case P::MaskX:retire({3,3,0,0},P::CompareX,[&]{a&=0xff;});break;
    case P::CompareX:retire({3,3,0,0},P::XBranch,[&]{compare(0x80);});break;
    case P::XBranch:branch(!carry,P::AddX,P::SignX);break;
    case P::SignX:retire({3,3,0,0},P::ClearX,[&]{a|=0xff00;});break;
    case P::ClearX:retire({2,1,0,0},P::AddX,[&]{carry=false;});break;
    case P::AddX:retire({4,2,2,0},P::XByte,[&]{add(state.scratch.base_x);});break;
    case P::XByte:retire({3,2,0,0},P::StoreX);break;
    case P::StoreX:retire({4,2,1,0},P::SwapX,[&]{frame().bytes[entry_offset()]=std::uint8_t(a);});break;
    case P::SwapX:retire({3,1,0,0},P::ZeroXBranch,[&]{a=std::uint16_t((a<<8)|(a>>8));zero=std::uint8_t(a)==0;});break;
    case P::ZeroXBranch:branch(zero,P::RotateX,P::CompareXHigh);break;
    case P::CompareXHigh:retire({2,2,0,0},P::XHighBranch,[&]{compare(0xff,true);});break;
    case P::XHighBranch:branch(!zero,P::RejectFlags,P::RotateX);break;
    case P::RotateX:retire({2,1,0,0},P::HighX,[&]{const auto value=std::uint8_t(a);
      byte(std::uint8_t((value<<1)|unsigned(carry)));carry=value&0x80;});break;
    case P::HighX:retire({5,2,2,0},P::FlagsSize,[&]{rotate_high();});break;
    case P::FlagsSize:retire(read_cost(true),P::RotateSize,[&]{byte(map.read(std::uint16_t(pointer+4)));});break;
    case P::RotateSize:retire({2,1,0,0},P::HighSize,[&]{const auto value=std::uint8_t(a);
      byte(std::uint8_t((value>>1)|(carry?0x80:0)));carry=value&1;});break;
    case P::HighSize:retire({5,2,2,0},P::FlushBranch,[&]{rotate_high();});break;
    case P::FlushBranch:branch(!carry,P::FinalY,P::HighRead);break;
    case P::HighRead:retire({3,2,1,0},P::HighStore,[&]{byte(state.builder.high_buffer);});break;
    case P::HighStore:retire({6,2,4,0},P::HighIncrement,[&]{
      require(state.scratch.high_pointer_bank==0||state.scratch.high_pointer_bank==0x7e,
          "Source emitter high pointer bank leaves its actual mapped WRAM owner");
      const unsigned base=state.builder.end_address-512,at=state.builder.high_address;
      require(at>=base+512&&at<base+544,"Source emitter high pointer leaves its actual OAM descriptor");
      state.buffers[base==0x500?0:1].bytes[at-base]=std::uint8_t(a);
    });break;
    case P::HighIncrement:retire({5,2,2,0},P::Sentinel,[&]{state.builder.high_address=std::uint16_t(
      (state.builder.high_address&0xff00)|std::uint8_t(state.builder.high_address+1));});break;
    case P::Sentinel:retire({2,2,0,0},P::StoreSentinel,[&]{byte(0x80);});break;
    case P::StoreSentinel:retire({3,2,1,0},P::FinalY,[&]{state.builder.high_buffer=std::uint8_t(a);});break;
    case P::FinalY:retire({3,2,1,0},P::StoreFinalY,[&]{byte(std::uint8_t(state.scratch.current_y));});break;
    case P::StoreFinalY:retire({4,2,1,0},P::NextX1,[&]{auto &out=frame();const auto at=entry_offset();
      out.bytes[at+1]=std::uint8_t(a);out.identities[at/4]=map.identity();out.anchors[at/4]=map.anchor();});break;
    case P::NextX1:retire({2,1,0,0},P::NextX2,[&]{++cursor;});break;
    case P::NextX2:retire({2,1,0,0},P::NextX3,[&]{++cursor;});break;
    case P::NextX3:retire({2,1,0,0},P::NextX4,[&]{++cursor;});break;
    case P::NextX4:retire({2,1,0,0},P::EndFlags,[&]{++cursor;});break;
    case P::EndFlags:retire(read_cost(true),P::EndBranch,[&]{byte(map.read(std::uint16_t(pointer+4)));});break;
    case P::EndBranch:branch(negative,P::StoreCursor,P::ContinueWide);break;
    case P::ContinueWide:retire({3,2,0,0},P::ContinueCapacity);break;
    case P::ContinueCapacity:retire({4,2,2,0},P::ContinueBranch,[&]{carry=cursor>=state.builder.end_address;});break;
    case P::ContinueBranch:branch(!carry,P::Next1,P::StoreCursor);break;
    case P::StoreCursor:retire({4,2,2,0},P::RestoreBank,[&]{state.builder.address=cursor;});break;
    case P::RestoreBank:retire({4,1,1,0},P::RestoreD);break;
    case P::RestoreD:retire({5,1,2,0},P::RestoreFlags);break;
    case P::RestoreFlags:retire({4,1,1,0},P::Return);break;
    case P::Return:retire({6,1,3,0},P::Done);break;
    case P::Done:break;
    }
  }
};
SourceObjectEmitter::SourceObjectEmitter(SourceWorkService &work,entities::graphics::ObjectDisplayState &state,
    entities::graphics::SourceObjectMap map,std::uint16_t pointer,std::uint16_t x,std::uint16_t y)
    :execution_(std::make_unique<Execution>(work,state,std::move(map),pointer,x,y)) {}
SourceObjectEmitter::~SourceObjectEmitter()=default;
void SourceObjectEmitter::step() {execution_->step();}
bool SourceObjectEmitter::complete() const noexcept {return execution_->phase==Execution::Phase::Done;}
}
