#include "eb/native/story/audio_clock.hpp"
#include <iostream>
#include <stdexcept>
using namespace eb::native::story;
namespace {
unsigned checks{};
void check(bool value,const char *message){++checks;if(!value)throw std::runtime_error(message);}
void advance(AudioFrameClock &clock,unsigned total) {
  while(total){const auto n=clock.next_quantum(total);check(n>0,"Zero physical quantum");clock.elapsed(n);total-=n;}
}
}
int main(){try {
  TickState state;unsigned nmis{},frames{};
  AudioFrameClock clock(state,[&]{++nmis;},[&]{++frames;});
  advance(clock,225*1364-1);check(!nmis&&!frames,"NMI arrived before actual scanline225");
  advance(clock,1);check(nmis==1&&!frames,"NMI and physical frame were conflated");
  check(clock.acknowledge_nmi(),"Hardware dispatch consumed the unread RDNMI flag");
  check(!clock.acknowledge_nmi(),"RDNMI read failed to acknowledge only its visible flag");
  clock.nmi_enabled(false);clock.nmi_enabled(true);
  check(nmis==1,"Re-enable repeated an already handled vblank edge");
  advance(clock,37*1364);check(nmis==1&&frames==1,"Physical frame failed at line262");
  clock.nmi_enabled(false);advance(clock,225*1364);
  check(nmis==1&&frames==1,"Masked upload fabricated NMI or ended the frame early");
  clock.nmi_enabled(true);check(nmis==2,"Re-enable lost the actual retained vblank latch");
  clock.nmi_enabled(true);check(nmis==2,"Repeated enable fabricated an edge");
  check(clock.acknowledge_nmi(),"Dispatch consumed the masked edge's unread hardware flag");
  clock.nmi_enabled(false);clock.nmi_enabled(true);
  check(nmis==2,"Re-enable after actual RDNMI read fabricated an edge");
  advance(clock,37*1364-4);check(frames==2,"Odd-frame short scanline lost four clocks");
  advance(clock,225*1364);check(nmis==3,"Even frame displaced the next NMI");
  advance(clock,37*1364);
  check(!clock.acknowledge_nmi(),"The next physical frame retained an obsolete RDNMI flag");
  check(AudioFrameClock::physical_phase(241,12,1)==241*1364+8 &&
        AudioFrameClock::physical_phase(240,12,1)==240*1364+12,
        "Incoming source scanline conversion misplaced the short line");
  check(state.input_polls==0,"Physical clock polled logical input");
  TickState unread;unsigned unread_edges{};
  AudioFrameClock unread_clock(unread,[&]{++unread_edges;},[]{});
  advance(unread_clock,225*1364);
  unread_clock.nmi_enabled(false);unread_clock.nmi_enabled(true);
  check(unread_edges==2 && unread_clock.acknowledge_nmi(),
        "Original rising enable with unread RDNMI failed to request a fresh edge");
  unread_clock.nmi_enabled(false);unread_clock.nmi_enabled(true);
  check(unread_edges==2,"Acknowledged rising enable repeated an obsolete edge");
  TickState overwritten;overwritten.interrupt_mask=0x81;
  unsigned retained_nmis{};
  AudioFrameClock retained(overwritten,[&]{++retained_nmis;},[]{});
  overwritten.retain_interrupt_hardware();overwritten.interrupt_mask=0;
  advance(retained,225*1364);
  check(retained_nmis==1 && overwritten.interrupt_mask==0 && overwritten.effective_interrupt_mask()==0x81,
        "Low-WRAM mirror reset disabled hardware NMI or rewrote its mirror");
  advance(retained,37*1364);retained.nmi_enabled(false);advance(retained,225*1364);
  check(retained_nmis==1 && overwritten.effective_interrupt_mask()==1,
        "Actual NMI masking lost retained auto-joypad enable");
  retained.nmi_enabled(true);
  check(retained_nmis==2 && overwritten.interrupt_mask==0x80 && overwritten.effective_interrupt_mask()==0x81,
        "Actual NMI enable lost the latched edge or fabricated mirror joypad bits");
  std::cout<<"PASS actual audio/display clock: "<<checks<<" checks\n";
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
