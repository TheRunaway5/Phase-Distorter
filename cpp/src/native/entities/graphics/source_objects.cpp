#include "eb/native/entities/graphics/source_objects.hpp"
#include "eb/native/entities/graphics/source_insertion.hpp"
#include "eb/native/entities/graphics/object_display.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/world_runtime.hpp"
#include <stdexcept>
namespace eb::native::story {
namespace {
void require(bool value,const char *message) {if(!value)throw std::logic_error(message);}
std::uint16_t word(const entities::graphics::ObjectDisplayState &state,unsigned at) {
  return std::uint16_t(state.working[at]|unsigned(state.working[at+1])<<8);
}
}
void SourceObjectPreparation::validate_owner(SourceWorkClock &work,TickState &ticks,const battle::FrameDisplay &frames) {
  work.require_healthy();
  require(&work.frames_==&frames && work.uses_clock(work.physical_,ticks) &&
      frames.uses_object_source(work.object_display_) && &work.object_display_.state()==&work.objects_,
      "Source objects require their actual clock/display/OAM owners");
  const auto *peripherals=frames.peripherals();
  require(peripherals && peripherals->uses(work.physical_) && work.physical_.uses_peripherals(*peripherals),
      "Source objects require their actual physical peripheral owner");
  require(!(ticks.effective_interrupt_mask()&0x30),"Source objects have unowned H/V IRQ work");
  require(!(ticks.effective_interrupt_mask()&0x80)||work.has_interrupt_work(),"Source objects lack actual NMI work");
}
struct SourceObjectPreparation::Admission {
  using Generation=entities::graphics::ObjectDisplay::SourceGeneration;
  std::shared_ptr<Generation> generation;
  entities::graphics::ObjectDisplay &display;
  entities::graphics::SourceObjectMap map;
  Admission(std::shared_ptr<Generation> gen,entities::graphics::ObjectDisplay &owner,
      entities::graphics::SourceObjectMap content):generation(std::move(gen)),display(owner),map(std::move(content)) {}
  void validate() const {
    // Map's display/allocation lifetime checks precede every borrowed read.
    map.validate();
    require(display.source_generation_==generation,"Source objects lost their exact clear generation");
    require(generation->phase==Generation::Phase::Cleared||generation->phase==Generation::Phase::Inserting||
        generation->phase==Generation::Phase::Prepared||generation->phase==Generation::Phase::Emitting,
        "Source objects lost their unemitted descriptor disposition");
  }
};
std::shared_ptr<SourceObjectPreparation::Admission> SourceObjectPreparation::admit(
    SourceWorkClock &work,const SourceObjectCall &call) {
  work.require_healthy();call.map.validate_path(127);
  auto &display=work.object_display_;const auto generation=display.source_generation_;
  require(call.map.uses(display)&&generation&&generation->phase==Admission::Generation::Phase::Cleared,
      "Source objects require a fresh actual OAM_CLEAR and its owned map");
  require(generation->buffer==work.frames_.next_buffer_id(),"Source objects clear belongs to another drawing selection");
  require(!work.frames_.pending()||work.frames_.pending_display_id()!=generation->buffer,
      "Source objects would overwrite the pending physical descriptor");
  require(call.map.bank()==0x7e||call.map.bank()==0xc4,"Source objects map bank is not represented");
  require(std::uint8_t(work.objects_.scratch.spritemap_bank)==call.map.bank(),
      "Source objects actual retained bank does not select its owned map");
  require(word(work.objects_,0)<4,"Source objects priority leaves its actual four queues");
  for(unsigned group=0;group<4;++group)
    require(word(work.objects_,4+group*258+256)==0,"Source objects clear already has queued work");
  const unsigned base=generation->buffer==1?0x500:0x800;const auto &builder=work.objects_.builder;
  require(builder.address==base&&builder.end_address==base+512&&builder.high_address==base+512&&builder.high_buffer==0x80,
      "Source objects require the fresh actual cleared builder");
  require(work.objects_.scratch.high_pointer_bank==0||work.objects_.scratch.high_pointer_bank==0x7e,
      "Source objects lack their actual mapped high-table pointer bank");
  return std::make_shared<Admission>(generation,display,call.map);
}
std::unique_ptr<SourceObjectPreparation> Scene::Operation::begin_source_objects(
    SourceWorkClock &work,SourceObjectContext context,SourceObjectCall call) {
  require(context.native_mode&&context.upper_rom_caller&&context.low_wram_stack&&context.wide_indexes&&
      context.decimal_clear&&context.data_bank==0x7e,
      "Source objects require actual native/X16/binary/7E far-entry context");
  // The lower binding comparison precedes every borrowed work-owner read.
  // All entry validation is pure, before receipt creation or disposition.
  auto admission=std::make_shared<std::shared_ptr<SourceObjectPreparation::Admission>>();
  auto receipt=pin_source_objects(work,[&work,admission,call](TickState &ticks,const battle::FrameDisplay &frames) {
    SourceObjectPreparation::validate_owner(work,ticks,frames);
    if(!*admission)*admission=SourceObjectPreparation::admit(work,call);
    (*admission)->validate();
  });
  try {return std::unique_ptr<SourceObjectPreparation>(new SourceObjectPreparation(work,receipt,std::move(call),*admission));}
  catch(...) {receipt->poison();throw;}
}
struct SourceObjectPreparation::Execution {
  enum class Phase {Call,Insertion,Return,Done};
  SourceWorkClock &work;
  Receipt &receipt;
  std::shared_ptr<Admission> admission;
  std::unique_ptr<SourceObjectInsertion> insertion;
  Phase phase=Phase::Call;
  std::uint64_t retired{};
  Execution(SourceWorkClock &clock,Receipt &lease,SourceObjectCall call,std::shared_ptr<Admission> accepted)
      :work(clock),receipt(lease),admission(std::move(accepted)),
       insertion(new SourceObjectInsertion(clock,clock.objects_,std::move(call),
         [this](unsigned group,unsigned index,const entities::graphics::SourceObjectMap &map){
           admission->generation->maps[group][index]=map;
         })) {}
  void step() {
    switch(phase) {
    case Phase::Call:work.retire_source_work({6,3,2,0});++retired;phase=Phase::Insertion;break;
    case Phase::Insertion:insertion->step();++retired;
      if(insertion->complete())phase=Phase::Return;
      break;
    case Phase::Return:work.retire_source_work({6,1,3,0});++retired;phase=Phase::Done;
      receipt.completed=true;admission->generation->phase=Admission::Generation::Phase::Prepared;break;
    case Phase::Done:break;
    }
  }
};
SourceObjectPreparation::SourceObjectPreparation(SourceWorkClock &work,std::shared_ptr<Receipt> receipt,
    SourceObjectCall call,std::shared_ptr<Admission> admission):receipt_(std::move(receipt)),
      execution_(std::make_unique<Execution>(work,*receipt_,std::move(call),admission)) {
  admission->generation->phase=Admission::Generation::Phase::Inserting;
  receipt_->begin_emission=[admission] {
    admission->validate();require(admission->generation->phase==Admission::Generation::Phase::Prepared,
        "Source descriptor emission requires its exact prepared generation");
    admission->generation->phase=Admission::Generation::Phase::Emitting;
  };
  receipt_->finish_emission=[admission] {
    admission->validate();require(admission->generation->phase==Admission::Generation::Phase::Emitting,
        "Source descriptor finish requires its exact emitting generation");
    admission->generation->phase=Admission::Generation::Phase::Emitted;
  };
}
SourceObjectPreparation::~SourceObjectPreparation() {
  if(receipt_->live&&!receipt_->acknowledged&&!receipt_->consumed)receipt_->poison();
}
bool SourceObjectPreparation::advance(unsigned budget) {
  require(receipt_->live&&!receipt_->consumed&&!receipt_->executing&&!receipt_->emitting,
      "Source insertion lost its live single invocation");
  if(receipt_->completed) {receipt_->validate();return true;}
  receipt_->executing=true;
  try {receipt_->validate();while(budget--&&!receipt_->completed){receipt_->validate();execution_->step();}
    receipt_->executing=false;return receipt_->completed;
  } catch(...) {receipt_->executing=false;receipt_->poison();throw;}
}
bool SourceObjectPreparation::complete() const noexcept {return receipt_->completed;}
std::uint64_t SourceObjectPreparation::retired_instructions() const noexcept {return execution_->retired;}
}
namespace eb::native {
std::unique_ptr<story::SourceObjectPreparation> WorldRuntime::Operation::begin_source_objects(
    story::SourceWorkClock &work,story::SourceObjectContext context,story::SourceObjectCall call) {
  return source_screen_owner().begin_source_objects(work,context,std::move(call));
}
}
