#pragma once
#include "eb/native_audio.hpp"
#include "eb/native/peripheral_state.hpp"
#include "eb/native/story/ticks.hpp"
#include <functional>
namespace eb::native::story {
// One shared NTSC peripheral/display timeline. It borrows the actual NMI
// mirror and publication hooks; masked uploads still consume physical time.
class AudioFrameClock final : public NativeAudioClock, public PeripheralClock {
public:
  AudioFrameClock(TickState &, std::function<void()> nmi,
                  std::function<void()> physical_frame,
                  unsigned initial_phase=0, std::uint64_t initial_frames=0,
                  bool initial_vblank_latch=false);
  AudioFrameClock(const AudioFrameClock &) = delete;
  AudioFrameClock &operator=(const AudioFrameClock &) = delete;
  AudioFrameClock(AudioFrameClock &&) = delete;
  AudioFrameClock &operator=(AudioFrameClock &&) = delete;
  void bind_peripherals(PeripheralState&);
  bool uses_peripherals(const PeripheralState &state) const noexcept {return peripherals_==&state;}
  bool uses(const TickState &ticks) const noexcept {return &clock_==&ticks;}
  bool acknowledge_nmi() noexcept override;
  std::uint8_t blanking_status() const noexcept override;
  unsigned next_quantum(unsigned requested) const override;
  void elapsed(unsigned) override;
  void nmi_enabled(bool) override;
  // A logical Scene operation owns this boundary's publication/WAIT reply.
  // Clock its audio to the same next boundary without also publishing it here.
  void advance_boundary(NativeAudio &);
  // Finish the physical frame after the caller completed its NMI/WAIT work.
  void finish_frame(NativeAudio &);
  static unsigned physical_phase(unsigned scanline,unsigned clocks,std::uint64_t frames);
  unsigned phase() const noexcept { return phase_; }
  std::uint64_t physical_frames() const noexcept { return frames_; }
private:
  friend class SourceWorkClock;
  struct Lifetime {};
  std::shared_ptr<const Lifetime> lifetime_ = std::make_shared<Lifetime>();
  unsigned length() const noexcept;
  PeripheralState* peripherals_{};
  TickState &clock_;
  std::function<void()> nmi_, physical_frame_;
  std::uint64_t frames_{};
  unsigned phase_{};
  bool explicit_boundary_{};
  bool vblank_latch_{};
};
}
