#include "eb/native/story/source_window_publication.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/world_runtime.hpp"
#include <algorithm>
#include <stdexcept>
#include <vector>
namespace eb::native::story {
namespace {
void require(bool value,const char *message) {if(!value)throw std::logic_error(message);}
}
void SourceWindowPublicationEntry::set_page(std::span<const std::uint8_t,256> page) {
  require(!claimed_,"Source window entry has already been leased");
  std::copy(page.begin(),page.end(),page_.begin());
}
void SourceWindowPublication::validate_host(dialogue::WindowHost &host,const void *lease) {host.validate_source_publication(lease);}
void SourceWindowPublication::validate_context(SourceWindowPublicationContext context) {
  require(context.native_mode&&context.low_wram_stack&&context.decimal_clear&&
      context.program_bank==0xc2&&context.data_bank==0x7e&&context.stack_pointer==0x1ffc&&
      (context.direct_page==0x1e00||context.direct_page==0x1d12),
      "Source window requires its declared native C2/7E/binary/S1FFC and disjoint C-stack page entry");
}
void SourceWindowPublication::validate_owner(SourceWorkClock &work,TickState &ticks,
    const battle::FrameDisplay &frames,dialogue::WindowHost &windows,
    const WorldDisplayFade &fade,const Scene &scene) {
  work.require_healthy();
  require(&work.frames_==&frames&&work.uses_clock(work.physical_,ticks)&&&work.runtime_.scene()==&scene,
      "Source window requires its actual shared physical/audio/tick/runtime/display owners");
  const auto *peripherals=frames.peripherals();
  require(peripherals&&peripherals->uses(work.physical_)&&work.physical_.uses_peripherals(*peripherals),
      "Source window requires both actual peripheral/physical bindings");
  require(!(ticks.effective_interrupt_mask()&0x30)&&
      (!(ticks.effective_interrupt_mask()&0x80)||work.has_interrupt_work()),
      "Source window has unrepresented IRQ or absent NMI work");
  require(work.runtime_.uses_default_interrupt_callback(),
      "Source window has unrepresented callback/C-stack aliases");
  require((fade.state().brightness&0x80)&&!fade.active(),
      "Source window requires its actual stable forced-blank mirror");
  const auto &video=frames.video_transport();
  require(!video.failed()&&!video.pending_bytes()&&video.pending().empty(),
      "Source window has unrepresented nonblank DMA ring work");
  require(frames.pending_display_id()<=2,"Source window has an unowned OAM selection");
  require(windows.source_tail_identity()==(windows.version()==GameVersion::US?0xc40be8u:0xc40b34u),
      "Source window fixed tail lacks its actual regional resource identity");
}
void SourceWindowPublication::validate_operation_owner(SourceWorkClock &work,TickState &ticks,
    const battle::FrameDisplay &frames,dialogue::WindowHost &windows,const WorldDisplayFade &fade,
    const Scene::Operation &operation) {
  work.require_healthy();
  const auto &scene=work.runtime_.scene();
  require(operation.uses(scene),"Source window requires its clock's actual Scene parent");
  validate_owner(work,ticks,frames,windows,fade,scene);
}
struct SourceWindowPublication::Admission {
  SourceWindowPublicationCall call;
  dialogue::WindowHost &windows;
  const WorldDisplayFade &fade;
  std::weak_ptr<const void> window_lifetime,fade_lifetime,peripheral_lifetime;
  PeripheralState *peripherals{};
  const void *lease{};
  Admission(SourceWindowPublicationCall input,dialogue::WindowHost &host,
      const WorldDisplayFade &blank,PeripheralState &physical)
      :call(input),windows(host),fade(blank),window_lifetime(host.source_lifetime()),
       fade_lifetime(blank.source_lifetime()),peripheral_lifetime(physical.source_lifetime()),peripherals(&physical) {}
  void validate() const {
    require(!call.lifetime.expired()&&!window_lifetime.expired()&&!fade_lifetime.expired()&&
        !peripheral_lifetime.expired(),"Source window lost its actual entry, BG2 borrower, fade or peripheral owner");
    windows.validate_source_publication(lease);
  }
};
std::unique_ptr<Scene::Operation> Scene::begin_source_window_tick(
    SourceWorkClock &work,SourceWindowPublicationContext context) {
  SourceWindowPublication::validate_context(context);
  return begin_source_window_tick_impl(work,[&work,this](TickState &ticks,const battle::FrameDisplay &frames,
      dialogue::WindowHost &windows,const WorldDisplayFade &fade) {
    SourceWindowPublication::validate_owner(work,ticks,frames,windows,fade,*this);
    SourceWindowPublication::validate_host(windows);
  });
}
std::unique_ptr<SourceWindowPublication> Scene::Operation::begin_source_window_publication(
    SourceWorkClock &work,SourceWindowPublicationContext context,SourceWindowPublicationCall call) {
  SourceWindowPublication::validate_context(context);
  auto admission=std::make_shared<std::shared_ptr<SourceWindowPublication::Admission>>();
  auto receipt=pin_source_window_publication(work,[&work,this,call,admission](TickState &ticks,
      const battle::FrameDisplay &frames,dialogue::WindowHost &windows,const WorldDisplayFade &fade) {
    // Lower bound identity and parent lease are checked before borrowed reads.
    require(!call.lifetime.expired(),"Source window entry expired before admission");
    SourceWindowPublication::validate_operation_owner(work,ticks,frames,windows,fade,*this);
    if(!*admission) {
      require(!call.entry->claimed_,"Source window entry belongs to an earlier invocation");
      SourceWindowPublication::validate_host(windows);
      *admission=std::make_shared<SourceWindowPublication::Admission>(call,windows,fade,*frames.peripherals());
    }
    require((*admission)->peripherals==frames.peripherals(),"Source window lost its exact DMA peripheral instance");
    (*admission)->validate();
  });
  (*admission)->lease=receipt.get();
  try {return std::unique_ptr<SourceWindowPublication>(new SourceWindowPublication(work,receipt,context,call));}
  catch(...) {receipt->poison();throw;}
}
struct SourceWindowPublication::Execution {
  struct Atom {SourceWorkCost cost;std::function<void()> effect;bool dma{};};
  SourceWorkClock &work;
  SourceWindowPublicationReceipt &receipt;
  SourceWindowPublicationEntry &entry;
  std::weak_ptr<const void> entry_lifetime,window_lifetime;
  SourceWindowPublicationContext context;
  battle::PsiDisplayState &video;
  PeripheralState &peripherals;
  std::vector<Atom> atoms;
  unsigned phase{},copy{};
  std::uint16_t a{},x{},y{},saved_y{},d{};
  std::uint64_t retired{};
  Execution(SourceWorkClock &clock,SourceWindowPublicationReceipt &lease,
      SourceWindowPublicationContext caller,SourceWindowPublicationCall call)
      :work(clock),receipt(lease),entry(*call.entry),entry_lifetime(call.lifetime),
       window_lifetime(lease.windows->source_lifetime()),context(caller),video(clock.frames_.display_),
       peripherals(*clock.frames_.peripherals()),d(caller.direct_page) {
    auto &windows=*receipt.windows;
    const auto add=[&](SourceWorkCost cost,std::function<void()> effect={}) {atoms.push_back({cost,std::move(effect),false});};
    const unsigned delta=((caller.direct_page-0x12)&255)!=0;
    const SourceWorkCost local_store{4+delta,2,2,0},local_load{4+delta,2,2,0};
    add({3,2,0,0}); // C2038B/JP C2036C REP31: binary, clear carry.
    add({4,1,2,0}); // PHD
    add({2,1,0,0},[this]{a=d;});
    add({3,3,0,0},[this]{a=std::uint16_t(a+0xffee);});
    add({2,1,0,0},[this]{d=a;});
    const auto common_before=[&] {
      add({3,1,1,0});add({3,2,0,0});add({3,2,0,0}); // PHP/REP20/SEP10
      add({4,1,2,0});add({5,3,2,0}); // PHD/PEA0
      add({5,1,2,0},[this]{d=0;});
      add({3,1,1,0}); // PHB saves the declared DB7E
      add({2,2,0,0},[this]{y=0;});add({3,1,1,0});add({4,1,1,0}); // LDY0/PHY8/PLB0
      add({3,2,0,0});add({6,3,2,0}); // REP10/actual near JSR COPY
    };
    const auto common_after=[&] {
      add({4,1,1,0}); // PLB restores DB7E
      add({5,1,2,0},[this]{d=std::uint16_t(context.direct_page-0x12);});
      add({4,1,1,0});add({6,1,3,0}); // PLP/RTL to actual macro caller
    };
    const auto copy_body=[&] {
      add({3,1,1,0});add({4,1,2,0},[this]{saved_y=y;});add({3,2,0,0}); // PHP/PHY16/SEP10
      add({3,2,1,0},[this]{y=receipt.fade->state().brightness;});
      add({3,2,0,0},[this]{require(y&0x80,"Source COPY sampled an unrepresented nonblank branch");});
      add({3,2,1,0},[this]{y=parameters().mode;});
      add({5,3,2,0},[this]{require(!y,"Source window sampled an unsupported DMA table row");a=0x1801;});
      add({5,3,0,0},[this]{dma_word(0,a);});
      add({4,3,1,0},[this]{require(!y,"Source window sampled an unsupported DMA table row");x=0x80;});
      add({4,3,0,0},[this]{video.set_source_vmain(std::uint8_t(x));});
      add({4,2,2,0},[this]{a=parameters().byte_count;});
      add({5,3,0,0},[this]{dma_word(5,a);});
      add({4,2,2,0},[this]{a=parameters().source_offset;});
      add({5,3,0,0},[this]{dma_word(2,a);});
      add({3,2,1,0},[this]{x=std::uint8_t(parameters().source_identity>>16);});
      add({4,3,0,0},[this]{peripherals.write_source_dma_register(1,4,std::uint8_t(x));});
      add({4,2,2,0},[this]{a=parameters().destination;});
      add({5,3,0,0},[this]{video.set_source_vmadd(a);});
      add({2,2,0,0},[this]{x=2;});
      atoms.push_back({{4,3,0,0},[this]{complete_dma();},true});
      add({5,3,2,0},[this]{a=video.transient_memory().base_address();});
      add({5,3,2,0},[this]{video.transient_memory().set_source_current_address(a);});
      if(windows.version()==GameVersion::US) {
        add({3,3,0,0},[this]{a=0;});add({6,4,2,0},[this]{video.set_source_dma_transfer_flag(a);});
      }
      add({3,2,0,0});add({5,1,2,0},[this]{y=saved_y;});add({4,1,1,0});add({6,1,2,0});
    };
    // COPY2 entryB: its macro elides LDA0, retaining hidden A high7C.
    add({3,3,0,0},[this]{a=0x7e;});add(local_store,[this]{local(0x0e,a);});
    add({3,3,0,0},[this]{a=0x7c00;});add(local_store,[this]{local(0x10,a);});
    add({3,3,0,0},[this]{y=std::uint16_t(receipt.windows->source_text_identity());});
    add({3,3,0,0},[this]{x=0x700;});add({3,2,0,0});add({8,4,3,0});
    add({3,2,0,0});add({5,3,2,0},[this]{mode_word(a);});
    add({5,3,2,0},[this]{size_word(x);});add({5,3,2,0},[this]{source_low(y);});
    add(local_load,[this]{a=local(0x0e);});add({5,3,2,0},[this]{source_bank_word(a);});
    add(local_load,[this]{a=local(0x10);});add({5,3,2,0},[this]{destination_word(a);});
    common_before();copy_body();common_after();
    // COPY1 normal entry; LDA00 is M8 and retains the00 high of00C4.
    add({3,3,0,0},[this]{copy=1;a=std::uint16_t(receipt.windows->source_tail_identity());});
    add(local_store,[this]{local(0x0e,a);});
    add({3,3,0,0},[this]{a=std::uint16_t(receipt.windows->source_tail_identity()>>16);});
    add(local_store,[this]{local(0x10,a);});
    add({3,3,0,0},[this]{y=0x7f80;});add({3,3,0,0},[this]{x=0x40;});
    add({3,2,0,0});add({2,2,0,0},[this]{a&=0xff00;});add({8,4,3,0});
    add({3,2,0,0});add({5,3,2,0},[this]{mode_word(a);});add({5,3,2,0},[this]{size_word(x);});
    add(local_load,[this]{a=local(0x0e);});add({5,3,2,0},[this]{source_low(a);});
    add(local_load,[this]{a=local(0x10);});add({5,3,2,0},[this]{source_bank_word(a);});
    add({5,3,2,0},[this]{destination_word(y);});add({3,3,0,0});
    common_before();copy_body();common_after();
    add({5,1,2,0},[this]{d=context.direct_page;});add({6,1,3,0});
  }
  std::uint16_t local(unsigned offset) const {
    const unsigned at=unsigned(std::uint16_t(d+offset))-0x1d00;
    require(at<255,"Source window local read left its exact declared C-stack page");
    return std::uint16_t(entry.page_[at]|(unsigned(entry.page_[at+1])<<8));
  }
  void local(unsigned offset,std::uint16_t value) {
    const unsigned at=unsigned(std::uint16_t(d+offset))-0x1d00;
    require(at<255,"Source window local store left its exact declared C-stack page");
    entry.page_[at]=std::uint8_t(value);entry.page_[at+1]=std::uint8_t(value>>8);
  }
  battle::PsiTransfer parameters() const {return video.source_copy_parameters();}
  void mode_word(std::uint16_t value) {
    auto p=parameters();p.mode=std::uint8_t(value);
    p.byte_count=std::uint16_t((p.byte_count&0xff00)|(value>>8));video.set_source_copy_parameters(p);
  }
  void size_word(std::uint16_t value) {auto p=parameters();p.byte_count=value;video.set_source_copy_parameters(p);}
  void source_low(std::uint16_t value) {auto p=parameters();p.source_offset=value;video.set_source_copy_parameters(p);}
  void source_bank_word(std::uint16_t value) {
    auto p=parameters();p.source_identity=std::uint32_t(std::uint8_t(value))<<16;
    p.destination=std::uint16_t((p.destination&0xff00)|(value>>8));video.set_source_copy_parameters(p);
  }
  void destination_word(std::uint16_t value) {auto p=parameters();p.destination=value;video.set_source_copy_parameters(p);}
  void dma_word(unsigned at,std::uint16_t value) {
    peripherals.write_source_dma_register(1,at,std::uint8_t(value));
    peripherals.write_source_dma_register(1,at+1,std::uint8_t(value>>8));
  }
  battle::PsiTransfer latched_transfer() const {
    const auto &dma=peripherals.dma(1);
    require(x==2&&dma[0]==1&&dma[1]==0x18&&video.source_vmain()==0x80,
        "Source window MDMA lost its actual channel1 table/setup selection");
    const auto &windows=*receipt.windows;
    const auto identity=copy?windows.source_tail_identity():windows.source_text_identity();
    const auto low=std::uint16_t(dma[2]|(unsigned(dma[3])<<8));
    const auto count=std::uint16_t(dma[5]|(unsigned(dma[6])<<8));
    const auto span=copy?std::span<const std::uint8_t>(windows.source_tail()):std::span<const std::uint8_t>(windows.source_text_tiles());
    require(dma[4]==std::uint8_t(identity>>16)&&low>=std::uint16_t(identity)&&
        count==(copy?64:1792)&&low==std::uint16_t(identity)&&video.source_vmadd()==(copy?0x7f80:0x7c00),
        "Source window MDMA has an unrepresented latched source/extent/destination");
    const auto offset=std::uint16_t(low-std::uint16_t(identity));
    require(unsigned(offset)+count<=span.size(),"Source window DMA leaves its actual retained source extent");
    return {battle::PsiTransferKind::Vram,offset,count,video.source_vmadd(),0,span,identity};
  }
  void complete_dma() {
    const auto transfer=latched_transfer();video.complete_source_dma(transfer);
    if(copy)receipt.windows->publish_source_tail();else receipt.windows->publish_source_scene();
  }
  void step() {
    require(phase<atoms.size(),"Source window left its literal helper continuation");
    const auto &atom=atoms[phase];
    if(atom.dma) {
      work.retire_dma_work(atom.cost,copy?64:1792,atom.effect);
    } else work.retire_source_work(atom.cost,atom.effect);
    ++retired;++phase;
    if(phase==atoms.size())receipt.completed=true;
  }
};
SourceWindowPublication::SourceWindowPublication(SourceWorkClock &work,
    std::shared_ptr<SourceWindowPublicationReceipt> receipt,SourceWindowPublicationContext context,SourceWindowPublicationCall call)
    :receipt_(std::move(receipt)),execution_(std::make_unique<Execution>(work,*receipt_,context,call)) {
  receipt_->release=[host=receipt_->windows,weak=execution_->window_lifetime,identity=receipt_.get()] {
    if(!weak.expired())host->release_source_publication(identity);
  };
  receipt_->windows->claim_source_publication(receipt_.get());call.entry->claimed_=true;
}
SourceWindowPublication::~SourceWindowPublication() {
  if(receipt_->release)receipt_->release();
  if(receipt_->live&&!receipt_->consumed)receipt_->poison();
}
bool SourceWindowPublication::advance(unsigned budget) {
  require(receipt_->live&&!receipt_->consumed&&!receipt_->executing,"Source window lost its live single helper invocation");
  receipt_->executing=true;
  try {
    receipt_->validate();
    while(budget--&&!receipt_->completed) {receipt_->validate();execution_->step();}
    receipt_->executing=false;return receipt_->completed;
  } catch(...) {receipt_->executing=false;receipt_->poison();throw;}
}
bool SourceWindowPublication::complete() const noexcept {return receipt_->completed;}
std::uint64_t SourceWindowPublication::retired_instructions() const noexcept {return execution_->retired;}
}
namespace eb::native {
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_window_tick(
    story::SourceWorkClock &work,story::SourceWindowPublicationContext context) {
  story::SourceWindowPublication::validate_context(context);
  return begin_source_window_tick_impl(work,[&work,this](story::TickState &ticks,const battle::FrameDisplay &frames,
      dialogue::WindowHost &windows,const WorldDisplayFade &fade) {
    story::SourceWindowPublication::validate_owner(work,ticks,frames,windows,fade,scene());
    story::SourceWindowPublication::validate_host(windows);
  });
}
std::unique_ptr<story::SourceWindowPublication> WorldRuntime::Operation::begin_source_window_publication(
    story::SourceWorkClock &work,story::SourceWindowPublicationContext context,story::SourceWindowPublicationCall call) {
  return source_foreground_owner().begin_source_window_publication(work,context,call);
}
}
