#include "eb/native/story/source_screen.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/native/entities/graphics/object_display.hpp"
#include "eb/native/entities/graphics/source_objects.hpp"
#include "eb/native/entities/graphics/source_emitter.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/world_runtime.hpp"
#include <stdexcept>
namespace eb::native::story {
namespace {
void require(bool value,const char *message) {if(!value)throw std::logic_error(message);}
std::uint16_t word(const entities::graphics::ObjectDisplayState &objects,unsigned at) {
  return std::uint16_t(objects.working[at]|unsigned(objects.working[at+1])<<8);
}
}
void SourceScreenUpdate::validate_owner(SourceWorkClock &work,TickState &ticks,const battle::FrameDisplay &frames,SourceObjectReceipt *preparation) {
  work.require_healthy();
  require(&work.frames_==&frames&&work.uses_clock(work.physical_,ticks)&&
      frames.uses_object_source(work.object_display_)&&&work.object_display_.state()==&work.objects_,
      "Source screen requires its actual shared clock/OAM/frame owners");
  const auto *peripherals=frames.peripherals();
  require(peripherals&&peripherals->uses(work.physical_)&&work.physical_.uses_peripherals(*peripherals),
      "Source screen requires its actual physical display peripheral owner");
  require(!(ticks.effective_interrupt_mask()&0x30),"Source screen has an unowned H/V IRQ dependency");
  require(!(ticks.effective_interrupt_mask()&0x80)||work.has_interrupt_work(),
      "Source screen has no actual NMI work owner");
  const auto next=frames.next_buffer_id(),pending=frames.pending_display_id();
  require(next>=1&&next<=2&&pending<=2,"Source screen has an unowned buffer selection");
  if(preparation) {
    require(preparation->live&&preparation->completed&&preparation->acknowledged&&!preparation->consumed&&
        !preparation->executing&&preparation->work==&work,"Source screen lost its owned preparation receipt");
    preparation->validate();
    const auto generation=work.object_display_.source_generation_;
    require(bool(generation),"Source screen lost its prepared descriptor generation");
    for(unsigned queue=0;queue<4;++queue) {
      const unsigned start=4+queue*258,offset=word(work.objects_,start+256);
      require(offset<=64&&!(offset&1),"Source screen queue leaves its actual32 records");
      for(unsigned at=0;at<offset;at+=2) {
        const auto &map=generation->maps[queue][at/2];
        require(map.has_value(),"Source screen queue has an unowned map record");map->validate();
        require(map->uses(work.object_display_)&&map->pointer()==word(work.objects_,start+at)&&
            map->bank()==std::uint8_t(word(work.objects_,start+192+at)),
            "Source screen queue no longer selects its actual owned map");
      }
    }
    require(work.objects_.scratch.high_pointer_bank==0||work.objects_.scratch.high_pointer_bank==0x7e,
        "Source screen lacks its actual mapped high-table pointer bank");
  } else for(unsigned queue=0;queue<4;++queue)
    require(!word(work.objects_,4+queue*258+256),"Source screen has unrepresented priority spritemap work");
  const auto &builder=work.objects_.builder;
  const unsigned base=builder.end_address==0x700?0x500:builder.end_address==0xa00?0x800:0;
  require(base&&builder.address>=base&&builder.address<=base+512&&!(unsigned(builder.address-base)&3),
      "Source screen lost its actual OAM builder cursor");
  // C08CD5 retains its local X until its final STX. Its intermediate high
  // rotations/flushes therefore do not yet correspond to retained OAM_ADDR.
  if(preparation&&preparation->emitting) {
    require(builder.address<base+512&&builder.high_address>=base+512&&builder.high_address<base+544,
        "Source screen emission leaves its owned descriptor cursors");
    return;
  }
  const unsigned count=(builder.address-base)/4,partial=count%4;
  // At full128 capacity the final high byte aliases the adjacent RAM owner,
  // which this544-byte descriptor does not own. Preserve that explicit gate.
  require(count<128&&builder.high_address==base+512+count/4,
      "Source screen final high byte leaves its actual descriptor owner");
  const unsigned sentinel=1u<<(7-partial*2);
  require((builder.high_buffer&sentinel)&&!(builder.high_buffer&(sentinel-1)),
      "Source screen has no actual terminating OAM high-table sentinel");
}
void SourceScreenUpdate::validate_entry(SourceWorkClock &work,const battle::FrameDisplay &frames) {
  const auto selected=frames.next_buffer_id();const unsigned base=selected==1?0x500:0x800;
  require(work.objects_.builder.end_address==base+512,
      "Source screen OAM builder belongs to another drawing selection");
  require(!frames.pending()||frames.pending_display_id()!=selected,
      "Source screen entry has an unfinished upload of its drawing descriptor");
}
std::unique_ptr<SourceScreenUpdate> Scene::Operation::begin_source_screen(SourceWorkClock &work,SourceScreenContext context) {
  require(context.native_mode&&context.upper_rom_caller&&context.low_wram_stack&&context.low_wram_data_bank,
      "Source screen requires its actual native upper-ROM/WRAM far caller context");
  // Only the first validation checks the entry drawing selection. The source
  // later toggles that same selection while retaining its finished OAM cursor.
  auto admitted=std::make_shared<bool>(false);
  auto receipt=pin_source_screen(work,[&work,admitted,context](TickState &ticks,const battle::FrameDisplay &frames,SourceObjectReceipt *objects) {
    if(objects)require(context.data_bank==0x7e&&context.wide_indexes&&context.decimal_clear,
        "Source nonempty screen requires its actual7E/X16/binary caller context");
    SourceScreenUpdate::validate_owner(work,ticks,frames,objects);
    if(!*admitted) {
      SourceScreenUpdate::validate_entry(work,frames);
      *admitted=true;
    }
  });
  try{return std::unique_ptr<SourceScreenUpdate>(new SourceScreenUpdate(work,receipt));}
  catch(...) {receipt->poison();throw;}
}
struct SourceScreenUpdate::Execution {
  enum class Phase {Call,Wide,CallQueues,PushFlags,QueueWide,Unused,CompareQueue,InsertBranch,
    CallInsert,ReturnInsert,First,ToCheck,Count,CountBranch,
    QueueBank,StoreQueueBank,PushQueueIndex,QueueMap,PushQueueMap,QueueY,QueueYIndex,QueueX,QueueXIndex,
    PullQueueMap,CallEmitter,Emitter,PullQueueIndex,QueueNext,QueueNextAgain,RestoreFlags,ReturnQueues,
    Byte,PushBank,PullBank,CompareBank,BankBranch,High,CompareHigh,HighBranch,ShiftFirst,
    ShiftSecond,ShiftBranch,HighAddress,StoreHigh,ScrollWide,Buffer,Decrement,Double,Index,
    ScrollRead,ScrollStore,SelectByte,SelectRead,SelectStore,Toggle,ToggleStore,ReturnWide,Return,Done};
  SourceWorkClock &work;
  entities::graphics::ObjectDisplayState &objects;
  entities::graphics::ObjectDisplay &display;
  battle::FrameDisplay &frames;
  Receipt &receipt;
  Phase phase=Phase::Call;
  std::uint64_t retired{};
  unsigned queue{},scroll{};
  std::uint16_t value{},index{},high_address{};
  std::uint8_t selected{},byte{};
  bool zero{},carry{};
  std::uint16_t map_pointer{},map_x{},map_y{};
  std::optional<entities::graphics::SourceObjectMap> map;
  std::unique_ptr<SourceObjectEmitter> emitter;
  Execution(SourceWorkClock &clock,Receipt &lease):work(clock),objects(clock.objects_),
      display(clock.object_display_),frames(clock.frames_),receipt(lease) {}
  void retire(SourceWorkCost cost,Phase next,const std::function<void()> &effect={}) {
    work.retire_source_work(cost,effect);++retired;phase=next;
  }
  void branch(bool taken,Phase yes,Phase no) {retire({taken?3u:2u,2,0,0},taken?yes:no);}
  void step() {
    using P=Phase;
    switch(phase) {
    case P::Call:retire({8,4,3,0},P::Wide);break; // C1006F/JP C100E4 genuine JSL
    case P::Wide:retire({3,2,0,0},P::CallQueues);break;
    case P::CallQueues:retire({6,3,2,0},P::PushFlags);break;
    case P::PushFlags:retire({3,1,1,0},P::QueueWide);break;
    case P::QueueWide:retire({3,2,0,0},P::Unused);break;
    case P::Unused:retire({5,3,2,0},P::CompareQueue,[&]{value=word(objects,2);});break;
    case P::CompareQueue:retire({3,3,0,0},P::InsertBranch,[&]{zero=value==queue;});break;
    case P::InsertBranch:branch(!zero,P::First,P::CallInsert);break;
    case P::CallInsert:retire({6,3,2,0},P::ReturnInsert);break;
    case P::ReturnInsert:retire({6,1,2,0},P::First);break;
    case P::First:retire({3,3,0,0},P::ToCheck,[&]{index=0;});break;
    case P::ToCheck:retire({3,2,0,0},P::Count);break;
    case P::Count:retire({5,3,2,0},P::CountBranch,[&]{
      value=word(objects,4+queue*258+256);carry=index>=value;
    });break;
    case P::CountBranch:
      if(!carry)retire({3,2,0,0},P::QueueBank);
      else retire({2,2,0,0},queue==3?P::RestoreFlags:P::Unused,[&]{++queue;});
      break;
    case P::QueueBank:retire({6,3,2,0},P::StoreQueueBank,[&]{value=word(objects,4+queue*258+192+index);});break;
    case P::StoreQueueBank:retire({5,3,2,0},P::PushQueueIndex,[&]{objects.scratch.spritemap_bank=value;});break;
    case P::PushQueueIndex:retire({4,1,2,0},P::QueueMap);break;
    case P::QueueMap:retire({6,3,2,0},P::PushQueueMap,[&]{map_pointer=word(objects,4+queue*258+index);});break;
    case P::PushQueueMap:retire({4,1,2,0},P::QueueY);break;
    case P::QueueY:retire({6,3,2,0},P::QueueYIndex,[&]{value=word(objects,4+queue*258+128+index);});break;
    case P::QueueYIndex:retire({2,1,0,0},P::QueueX,[&]{map_y=value;});break;
    case P::QueueX:retire({6,3,2,0},P::QueueXIndex,[&]{value=word(objects,4+queue*258+64+index);});break;
    case P::QueueXIndex:retire({2,1,0,0},P::PullQueueMap,[&]{map_x=value;});break;
    case P::PullQueueMap:retire({5,1,2,0},P::CallEmitter);break;
    case P::CallEmitter: {
      require(receipt.objects&&index<64&&!(index&1),"Source screen emission lacks its actual map preparation");
      const auto generation=display.source_generation_;
      map=generation->maps[queue][index/2];require(map.has_value(),"Source screen sampled map is unowned");map->validate();
      require(map->pointer()==map_pointer&&map->bank()==std::uint8_t(objects.scratch.spritemap_bank),
          "Source screen sampled queue inputs lost their actual extent");
      emitter.reset(new SourceObjectEmitter(work,objects,*map,map_pointer,map_x,map_y));
      retire({8,4,3,0},P::Emitter);break;
    }
    case P::Emitter:emitter->step();++retired;
      if(emitter->complete()){emitter.reset();map.reset();phase=P::PullQueueIndex;}break;
    case P::PullQueueIndex:retire({5,1,2,0},P::QueueNext);break;
    case P::QueueNext:retire({2,1,0,0},P::QueueNextAgain,[&]{++index;});break;
    case P::QueueNextAgain:retire({2,1,0,0},P::Count,[&]{++index;});break;
    case P::RestoreFlags:retire({4,1,1,0},P::ReturnQueues);break;
    case P::ReturnQueues:retire({6,1,2,0},P::Byte);break;
    case P::Byte:retire({3,2,0,0},P::PushBank);break;
    case P::PushBank:retire({3,1,1,0},P::PullBank);break;
    case P::PullBank:retire({4,1,1,0},P::CompareBank);break;
    case P::CompareBank:retire({2,2,0,0},P::BankBranch);break;
    case P::BankBranch:retire({3,2,0,0},P::High);break; // admitted actual low-WRAM DB cannot beFF
    case P::High:retire({4,3,1,0},P::CompareHigh,[&]{byte=objects.builder.high_buffer;});break;
    case P::CompareHigh:retire({2,2,0,0},P::HighBranch,[&]{zero=byte==0x80;});break;
    case P::HighBranch:branch(zero,P::HighAddress,P::ShiftFirst);break;
    case P::ShiftFirst:retire({2,1,0,0},P::ShiftSecond,[&]{byte>>=1;});break;
    case P::ShiftSecond:retire({2,1,0,0},P::ShiftBranch,[&]{carry=byte&1;byte>>=1;});break;
    case P::ShiftBranch:branch(!carry,P::ShiftFirst,P::HighAddress);break;
    case P::HighAddress:retire({5,3,2,0},P::StoreHigh,[&]{high_address=objects.builder.high_address;});break;
    case P::StoreHigh:retire({5,3,1,0},P::ScrollWide,[&]{
      selected=objects.builder.end_address==0x700?1:2;
      const unsigned base=selected==1?0x500:0x800;
      require(high_address>=base+512&&high_address<base+544,"Source high-byte sample lost its descriptor owner");
      objects.buffers[selected-1].bytes[high_address-base]=byte;
      frames.source_object_snapshot(selected,display.snapshot_objects(selected),receipt.world_objects);
    });break;
    case P::ScrollWide:retire({3,2,0,0},P::Buffer);break;
    case P::Buffer:retire({5,3,2,0},P::Decrement,[&]{value=frames.next_buffer_id();});break;
    case P::Decrement:retire({2,1,0,0},P::Double,[&]{--value;});break;
    case P::Double:retire({2,1,0,0},P::Index,[&]{value=std::uint16_t(value<<1);});break;
    case P::Index:retire({2,1,0,0},P::ScrollRead,[&]{index=value;});break;
    case P::ScrollRead:retire({5,3,2,0},P::ScrollStore,[&]{
      const auto &current=work.frames_.display_.staged_scroll[scroll/2];value=(scroll&1)?current.y:current.x;
    });break;
    case P::ScrollStore:retire({6,3,2,0},scroll==7?P::SelectByte:P::ScrollRead,[&]{
      require(index==0||index==2,"Source scroll sample leaves its two actual latches");
      frames.source_scroll_word(std::uint8_t(index/2+1),scroll,value);++scroll;
    });break;
    case P::SelectByte:retire({3,2,0,0},P::SelectRead);break;
    case P::SelectRead:retire({4,3,1,0},P::SelectStore,[&]{byte=frames.next_buffer_id();});break;
    case P::SelectStore:retire({4,3,1,0},P::Toggle,[&]{
      require(byte==selected,"Source selection lost its finished actual descriptor");frames.source_display_id(byte);
    });break;
    case P::Toggle:retire({2,2,0,0},P::ToggleStore,[&]{byte^=3;});break;
    case P::ToggleStore:retire({4,3,1,0},P::ReturnWide,[&]{frames.source_next_buffer_id(byte);});break;
    case P::ReturnWide:retire({3,2,0,0},P::Return);break;
    case P::Return:retire({6,1,3,0},P::Done);receipt.completed=true;break;
    case P::Done:break;
    }
  }
};
SourceScreenUpdate::SourceScreenUpdate(SourceWorkClock &work,std::shared_ptr<Receipt> receipt)
    :receipt_(std::move(receipt)),execution_(std::make_unique<Execution>(work,*receipt_)) {
  if(receipt_->objects) {receipt_->objects->begin_emission();receipt_->objects->emitting=true;}
}
SourceScreenUpdate::~SourceScreenUpdate() {if(receipt_->live&&!receipt_->consumed)receipt_->poison();}
bool SourceScreenUpdate::advance(unsigned budget) {
  if(receipt_->completed)return true;
  require(receipt_->live&&!receipt_->consumed&&!receipt_->executing,"Source screen lost its live single invocation");
  receipt_->executing=true;
  try {
    receipt_->validate();
    while(budget--&&!receipt_->completed) {receipt_->validate();execution_->step();}
    receipt_->executing=false;return receipt_->completed;
  } catch(...) {receipt_->executing=false;receipt_->poison();throw;}
}
bool SourceScreenUpdate::complete() const noexcept {return receipt_->completed;}
std::uint64_t SourceScreenUpdate::retired_instructions() const noexcept {return execution_->retired;}
}
namespace eb::native {
std::unique_ptr<story::SourceScreenUpdate> WorldRuntime::Operation::begin_source_screen(
    story::SourceWorkClock &work,story::SourceScreenContext context) {
  return source_screen_owner().begin_source_screen(work,context);
}
}
