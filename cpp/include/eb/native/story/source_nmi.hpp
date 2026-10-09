#pragma once
#include "eb/native/story/work_clock.hpp"
#include <cstdint>

namespace eb::native {
class WorldDisplayFade;
class WorldScenePresentation;
struct WorldSessionState;
class PeripheralState;
namespace battle { struct PaletteBankState; struct PsiScratch; }
namespace story {
// These are typed native source-entry guarantees, not retained compatibility
// registers. A caller must establish all three before enabling this service.
struct SourceInterruptContext {
  bool native_mode{}, upper_rom_fetch{}, low_wram_stack{};
};
// Timed C0-bank body after EXECUTE_IRQ_CALLBACK's real indirect JMP, including its
// source return. The adapter must call the real callback exactly once, at its
// authored effect phase. Unknown state must reject in the read-only bound.
class SourceCallbackWork {
public:
  virtual ~SourceCallbackWork()=default;
  virtual bool uses(const WorldRuntime &) const noexcept=0;
  virtual unsigned maximum_master_clocks(bool fast_rom,std::uint8_t published_frame_counter) const=0;
  virtual void execute(SourceWorkClock &,const std::function<void()> &actual_callback)=0;
};
// Complete native-mode NMI within a checked VBlank, or established hardware
// forced blank with no unblank/period crossing. Costs follow actual variable OAM/palette/queue/fade/SFX/callback/heap/
// timer work. Ordinary capture stays immutable and performs no actor/input.
class SourceNmiWork final : public SourceInterruptWork {
public:
  SourceNmiWork(WorldRuntime &,NativeAudio &,TickState &,WorldSessionState &,
                battle::FrameDisplay &,battle::PaletteBankState &,
                battle::PsiDisplayState &,const battle::PsiScratch &,
                WorldDisplayFade &,WorldScenePresentation &,PeripheralState &,
                SourceInterruptContext);
  bool uses(const WorldRuntime &,const NativeAudio &) const noexcept override;
  bool healthy() const noexcept override {return !palette_lifetime_.expired()&&!publisher_lifetime_.expired();}
  bool uses_palette_transport(const battle::PaletteBankState&) const noexcept override;
  bool uses_window_palette(const dialogue::WindowPalettePublication&) const noexcept override;
  void bind_callback_work(SourceCallbackWork &);
  void execute(SourceWorkClock &) override;
  std::uint64_t completed_interrupts() const noexcept {return completed_;}
private:
  WorldRuntime &runtime_;
  NativeAudio &audio_;
  TickState &ticks_;
  WorldSessionState &session_;
  battle::FrameDisplay &frames_;
  battle::PaletteBankState &palette_;
  std::weak_ptr<const void> palette_lifetime_,publisher_lifetime_;
  battle::PsiDisplayState &video_;
  const battle::PsiScratch &scratch_;
  WorldDisplayFade &fade_;
  WorldScenePresentation &presentation_;
  PeripheralState &peripherals_;
  SourceCallbackWork *callback_{};
  SourceInterruptContext context_;
  std::uint64_t completed_{};
};
} // namespace story
} // namespace eb::native
