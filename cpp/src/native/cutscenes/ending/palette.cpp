#include "eb/native/cutscenes/ending/palette.hpp"
#include "eb/native/palette_transition.hpp"
#include <algorithm>
namespace eb::native::cutscenes::ending {
namespace {
std::uint16_t word(const battle::PsiScratch &buffer,unsigned at) {
  return std::uint16_t(buffer.bytes[at]|unsigned(buffer.bytes[at+1])<<8);
}
void word(battle::PsiScratch &buffer,unsigned at,std::uint16_t value) {
  buffer.bytes[at]=std::uint8_t(value);buffer.bytes[at+1]=std::uint8_t(value>>8);
}
PaletteColor color(std::uint16_t value) {
  return {std::uint8_t(value&31),std::uint8_t((value>>5)&31),std::uint8_t((value>>10)&31)};
}
}
void prepare_photograph_palette(battle::PaletteBankState &palettes,battle::PsiScratch &buffer,
    std::uint16_t divisor,std::uint16_t mask) {
  ScenePalette current{},target{};
  for(unsigned i=0;i<256;++i){current[i]=color(palettes.staged_color(i));target[i]=color(word(buffer,i*2));}
  const PaletteTransition transition(current,target,divisor,mask);
  std::fill_n(buffer.bytes.begin()+0x200,0x1000,0);
  for(unsigned i=0;i<256;++i) {
    if(!(mask&(1u<<(i/16))))word(buffer,i*2,palettes.staged_color(i));
    for(unsigned channel=0;channel<3;++channel) {
      const auto &ramp=transition.ramps()[i][channel];
      word(buffer,0x200+channel*0x200+i*2,std::uint16_t(ramp.increment));
      word(buffer,0x800+channel*0x200+i*2,ramp.value);
    }
  }
}
void advance_photograph_palette(battle::PaletteBankState &palettes,battle::PsiScratch &buffer) {
  for(unsigned i=0;i<256;++i) {
    std::uint16_t packed{};
    for(unsigned channel=0;channel<3;++channel) {
      const unsigned slope=0x200+channel*0x200+i*2,counter=0x800+channel*0x200+i*2;
      const auto value=std::uint16_t(unsigned(word(buffer,slope))+word(buffer,counter));
      word(buffer,counter,value);std::uint16_t visible{};
      if(value&0x8000)word(buffer,0x200+(channel==2?1:channel)*0x200+i*2,0);
      else {
        visible=std::uint16_t((value>>8)&31);
        if(visible==31)word(buffer,slope,0);
      }
      packed|=std::uint16_t(visible<<(channel*5));
    }
    palettes.staged_color(i)=packed;
  }
  palettes.upload_mode=24;
}
void finish_photograph_palette(battle::PaletteBankState &palettes,const battle::PsiScratch &buffer) {
  for(unsigned i=0;i<256;++i)palettes.staged_color(i)=word(buffer,i*2);
  palettes.upload_mode=24;
}
}
