#pragma once

#include "eb/native/story/audio_clock.hpp"
#include "eb/native/story/source_work.hpp"
#include <memory>

namespace eb::native {
class WorldRuntime;
class PeripheralState;
namespace battle { class FrameDisplay; struct PaletteBankState; }
namespace dialogue {class WindowPalettePublication;}
namespace entities::graphics { class ObjectDisplay; struct ObjectDisplayState; }
namespace story {
class SourceWorkClock;
// A real interrupt owner must describe its entry, actual DMA/callback work,
// publication point and return. Absence deliberately leaves unmasked work
// unsupported, rather than supplying a constant invented NMI duration.
class SourceInterruptWork {
public:
  virtual ~SourceInterruptWork() = default;
  SourceInterruptWork(const SourceInterruptWork &) = delete;
  SourceInterruptWork &operator=(const SourceInterruptWork &) = delete;
  SourceInterruptWork(SourceInterruptWork &&) = delete;
  SourceInterruptWork &operator=(SourceInterruptWork &&) = delete;
  virtual bool uses(const WorldRuntime &, const NativeAudio &) const noexcept = 0;
  virtual bool healthy() const noexcept {return true;}
  virtual bool uses_palette_transport(const battle::PaletteBankState&) const noexcept {return false;}
  virtual bool uses_window_palette(const dialogue::WindowPalettePublication&) const noexcept {return false;}
  virtual void execute(SourceWorkClock &) = 0;

protected:
  SourceInterruptWork() = default;
private:
  friend class SourceWorkClock;
  struct Lifetime {};
  // Only this actual instance owns the token. Borrowers never extend the
  // interrupt object's lifetime or reuse another instance's binding.
  std::shared_ptr<const Lifetime> lifetime_ = std::make_shared<Lifetime>();
};

// One adapter over the real peripheral/audio timeline. Callers bind NativeAudio
// to this owner once, and route AudioFrameClock's actual NMI hook to request_nmi.
// An effect happens before its literal elapsed work; an arriving NMI is serviced
// at retirement, before the next effect. WRAM refresh follows the original
// source oracle's absolute master-clock phase, including its40-clock pause.
class SourceWorkClock final : public NativeAudioClock, public SourceWorkService {
public:
  SourceWorkClock(AudioFrameClock &, NativeAudio &, TickState &, WorldRuntime &,
                  entities::graphics::ObjectDisplayState &,
                  entities::graphics::ObjectDisplay &, battle::FrameDisplay &,
                  bool fast_rom = true);
  ~SourceWorkClock();
  SourceWorkClock(const SourceWorkClock &)=delete;
  SourceWorkClock &operator=(const SourceWorkClock &)=delete;
  unsigned next_quantum(unsigned requested) const override;
  void elapsed(unsigned master_clocks) override;
  void nmi_enabled(bool) override;
  void request_nmi();
  void bind_interrupt_work(SourceInterruptWork &);
  bool uses(const ActorWorld &,const battle::PsiDisplayState &) const noexcept override;
  bool uses_video(const battle::PsiDisplayState &) const noexcept;
  bool uses_clock(const AudioFrameClock &, const TickState &) const noexcept;
  bool has_interrupt_work() const noexcept { return interrupt_work_ && !interrupt_lifetime_.expired() && interrupt_work_->healthy(); }
  bool uses_palette_transport(const battle::PaletteBankState &palette) const noexcept {
    return has_interrupt_work()&&interrupt_work_->uses_palette_transport(palette);
  }
  bool uses_window_palette(const dialogue::WindowPalettePublication &publisher) const noexcept {
    return has_interrupt_work()&&interrupt_work_->uses_window_palette(publisher);
  }
  // Literal native work atom: use an empty effect for source control-flow work.
  void retire_source_work(SourceWorkCost, const std::function<void()> &effect = {}) override;
  void retire_dma_work(SourceWorkCost, unsigned effective_bytes,
                       const std::function<void()> &effect = {}) override;
  // Only the bound interrupt work can publish through these actual owners.
  void publish_interrupt();
  // Complete OAM_CLEAR including its genuine far-call entry/return. The chosen
  // working buffer must differ from the pending physical upload buffer.
  void clear_objects() override;
  std::uint64_t master_clocks() const noexcept { return master_clocks_; }
  std::uint64_t refresh_pauses() const noexcept { return refresh_pauses_; }
  bool failed() const noexcept override {
    return failed_ || copy_counter_failed() || object_display_lifetime_.expired() || physical_lifetime_.expired() ||
        frame_display_lifetime_.expired() || video_lifetime_.expired() ||
        (interrupt_work_ && (interrupt_lifetime_.expired() || !interrupt_work_->healthy())) ||
        (math_peripherals_ && math_lifetime_.expired()) || audio_.failed();
  }
  std::uint64_t completed_source_interrupts() const noexcept override {return completed_interrupts_;}
  bool pending_nmi() const noexcept { return pending_nmi_; }
  unsigned physical_phase() const noexcept { return physical_.phase(); }
  std::uint64_t physical_frames() const noexcept { return physical_.physical_frames(); }
  bool fast_rom() const noexcept { return fast_rom_; }
private:
  friend class SourceScreenUpdate;
  friend class SourceObjectPreparation;
  friend class SourceActorDraw;
  friend class SourceGlobalDraw;
  friend class SourceForegroundWork;
  friend class SourceWindowPublication;
  friend class SourceRandom;
  friend class SourceMeterRoller;
  friend class SourceMeterTiles;
  friend class SourceMeterStatus;
  void enable_source_math(PeripheralState&);
  void retire_source_math(unsigned useful_master_clocks);
  void require_healthy() const;
  void service_interrupt();
  void charge(unsigned);
  void select_refresh_phase();
  unsigned horizontal() const noexcept;
  unsigned line_length() const noexcept;
  AudioFrameClock &physical_;
  std::weak_ptr<const AudioFrameClock::Lifetime> physical_lifetime_;
  NativeAudio &audio_;
  TickState &ticks_;
  WorldRuntime &runtime_;
  entities::graphics::ObjectDisplayState &objects_;
  entities::graphics::ObjectDisplay &object_display_;
  std::weak_ptr<const void> object_display_lifetime_;
  battle::FrameDisplay &frames_;
  std::weak_ptr<const void> frame_display_lifetime_,video_lifetime_;
  PeripheralState *math_peripherals_{};
  std::weak_ptr<const void> math_lifetime_;
  SourceInterruptWork *interrupt_work_{};
  std::weak_ptr<const SourceInterruptWork::Lifetime> interrupt_lifetime_;
  std::uint64_t master_clocks_{}, refresh_events_{}, refresh_pauses_{},completed_interrupts_{};
  unsigned refresh_clock_{};
  bool fast_rom_{}, refresh_done_{}, pending_nmi_{}, in_atom_{}, in_interrupt_{}, failed_{};
};
} // namespace story
} // namespace eb::native
