#include "eb/native/story/source_nmi.hpp"
#include "eb/native/battle/palette_effects.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/world_runtime.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/world_startup.hpp"
#include <limits>
#include <stdexcept>
#include <vector>

namespace eb::native::story {
namespace {
enum class Effect { None, ReadFlag, Pending, Counter, Oam, Palette, Queue,
                    Publish, Sound, SoundAdvance, Callback, Heap, TransferFlag, TimerLow, TimerHigh };
struct Atom { SourceWorkCost cost; unsigned dma{}; Effect effect{}; unsigned argument{}; };
// The native vector first executes a bank00 long jump. The actual handler
// then runs from C0; MEMSEL controls its code fetches, while WRAM stays8-clock.
struct Plan {
  std::vector<Atom> atoms;
  void add(unsigned cycles,unsigned code,unsigned wram=0,Effect effect=Effect::None,
           unsigned argument=0,unsigned dma=0) {
    atoms.push_back({{cycles,code,wram,0},dma,effect,argument});
  }
  void branch(bool taken) {add(taken?3:2,2);}
};
}
SourceNmiWork::SourceNmiWork(WorldRuntime &runtime,NativeAudio &audio,TickState &ticks,
    WorldSessionState &session,battle::FrameDisplay &frames,battle::PaletteBankState &palette,
    battle::PsiDisplayState &video,const battle::PsiScratch &scratch,WorldDisplayFade &fade,
    WorldScenePresentation &presentation,PeripheralState &peripherals,SourceInterruptContext context)
    :runtime_(runtime),audio_(audio),ticks_(ticks),session_(session),frames_(frames),palette_(palette),
     palette_lifetime_(palette.source_lifetime()),publisher_lifetime_(presentation.source_lifetime()),
     video_(video),scratch_(scratch),fade_(fade),presentation_(presentation),peripherals_(peripherals),context_(context) {
  if(!runtime.uses(ticks) || presentation.frame_display()!=&frames ||
      presentation.display_fade()!=&fade || !presentation.uses_palette_transport(palette) ||
      !presentation.uses_video_transport(video,scratch) || frames.peripherals()!=&peripherals)
    throw std::invalid_argument("Source NMI requires the actual shared publication transports");
}
bool SourceNmiWork::uses(const WorldRuntime &runtime,const NativeAudio &audio) const noexcept {
  return healthy()&&&runtime==&runtime_ && &audio==&audio_;
}
bool SourceNmiWork::uses_palette_transport(const battle::PaletteBankState &palette) const noexcept {
  return healthy()&&&palette==&palette_&&presentation_.uses_palette_transport(palette);
}
bool SourceNmiWork::uses_window_palette(const dialogue::WindowPalettePublication &publisher) const noexcept {
  return healthy()&&&publisher==static_cast<const dialogue::WindowPalettePublication*>(&presentation_)&&
      runtime_.scene().publication()==static_cast<const ScenePublication*>(&presentation_);
}
void SourceNmiWork::bind_callback_work(SourceCallbackWork &callback) {
  if(!healthy())throw std::logic_error("Source NMI palette/publisher owner expired");
  if(runtime_.interrupt_callback_active() || !callback.uses(runtime_))
    throw std::logic_error("Source NMI callback requires its actual installed native owner");
  callback_=&callback;
}
void SourceNmiWork::execute(SourceWorkClock &clock) {
  if(!healthy())throw std::logic_error("Source NMI palette/publisher owner expired");
  // Everything that can reject an unsupported entry is checked before the
  // actual Scene is pinned or any shared effect/read occurs.
  if(!context_.native_mode || !context_.upper_rom_fetch || !context_.low_wram_stack ||
      !(ticks_.effective_interrupt_mask()&0x80) || (ticks_.effective_interrupt_mask()&0x30) ||
      runtime_.interrupt_callback_active())
    throw std::logic_error("Source NMI entry/context or recursive/IRQ work is not represented");
  const bool default_callback=runtime_.uses_default_interrupt_callback();
  if(!default_callback && (!callback_ || !callback_->uses(runtime_)))
    throw std::logic_error("Source NMI callback work is unowned");
  const unsigned palette=palette_.upload_mode,pending=frames_.pending_display_id();
  if(pending>2 || (palette && palette!=8 && palette!=16 && palette!=24))
    throw std::logic_error("Source NMI DMA table alias is not represented");
  const auto transfers=video_.pending();
  const std::vector<battle::PsiTransfer> queue(transfers.begin(),transfers.end());
  const auto fade=fade_.state();
  const bool fade_due=fade.step && (std::uint8_t(fade.remaining-1)&0x80);
  const auto sum=std::uint8_t((fade.brightness&15)+fade.step);
  const bool negative=fade_due && (sum&0x80);
  const bool ceiling=fade_due && !negative && sum>=16;
  const bool blank=fade_due ? negative : bool(fade.brightness&0x80);
  const bool sound=audio_.sound_queue_start()!=audio_.sound_queue_end();
  const bool alternate=video_.transient_memory().selected_bank()==0;
  const bool timer_carry=std::uint16_t(session_.elapsed_timer)==0xffff;
  Plan p;
  // Hardware entry is outside bank00: discarded upper-ROM fetch, four native
  // stack writes, two vector reads. No compatibility register file is owned.
  p.atoms.push_back({{8,1,6,0},0,Effect::None,0});
  p.atoms.push_back({{4,0,4,0},0,Effect::None,0}); // Actual00:8147 JML C0:NMI.
  p.add(3,1,1);p.add(3,2); // PHP / REP30
  for(unsigned i=0;i<3;++i)p.add(4,1,2); // PHA / PHX / PHY16
  p.add(4,1,2);p.add(5,3,2);p.add(5,1,2); // PHD / PEA0 / PLD
  p.add(3,1,1);p.add(5,3,2);p.add(4,1,1);p.add(4,1,1);p.add(3,2);
  p.add(4,3,0,Effect::ReadFlag);p.add(4,3);p.add(2,2);p.add(4,3);
  p.add(5,2,2,Effect::Pending);p.add(5,2,2,Effect::Counter);
  p.add(3,2);p.add(3,2);p.add(3,2,1);p.branch(!pending);
  if(pending) {
    p.add(2,2);p.add(5,3);p.add(4,3);p.add(4,3);p.add(2,2);p.add(4,3);
    p.add(3,3);p.add(3,2,1);p.add(2,1);p.branch(pending==1);
    if(pending==2)p.add(3,3);
    p.add(5,3);p.add(3,3);p.add(5,3);p.add(2,2);
    p.add(4,3,0,Effect::Oam,pending,544);
    p.add(2,1);p.add(4,2,2);p.add(4,2,2);
  }
  p.add(4,3,1);p.branch(!palette);
  if(palette) {
    p.add(5,3,2);p.add(5,3);p.add(4,3,1);p.add(4,3);
    p.add(3,3);p.add(5,3);p.add(2,2);p.add(4,3);p.add(4,3,1);
    p.add(5,3,2);p.add(5,3);p.add(2,2);
    p.add(4,3,0,Effect::Palette,palette,palette==24?512:256);
    p.add(2,1);p.add(4,2,2);p.add(4,2,2);
  }
  p.add(3,2);p.add(3,2,1);p.branch(!fade.step);
  if(fade.step) {
    p.add(5,2,2);p.branch(!fade_due);
    if(fade_due) {
      p.add(3,2,1);p.add(3,2,1);p.add(3,2,1);p.add(2,2);p.add(2,1);p.add(3,2,1);
      p.branch(!negative);
      if(negative) {p.add(4,3,1);p.add(2,2);p.add(3,2);} // STZ absolute HDMAEN_MIRROR.
      else {p.add(2,2);p.branch(!ceiling);if(ceiling)p.add(2,2);}
      if(negative||ceiling)p.add(3,2,1);
      p.add(3,2,1);
    }
  }
  p.add(3,2);p.add(3,2,1);p.add(4,3);p.add(3,2,1);p.add(4,3);
  p.add(4,2,2);p.add(5,3);p.add(4,2,2);p.add(3,3);p.add(5,3);
  p.add(3,2);p.add(3,2);p.add(3,2,1);p.add(3,2);
  p.add(3,2,1);p.branch(!queue.empty()); // First CPX/BNE after BRA
  for(unsigned index=0;index<queue.size();++index) {
    const auto &t=queue[index];
    if(t.mode>15 || t.mode%3 || t.kind!=battle::PsiTransferKind::Vram)
      throw std::logic_error("Source NMI queue requires authored raw DMA descriptors");
    p.add(4,3,1);p.add(5,3,2);p.add(5,3);p.add(5,3,2);p.add(5,3);
    p.add(5,3,2);p.add(5,3);p.add(5,3,2);p.add(5,3);p.add(4,3,1);p.add(4,3);
    p.add(5,3,2);p.add(5,3);p.add(2,1);p.add(2,1);p.add(3,3);p.add(2,1);p.add(2,2);
    p.add(4,3,0,Effect::Queue,index,t.byte_count?t.byte_count:65536);
    p.add(3,2,1);p.branch(index+1<queue.size());
  }
  p.add(3,2,1);p.add(3,2);p.add(3,2,1);
  p.branch(bool(pending)); // BEQL expands BNE/JMP, preserving source bytes.
  if(!pending)p.add(3,3);
  else {
    p.add(2,1);p.branch(pending!=1);
    for(unsigned i=0;i<16;++i){p.add(3,2,1);p.add(4,3);}
    if(pending==1)p.add(3,2);
    else {p.add(3,2);p.add(5,3,2);p.add(5,3,2);p.add(5,3,2);p.add(5,3,2);}
  }
  p.add(2,2);p.add(3,2,1,Effect::Publish);p.add(3,2,1);p.branch(blank);
  if(!blank)for(unsigned i=0;i<3;++i){p.add(3,2,1);p.add(4,3);}
  p.add(6,3,2); // JSR PROCESS_SFX_QUEUE
  p.add(3,2);p.add(3,2,1);p.add(3,2,1);p.branch(!sound);
  if(sound) {
    p.add(4,3,1);p.add(4,3,0,Effect::Sound);p.add(2,1);p.add(2,1);p.add(2,2);p.add(3,2,1,Effect::SoundAdvance);
  }
  p.add(3,2);p.add(6,1,2); // REP30 / RTS
  p.add(3,2);p.add(4,2,2);p.add(5,3,2);p.branch(false);
  p.add(8,3,4);p.add(3,1,1);p.add(5,3,2);p.add(4,1,1);p.add(4,1,1);
  p.add(4,1,2);p.add(5,3,2);p.add(5,1,2);p.add(6,3,2);p.add(5,3,2);
  // The exact installed callback body is kept as an explicit atom boundary.
  p.atoms.push_back({{},0,Effect::Callback,0}); // No cost; body is separately owned.
  p.add(5,1,2);p.add(4,1,1);p.add(5,3,2);
  p.add(3,3);p.add(4,2,2);p.branch(!alternate);if(alternate)p.add(3,3);
  p.add(4,2,2,Effect::Heap);p.add(4,2,2);p.add(3,3);p.add(6,4,2,Effect::TransferFlag);
  p.add(4,2,2);p.add(7,2,4,Effect::TimerLow);p.branch(!timer_carry);
  if(timer_carry)p.add(7,2,4,Effect::TimerHigh);
  p.add(4,1,1);p.add(5,1,2);p.add(5,1,2);p.add(5,1,2);p.add(5,1,2);p.add(4,1,1);p.add(7,1,4);

  std::uint64_t maximum=!default_callback?callback_->maximum_master_clocks(clock.fast_rom(),std::uint8_t(ticks_.frame_counter+1)):
      SourceWorkCost{6,1,2,0}.master_clocks(clock.fast_rom());
  for(const auto &atom:p.atoms)if(atom.effect!=Effect::Callback)
    maximum+=atom.cost.master_clocks(clock.fast_rom())+(atom.dma?16+std::uint64_t(atom.dma)*8:0);
  // A refresh can add40 once per scanline. Bounding with the shortest line
  // gives an exact conservative admission test, never a fitted work delay.
  maximum+=40*((maximum+1319)/1320+1);
  const unsigned end=262*1364-(clock.physical_frames()&1?4:0);
  const auto phase=clock.physical_phase();
  const bool visible_fit=phase>=225*1364 && maximum<end-phase;
  const auto displayed=fade_.displayed_brightness();
  const bool retained_blank=displayed && (*displayed&0x80) && (fade.brightness&0x80) &&
      (fade_.preview_next_frame().state().brightness&0x80) && !frames_.displayed_hdma_enable;
  const bool blank_fit=retained_blank && maximum<(phase<225*1364?225*1364-phase:end-phase);
  if(!visible_fit && !blank_fit)
    throw std::logic_error("Source NMI display work exceeds its VBlank or established forced-blank phase");

  auto publication=runtime_.begin_source_interrupt();
  for(const auto &atom:p.atoms) {
    if(atom.effect==Effect::Callback) {
      if(!default_callback)callback_->execute(clock,[&]{publication->callback();});
      else clock.retire_source_work({6,1,2,0},[&]{publication->callback();});
      continue;
    }
    const auto effect=[&] {
      switch(atom.effect) {
      case Effect::ReadFlag:(void)peripherals_.read(0x4210,0);break;
      case Effect::Pending:publication->increment_pending();break;
      case Effect::Counter:publication->increment_counter();break;
      case Effect::Oam:peripherals_.publish_oam(std::uint8_t(atom.argument));break;
      case Effect::Palette:peripherals_.publish_palette(std::uint8_t(atom.argument));break;
      case Effect::Queue:video_.complete_source_dma(scratch_,queue[atom.argument],0);break;
      case Effect::Publish:publication->publish();break;
      case Effect::Sound:audio_.source_write_sound_port();break;
      case Effect::SoundAdvance:audio_.source_advance_sound_queue();break;
      case Effect::Heap:publication->rotate_heap();break;
      case Effect::TransferFlag:video_.set_source_dma_transfer_flag(0);break;
      case Effect::TimerLow:session_.elapsed_timer=(session_.elapsed_timer&0xffff0000u)|std::uint16_t(session_.elapsed_timer+1);break;
      case Effect::TimerHigh:session_.elapsed_timer+=0x10000;break;
      default:break;
      }
    };
    if(atom.dma)clock.retire_dma_work(atom.cost,atom.dma,effect);
    else clock.retire_source_work(atom.cost,effect);
  }
  publication->complete();++completed_;
}
} // namespace eb::native::story
