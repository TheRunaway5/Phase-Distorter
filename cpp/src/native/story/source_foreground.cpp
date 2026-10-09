#include "eb/native/story/source_foreground.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/world_runtime.hpp"
#include <stdexcept>
namespace eb::native::story {
namespace {
void require(bool value,const char *message) {if(!value)throw std::logic_error(message);}
void require_context(SourceForegroundContext context) {
  require(context.native_mode&&context.upper_rom_caller&&context.low_wram_stack&&context.low_wram_data_bank,
      "Source foreground requires its actual native upper-ROM/WRAM caller context");
}
}
void SourceForegroundWork::validate_owner(SourceWorkClock &work,TickState &ticks,
    const battle::FrameDisplay &frames,const Scene &scene) {
  work.require_healthy();
  require(&work.frames_==&frames&&work.uses_clock(work.physical_,ticks)&&&work.runtime_.scene()==&scene,
      "Source foreground requires its actual shared physical/audio/tick/runtime/display owners");
  const auto *peripherals=frames.peripherals();
  require(peripherals&&peripherals->uses(work.physical_)&&work.physical_.uses_peripherals(*peripherals),
      "Source foreground requires its actual physical display peripheral owner");
  require(!(ticks.effective_interrupt_mask()&0x30),"Source foreground has an unowned H/V IRQ dependency");
  require(!(ticks.effective_interrupt_mask()&0x80)||work.has_interrupt_work(),
      "Source foreground has no actual NMI work owner");
}
void SourceForegroundWork::validate_operation_owner(SourceWorkClock &work,TickState &ticks,
    const battle::FrameDisplay &frames,const Scene::Operation &operation) {
  work.require_healthy();
  const auto &scene=work.runtime_.scene();
  require(operation.uses(scene),"Source foreground requires its clock's actual Scene continuation");
  validate_owner(work,ticks,frames,scene);
}
std::unique_ptr<Scene::Operation> Scene::begin_source_world_frame(SourceWorkClock &work,SourceForegroundContext context) {
  require_context(context);
  return begin_source_world_frame_impl(work,[&work,this](TickState &ticks,const battle::FrameDisplay &frames) {
    SourceForegroundWork::validate_owner(work,ticks,frames,*this);
  });
}
std::unique_ptr<SourceForegroundWork> Scene::Operation::begin_source_foreground(
    SourceWorkClock &work,SourceForegroundContext context) {
  require_context(context);
  auto receipt=pin_source_foreground(work,[&work,this](TickState &ticks,const battle::FrameDisplay &frames) {
    SourceForegroundWork::validate_operation_owner(work,ticks,frames,*this);
  });
  try{return std::unique_ptr<SourceForegroundWork>(new SourceForegroundWork(work,receipt));}
  catch(...) {receipt->poison();throw;}
}
struct SourceForegroundWork::Execution {
  SourceWorkClock &work;
  SourceForegroundReceipt &receipt;
  unsigned phase{};
  std::uint16_t sampled{};
  std::uint64_t retired{};
  Execution(SourceWorkClock &clock,SourceForegroundReceipt &lease):work(clock),receipt(lease) {}
  void retire(SourceWorkCost cost,const std::function<void()> &effect={}) {
    work.retire_source_work(cost,effect);++retired;++phase;
  }
  void step() {
    switch(receipt.stage) {
    case SourceForegroundStage::Prefix:
      switch(phase) {
      case 0:retire({3,2,0,0});break; // Actual C1004E/JP C100C4 REP31
      case 1:retire({5,3,2,0},[&]{sampled=*receipt.render;});break;
      case 2:retire({3,3,0,0},[&]{sampled&=0xff;});break;
      case 3:
        require(!sampled,"Source foreground sampled unrepresented window work");
        retire({3,2,0,0});break;
      case 4:retire({5,3,2,0},[&]{sampled=*receipt.battle;});break;
      case 5:
        require(!sampled,"Source foreground sampled unrepresented battle work");
        retire({3,2,0,0});receipt.completed=true;break;
      default:throw std::logic_error("Source foreground prefix left its literal continuation");
      }
      break;
    case SourceForegroundStage::SuppressedActors:
      switch(phase) {
      case 0:retire({8,4,3,0});break; // Genuine C1006B/JP C100E0 JSL RUN
      case 1:retire({5,3,2,0},[&]{sampled=receipt.ticks->action_scripts_disabled;});break;
      case 2:
        require(sampled,"Source foreground sampled unrepresented unsuppressed actor work");
        retire({2,2,0,0});break;
      case 3:retire({6,1,3,0});receipt.completed=true;break;
      default:throw std::logic_error("Source suppressed actor call left its literal continuation");
      }
      break;
    case SourceForegroundStage::Return:
      require(!phase,"Source foreground return was already retired");
      retire({6,1,3,0});receipt.completed=true;break; // C10077/JP C100EC RTL
    }
  }
};
SourceForegroundWork::SourceForegroundWork(SourceWorkClock &work,std::shared_ptr<SourceForegroundReceipt> receipt)
    :receipt_(std::move(receipt)),execution_(std::make_unique<Execution>(work,*receipt_)) {}
SourceForegroundWork::~SourceForegroundWork() {if(receipt_->live&&!receipt_->consumed)receipt_->poison();}
SourceForegroundStage SourceForegroundWork::stage() const noexcept {return receipt_->stage;}
bool SourceForegroundWork::advance(unsigned budget) {
  if(receipt_->completed)return true;
  require(receipt_->live&&!receipt_->consumed&&!receipt_->executing,"Source foreground lost its live single boundary invocation");
  receipt_->executing=true;
  try {
    receipt_->validate();
    while(budget--&&!receipt_->completed) {receipt_->validate();execution_->step();}
    receipt_->executing=false;return receipt_->completed;
  } catch(...) {receipt_->executing=false;receipt_->poison();throw;}
}
bool SourceForegroundWork::complete() const noexcept {return receipt_->completed;}
std::uint64_t SourceForegroundWork::retired_instructions() const noexcept {return execution_->retired;}
}
namespace eb::native {
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_world_frame(
    story::SourceWorkClock &work,story::SourceForegroundContext context) {
  // Keep the concrete clock factory in this upper module. Lower Runtime/Scene
  // receive only their actual opaque service and read-only owner validator.
  if(!context.native_mode||!context.upper_rom_caller||!context.low_wram_stack||!context.low_wram_data_bank)
    throw std::logic_error("Source foreground requires its actual native upper-ROM/WRAM caller context");
  return begin_source_world_frame_impl(work,[&work,this](story::TickState &ticks,const battle::FrameDisplay &frames) {
    story::SourceForegroundWork::validate_owner(work,ticks,frames,scene());
  });
}
std::unique_ptr<story::SourceForegroundWork> WorldRuntime::Operation::begin_source_foreground(
    story::SourceWorkClock &work,story::SourceForegroundContext context) {
  return source_foreground_owner().begin_source_foreground(work,context);
}
}
