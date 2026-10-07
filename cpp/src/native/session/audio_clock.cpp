#include "eb/native/story/audio_clock.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::story {
AudioFrameClock::AudioFrameClock(TickState &clock,std::function<void()> nmi,
    std::function<void()> physical,unsigned phase,std::uint64_t frames,bool latch)
    :clock_(clock),nmi_(std::move(nmi)),physical_frame_(std::move(physical)),
     frames_(frames),phase_(phase),vblank_latch_(latch) {
  if(!nmi_ || !physical_frame_ || phase_>=length())
    throw std::invalid_argument("Audio/display clock requires its real hooks and physical phase");
}
void AudioFrameClock::bind_peripherals(PeripheralState& state) {
  if (peripherals_ && peripherals_ != &state)
    throw std::logic_error("Physical clock has another peripheral owner");
  state.bind_clock(*this); peripherals_ = &state;
}
bool AudioFrameClock::acknowledge_nmi() noexcept {
  const bool pending = vblank_latch_; vblank_latch_ = false; return pending;
}
std::uint8_t AudioFrameClock::blanking_status() const noexcept {
  // Odd frames' line240 is four clocks shorter; later line starts retain
  // their normal horizontal phase after that single shortened scanline.
  const auto adjusted = phase_ + ((frames_ & 1) && phase_ >= 241 * 1364 - 4 ? 4 : 0);
  const unsigned horizontal = adjusted % 1364;
  return std::uint8_t((phase_ >= 225 * 1364 ? 0x80 : 0) |
                      (horizontal < 4 || horizontal >= 1096 ? 0x40 : 0));
}
unsigned AudioFrameClock::length() const noexcept {return 1364*262-(frames_&1?4:0);}
unsigned AudioFrameClock::physical_phase(unsigned line,unsigned clocks,std::uint64_t frames) {
  if(line>=262 || clocks>=(line==240 && (frames&1)?1360u:1364u))
    throw std::invalid_argument("Invalid physical scanline phase");
  return line*1364+clocks-((frames&1) && line>240?4:0);
}
unsigned AudioFrameClock::next_quantum(unsigned requested) const {
  constexpr unsigned vblank=225*1364;
  return std::min(requested,(phase_<vblank?vblank:length())-phase_);
}
void AudioFrameClock::elapsed(unsigned clocks) {
  if(clocks>next_quantum(clocks))throw std::logic_error("Peripheral advance crossed its publication quantum");
  if (peripherals_) peripherals_->elapsed(clocks);
  phase_+=clocks;
  if(phase_==225*1364) {
    vblank_latch_=true;
    if (peripherals_ && (clock_.effective_interrupt_mask() & 1)) peripherals_->begin_auto_read();
    if(clock_.effective_interrupt_mask()&0x80) {
      vblank_latch_=false;
      if(!explicit_boundary_)nmi_();
    }
  } else if(phase_==length()) {
    phase_=0;++frames_;vblank_latch_=false;physical_frame_();
  }
}
void AudioFrameClock::nmi_enabled(bool enabled) {
  const bool before=clock_.effective_interrupt_mask()&0x80;
  if(clock_.retained_hardware_interrupt_mask)
    clock_.retained_hardware_interrupt_mask=std::uint8_t((clock_.effective_interrupt_mask()&0x7f)|(enabled?0x80:0));
  clock_.interrupt_mask=std::uint8_t((clock_.interrupt_mask&0x7f)|(enabled?0x80:0));
  if(enabled && !before && vblank_latch_) {vblank_latch_=false;nmi_();}
}
void AudioFrameClock::advance_boundary(NativeAudio &audio) {
  if(explicit_boundary_)throw std::logic_error("Physical boundary is recursive");
  explicit_boundary_=true;
  const unsigned vblank=225*1364;
  const unsigned distance=phase_<vblank?vblank-phase_:length()-phase_+vblank;
  try {audio.advance_master_clocks(distance);}
  catch(...) {explicit_boundary_=false;throw;}
  explicit_boundary_=false;
}
void AudioFrameClock::finish_frame(NativeAudio &audio) {
  if(phase_<225*1364)throw std::logic_error("Frame completion preceded its actual VBlank");
  audio.advance_master_clocks(length()-phase_);
}
}
