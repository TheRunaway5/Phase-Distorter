#include "eb/native/dialogue/window_buffer.hpp"
#include <stdexcept>

namespace eb::native::dialogue {
void prepare_window_buffer(WindowGraphics &graphics,std::span<std::uint8_t,65536> buffer,
    const PartyNameInputs &names,unsigned flavor,Conversation *parent) {
  std::array<WindowArtwork,1184> retained;
  for(unsigned cell=0;cell<retained.size();++cell)
    for(unsigned y=0;y<8;++y)
      for(unsigned x=0;x<8;++x)
        retained[cell][y*8+x]=std::uint8_t(((buffer[cell*16+y*2]>>(7-x))&1)|
            (((buffer[cell*16+y*2+1]>>(7-x))&1)<<1));
  if(parent) {
    graphics.retain_prepared_artwork(0,retained,*parent);
    graphics.prepare_nested(names,flavor,*parent);
  } else {
    graphics.retain_prepared_artwork(0,retained);
    graphics.prepare(names,flavor);
  }
  const auto prepared=graphics.prepared_artwork();
  if(prepared.size()!=retained.size())throw std::logic_error("Window BUFFER artwork extent differs");
  // Unwritten indexed cells were imported losslessly from this same bank.
  // Encoding them preserves their bytes, and never writes the remaining tail.
  for(unsigned cell=0;cell<prepared.size();++cell)
    for(unsigned y=0;y<8;++y) {
      unsigned low{},high{};
      for(unsigned x=0;x<8;++x) {
        const unsigned value=prepared[cell][y*8+x];
        low|=(value&1)<<(7-x);high|=((value>>1)&1)<<(7-x);
      }
      buffer[cell*16+y*2]=std::uint8_t(low);buffer[cell*16+y*2+1]=std::uint8_t(high);
    }
}
}
