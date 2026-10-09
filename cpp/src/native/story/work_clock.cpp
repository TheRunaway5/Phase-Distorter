#include "eb/native/story/work_clock.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/entities/graphics/object_display.hpp"
#include "eb/native/world_runtime.hpp"
#include <algorithm>
#include <limits>
#include <stdexcept>

namespace eb::native::story {
SourceWorkClock::SourceWorkClock(AudioFrameClock &physical, NativeAudio &audio,
    TickState &ticks, WorldRuntime &runtime,
    entities::graphics::ObjectDisplayState &objects,
    entities::graphics::ObjectDisplay &display, battle::FrameDisplay &frames,
    bool fast_rom)
    : physical_(physical), physical_lifetime_(physical.lifetime_), audio_(audio), ticks_(ticks), runtime_(runtime),
      objects_(objects), object_display_(display), object_display_lifetime_(display.lifetime_), frames_(frames), frame_display_lifetime_(frames.source_lifetime()),
      video_lifetime_(frames.video_transport().source_lifetime()), fast_rom_(fast_rom) {
  if (!physical.uses(ticks) || !runtime.uses(ticks) || &display.state() != &objects ||
      !frames.uses_object_source(display))
    throw std::invalid_argument("Source work requires the actual runtime/object publication owners");
  const auto count = physical.physical_frames();
  if (count > std::numeric_limits<std::uint64_t>::max() / (262 * 1364))
    throw std::invalid_argument("Source work physical epoch is too large");
  master_clocks_ = count * (262 * 1364) - (count / 2) * 4 + physical.phase();
  select_refresh_phase();
  runtime_.bind_source_work(*this,frames_.video_transport());
}
SourceWorkClock::~SourceWorkClock() {runtime_.clear_source_work(*this);}

unsigned SourceWorkClock::horizontal() const noexcept {
  const auto adjusted = physical_.phase() +
      ((physical_.physical_frames() & 1) && physical_.phase() >= 241 * 1364 - 4 ? 4 : 0);
  return adjusted % 1364;
}
unsigned SourceWorkClock::line_length() const noexcept {
  return (physical_.physical_frames() & 1) && physical_.phase() >= 240 * 1364 &&
      physical_.phase() < 241 * 1364 - 4 ? 1360 : 1364;
}
void SourceWorkClock::select_refresh_phase() {
  const auto start = master_clocks_ - horizontal();
  // RESET's first line starts with538; later scanlines use the actual absolute
  // eight-clock alignment implemented by the original peripheral model.
  refresh_clock_ = start == 0 ? 538 : unsigned(((start + 538) & ~std::uint64_t(7)) + 2 - start);
  refresh_done_ = horizontal() >= refresh_clock_;
}
void SourceWorkClock::require_healthy() const {
  if (failed() || runtime_.failed())
    throw std::logic_error("Source work clock has unfinished failed work");
}
unsigned SourceWorkClock::next_quantum(unsigned requested) const {
  require_healthy();
  unsigned distance = line_length() - horizontal();
  if (!refresh_done_) distance = std::min(distance, refresh_clock_ - horizontal());
  return std::min(physical_.next_quantum(requested), distance);
}
void SourceWorkClock::elapsed(unsigned clocks) {
  require_healthy();
  if (!clocks || clocks > next_quantum(clocks))
    throw std::logic_error("Source work crossed a physical work quantum");
  const bool line_end = clocks == line_length() - horizontal();
  const bool refresh = !refresh_done_ && clocks == refresh_clock_ - horizontal();
  master_clocks_ += clocks;
  if (refresh) { refresh_done_ = true; ++refresh_events_; }
  physical_.elapsed(clocks);
  if (line_end) select_refresh_phase();
}
void SourceWorkClock::nmi_enabled(bool enabled) {
  require_healthy(); physical_.nmi_enabled(enabled);
}
void SourceWorkClock::request_nmi() {
  require_healthy();
  if (in_interrupt_) {
    failed_ = true;
    throw std::logic_error("Recursive source interrupt work is not represented");
  }
  // The source peripheral retains one pending NMI, including work that spans
  // multiple frames before its next arbitration point.
  pending_nmi_ = true;
}
void SourceWorkClock::bind_interrupt_work(SourceInterruptWork &work) {
  require_healthy();
  if (in_atom_ || in_interrupt_ || pending_nmi_ ||
      (interrupt_work_ && interrupt_work_ != &work) || (!work.healthy() || !work.uses(runtime_, audio_)))
    throw std::logic_error("Source interrupt work requires its actual idle owners");
  interrupt_work_ = &work;
  interrupt_lifetime_ = work.lifetime_;
}
bool SourceWorkClock::uses(const ActorWorld &actors,const battle::PsiDisplayState &video) const noexcept {
  return !frame_display_lifetime_.expired()&&!video_lifetime_.expired()&&runtime_.uses(actors) && frames_.uses(video);
}
bool SourceWorkClock::uses_video(const battle::PsiDisplayState &video) const noexcept {
  return !frame_display_lifetime_.expired()&&!video_lifetime_.expired()&&frames_.uses(video);
}
bool SourceWorkClock::uses_clock(const AudioFrameClock &physical,const TickState &ticks) const noexcept {
  return !physical_lifetime_.expired() && &physical_==&physical && &ticks_==&ticks &&
      physical.uses(ticks) && audio_.uses_clock(*this);
}
void SourceWorkClock::service_interrupt() {
  require_healthy();
  if (!pending_nmi_ || in_interrupt_) return;
  if (!has_interrupt_work()) {
    failed_ = true;
    throw std::logic_error("Source NMI work is unowned at instruction retirement");
  }
  pending_nmi_ = false; in_interrupt_ = true;
  try { interrupt_work_->execute(*this); }
  catch (...) { pending_nmi_=true; in_interrupt_ = false; failed_ = true; throw; }
  in_interrupt_ = false;++completed_interrupts_;
}
void SourceWorkClock::charge(unsigned clocks) {
  // Matches advance_master_clocks_with_refresh: even a refresh reached on
  // the last useful work clock adds its40-clock stall before retirement.
  std::uint64_t remaining = clocks;
  while (remaining) {
    const auto n = next_quantum(unsigned(std::min<std::uint64_t>(remaining,
        std::numeric_limits<unsigned>::max())));
    const auto before = refresh_events_;
    audio_.advance_master_clocks(n);
    remaining -= n;
    if (refresh_events_ != before) { ++refresh_pauses_; remaining += 40; }
  }
}
void SourceWorkClock::enable_source_math(PeripheralState &peripherals) {
  require_healthy();
  if(in_atom_||in_interrupt_||frames_.peripherals()!=&peripherals||
      !peripherals.uses(physical_)||!physical_.uses_peripherals(peripherals)||
      (math_peripherals_&&math_peripherals_!=&peripherals))
    throw std::logic_error("Source math requires its exact healthy physical/peripheral owner");
  math_peripherals_=&peripherals;math_lifetime_=peripherals.source_lifetime();
}
void SourceWorkClock::retire_source_math(unsigned clocks) {
  if(!math_peripherals_)return;
  if(math_lifetime_.expired()||frames_.peripherals()!=math_peripherals_||
      !math_peripherals_->uses(physical_)||!physical_.uses_peripherals(*math_peripherals_))
    throw std::logic_error("Source math lost its actual retained physical/peripheral owner");
  // Exactly once per useful instruction, before refresh/raster charge. Physical
  // quantum chunks and refresh stalls do not create more math retirements.
  math_peripherals_->retire_source_math(clocks);
}
void SourceWorkClock::retire_source_work(SourceWorkCost cost,
                                        const std::function<void()> &effect) {
  require_healthy();
  const auto clocks = cost.master_clocks(fast_rom_);
  if (in_atom_) throw std::logic_error("Source work atom is recursive");
  service_interrupt(); in_atom_ = true;
  try {
    if (effect) effect();
    retire_source_math(clocks);
    charge(clocks);
  } catch (...) { in_atom_ = false; failed_ = true; throw; }
  in_atom_ = false; service_interrupt();
}
void SourceWorkClock::retire_dma_work(SourceWorkCost cost,unsigned bytes,
                                     const std::function<void()> &effect) {
  require_healthy();
  const auto clocks = cost.master_clocks(fast_rom_);
  if (!bytes || bytes > 65536 || in_atom_ ||
      std::uint64_t(clocks) + 16 + std::uint64_t(bytes) * 8 > std::numeric_limits<unsigned>::max())
    throw std::invalid_argument("Source DMA requires its actual bounded single-channel transfer");
  service_interrupt();
  retire_source_math(0); // read-only affinity validation before DMA effects
  if(math_peripherals_&&math_peripherals_->source_math_state().remaining_cpu_cycles)
    throw std::logic_error("Source DMA has unrepresented pending math debt");
  in_atom_ = true;
  try {
    if (effect) effect();
    // Source applies the complete payload before instruction/DMA clocks and
    // performs no interrupt arbitration between the instruction and its debt.
    // In the admitted RAND/default-NMI scope math is complete at hardware
    // entry before any DMA. General math/DMA overlap is deliberately gated.
    retire_source_math(clocks);
    charge(clocks); charge(16 + bytes * 8);
  } catch (...) { in_atom_ = false; failed_ = true; throw; }
  in_atom_ = false; service_interrupt();
}
void SourceWorkClock::publish_interrupt() {
  require_healthy();
  if (!in_interrupt_ || in_atom_ || !has_interrupt_work() ||
      !(ticks_.effective_interrupt_mask() & 0x80))
    throw std::logic_error("Source publication requires real retired interrupt work");
  runtime_.interrupt_publication(); audio_.publication();
}

void SourceWorkClock::clear_objects() {
  require_healthy();
  if (in_atom_ || in_interrupt_) throw std::logic_error("OAM_CLEAR requires native caller work");
  if(object_display_.source_generation_ &&
      object_display_.source_generation_->phase!=entities::graphics::ObjectDisplay::SourceGeneration::Phase::Cleared &&
      object_display_.source_generation_->phase!=entities::graphics::ObjectDisplay::SourceGeneration::Phase::Emitted)
    throw std::logic_error("OAM_CLEAR cannot revoke an active owned source descriptor");
  service_interrupt();
  const auto selected = frames_.next_buffer_id();
  if (selected < 1 || selected > 2 ||
      (frames_.pending() && frames_.pending_display_id() == selected))
    throw std::logic_error("OAM_CLEAR cannot overwrite its pending upload buffer");
  object_display_.source_clear_started();
  auto &frame = objects_.buffers[selected - 1];
  const bool jp = audio_.version() == GameVersion::JP;
  auto work = [this](unsigned cycles, unsigned rom, unsigned slow = 0) {
    retire_source_work({cycles, rom, slow, 0});
  };
  // JSL and the exact regional OAM_CLEAR body. Builder cursors are derived by
  // ObjectEmitter from this same buffer; no compatibility CPU/bus is executed.
  work(8, 4, 3);
  if (jp) work(3, 1, 1); // PHP
  work(3, 2); work(3, 2); work(3, 3); // SEP, REP, LDX zero
  for (unsigned priority = 0; priority != 4; ++priority) {
    retire_source_work({5, 3, 2, 0}, [&, priority] {
      const auto offset = 4 + priority * 258 + 256;
      objects_.working[offset] = objects_.working[offset + 1] = 0;
    });
  }
  work(5, 3, 2); work(2, 1); // LDX actual next buffer, DEX
  work(selected == 1 ? 3 : 2, 2); // expanded BNEL's actual BEQ
  if (selected == 2) work(3, 3); // JMP to the second buffer body
  for (unsigned cursor = 0; cursor != 3; ++cursor) {
    const auto base=std::uint16_t(selected==1?0x500:0x800);
    work(3, 3);
    retire_source_work({5,3,2,0},[&,cursor,base] {
      if(cursor==0)objects_.builder.address=base;
      else if(cursor==1)objects_.builder.end_address=std::uint16_t(base+512);
      else objects_.builder.high_address=std::uint16_t(base+512);
    });
  }
  work(2, 2);
  retire_source_work({4,3,1,0},[&]{objects_.builder.high_buffer=0x80;});
  work(2, 2); // LDAE0
  work(4, 1, 2); work(5, 3, 2); work(5, 1, 2); // PHD, PEA, PLD
  for (unsigned object = 0; object != 128; ++object) {
    if (object == 64) { work(5, 3, 2); work(5, 1, 2); }
    retire_source_work({3, 2, 1, 0}, [&, object] {
      frame.bytes[object * 4 + 1] = 0xe0;
      frame.identities[object] = 0; frame.anchors[object] = {};
    });
  }
  work(5, 1, 2); // PLD
  if (jp) work(4, 1, 1); else work(3, 2); // PLP / REP
  work(6, 1, 3); // RTL
  object_display_.source_clear_completed(selected);
}
} // namespace eb::native::story
