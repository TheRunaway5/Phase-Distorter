#include "eb/native/cutscenes/sound_stone/resources.hpp"
#include "../../dialogue/detail/hal.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::cutscenes::sound_stone {
namespace {
void require(bool ok, const char *message) { if (!ok) throw std::runtime_error(message); }
struct Reader {
  std::span<const std::uint8_t> bytes;
  unsigned byte(unsigned at) const { require(at<bytes.size(),"Truncated Sound Stone content"); return bytes[at]; }
  unsigned word(unsigned at) const { return byte(at)|(byte(at+1)<<8); }
  unsigned pointer(unsigned at) const {
    const unsigned p=word(at)|(byte(at+2)<<16);
    require(p>=0xc00000&&p<0xf00000&&byte(at+3)==0,"Invalid Sound Stone radius identity");
    return p-0xc00000;
  }
  std::vector<std::uint8_t> decode(unsigned at, unsigned extent) const {
    const unsigned begin=at; unsigned output{};
    for (;;) {
      const unsigned head=byte(at++); if(head==255) break;
      unsigned kind=head>>5, count=(head&31)+1;
      if(kind==7) { kind=(head>>2)&7; count=(((head&3)<<8)|byte(at++))+1; }
      const unsigned amount=count*(kind==2?2u:1u);
      require(kind<7&&output<=extent&&amount<=extent-output,"Sound Stone graphics exceed declared extent");
      output+=amount; at+=kind==0?count:kind==2||kind>=4?2:1;
      require(at<=bytes.size(),"Truncated Sound Stone graphics");
    }
    require(output==extent,"Sound Stone graphics decoded extent differs");
    return dialogue::detail::decode_hal_exact(bytes.subspan(begin,at-begin),extent);
  }
};
}
Resources::Resources(std::span<const std::uint8_t> image,GameVersion version):version_(version) {
  require(version==GameVersion::US||version==GameVersion::JP,"Unsupported Sound Stone region");
  const bool jp=version==GameVersion::JP; const Reader r{image};
  graphics_=r.decode(0xedd5d,0x2c00);
  const unsigned palette=jp?0xef80a:0xef806, table=jp?0x480e4:0x4ac7b;
  for(unsigned i=0;i<palette_.size();++i) palette_[i]=std::uint16_t(r.word(palette+i*2));
  for(unsigned i=0;i<8;++i) {
    x_[i]=std::uint8_t(r.byte(table+i)); y_[i]=std::uint8_t(r.byte(table+8+i));
    tiles_[i]=std::uint8_t(r.byte(table+16+i)); center_palettes_[i]=std::uint8_t(r.byte(table+24+i));
    orbit_tiles_[i]=std::uint8_t(r.byte(table+32+i)); orbit_palettes_[i]=std::uint8_t(r.byte(table+40+i));
    flags_[i]=std::uint8_t(r.byte(table+75+i));
  }
  for(unsigned i=0;i<9;++i) {
    music_[i]=std::uint8_t(r.byte(table+48+i)); durations_[i]=std::uint16_t(r.word(table+57+i*2));
    require(durations_[i]>=9,"Sound Stone duration cannot address its authored effect phase");
  }
  // The first declared curve has144 bytes but289 drawing frames sample145
  // bytes: its final sample is the first byte of the next declared curve.
  // Retain this adjacency at import, rather than clamping a live read.
  const unsigned pointers=jp?0x480c0:0x4ac57;
  const unsigned radius_begin=jp?0x2f9c42:0x2f4a40, radius_end=jp?0x2fa022:0x2f4e20;
  for(unsigned i=0;i<9;++i) {
    const unsigned begin=r.pointer(pointers+i*4), extent=(durations_[i]+1)/2;
    const unsigned end=i<8?r.pointer(pointers+(i+1)*4):radius_end;
    require(begin>=radius_begin&&end<=radius_end&&end-begin==(i?106u:144u)&&extent<=radius_end-begin,
            "Sound Stone radius curve extent differs");
    for(unsigned j=0;j<extent;++j) radii_[i].push_back(std::uint8_t(r.byte(begin+j)));
  }
  const unsigned sine=jp?0xb404:0xb425;
  for(unsigned i=0;i<sine_.size();++i) sine_[i]=std::uint8_t(r.byte(sine+i));
}
std::array<std::uint16_t,2> Resources::motion(std::uint16_t radius,std::uint8_t angle) const noexcept {
  const int amplitude=radius<0x8000?int(radius):int(radius)-65536;
  const auto product=[&](std::uint8_t phase) {
    const int sample=sine_[phase]<128?int(sine_[phase]):int(sine_[phase])-256;
    const int value=amplitude*sample;
    return std::uint16_t(value>=0?value/256:(value-255)/256);
  };
  return {product(angle),product(std::uint8_t(angle-64))};
}
}
