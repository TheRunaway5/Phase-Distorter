#include "eb/native/cutscenes/coffee/resources.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::cutscenes::coffee {
namespace {
void require(bool ok,const char *message) { if(!ok) throw std::runtime_error(message); }
std::span<const std::uint8_t> region(std::span<const std::uint8_t> bytes,unsigned at,unsigned count) {
  require(at<=bytes.size()&&count<=bytes.size()-at,"Truncated coffee/tea content"); return bytes.subspan(at,count);
}
unsigned word(std::span<const std::uint8_t> b,unsigned at) { return b[at]|(unsigned(b[at+1])<<8); }
unsigned pointer(std::span<const std::uint8_t> b,unsigned at) {
  const unsigned value=word(b,at)|(word(b,at+2)<<16);
  require(value>=0xc00000,"Invalid coffee/tea font pointer"); return value-0xc00000;
}
unsigned index(std::uint16_t encoded) { return (unsigned(encoded)-0x50)&127; }
}
Resources::Resources(std::span<const std::uint8_t> image,GameVersion version):version_(version) {
  require(version==GameVersion::US||version==GameVersion::JP,"Unsupported coffee/tea region");
  const bool jp=version==GameVersion::JP;
  const std::array<unsigned,2> starts=jp?std::array<unsigned,2>{0x211602,0x211b1c}:std::array<unsigned,2>{0x210000,0x210652};
  const std::array<unsigned,2> sizes=jp?std::array<unsigned,2>{1306,1385}:std::array<unsigned,2>{1618,1332};
  for(unsigned i=0;i<2;++i) {
    const auto bytes=region(image,starts[i],sizes[i]); scripts_[i].assign(bytes.begin(),bytes.end());
    std::size_t cursor{};bool terminated{};
    while(cursor<bytes.size()) { const auto code=bytes[cursor++];if(!code){terminated=true;break;}if(code==1||code==8||(jp&&code!=9)){require(cursor<bytes.size(),"Truncated coffee/tea script operand");++cursor;} }
    require(terminated,"Coffee/tea script has no authored terminator");
  }
  const auto colors=region(image,jp?0x2030dd:0x202188,8);
  for(unsigned i=0;i<4;++i) palette_[i]=std::uint16_t(word(colors,i*2));
  if(jp) {
    const auto glyphs=region(image,0x210000,0x1602); font_.assign(glyphs.begin(),glyphs.end());
    const auto mapping=region(image,0x21213e,unsigned(name_map_.size())); std::copy(mapping.begin(),mapping.end(),name_map_.begin());
  } else {
    const auto descriptor=region(image,0x3f054+4*12,12);
    require(word(descriptor,8)==32&&word(descriptor,10)==16,"Unexpected coffee/tea large font dimensions");
    const auto metrics=region(image,pointer(descriptor,0),128); std::copy(metrics.begin(),metrics.end(),metrics_.begin());
    unsigned extent{};
    for(unsigned i=0;i<128;++i) extent=std::max(extent,i*32+((unsigned(metrics_[i])+1+7)/8)*16);
    const auto glyphs=region(image,pointer(descriptor,4),extent); font_.assign(glyphs.begin(),glyphs.end());
  }
}
std::span<const std::uint8_t> Resources::script(unsigned selector) const { return scripts_.at(selector==0?0:1); }
unsigned Resources::advance(std::uint16_t encoded) const {
  require(version_==GameVersion::US,"Variable-width flyover glyph used in Japanese scene"); return unsigned(metrics_[index(encoded)])+1;
}
std::span<const std::uint8_t> Resources::strip(std::uint16_t encoded,unsigned ordinal) const {
  require(version_==GameVersion::US,"Variable-width flyover glyph used in Japanese scene");
  return region(font_,index(encoded)*32+ordinal*16,16);
}
std::array<std::uint8_t,36> Resources::packed_glyph(std::uint16_t encoded,unsigned shift) const {
  require(version_==GameVersion::JP&&encoded>=0x8000&&shift<8,"Invalid Japanese flyover glyph");
  const auto glyph=region(font_,(unsigned(encoded)-0x8000)*18,18); std::array<std::uint8_t,36> output{};
  for(unsigned row=0;row<12;++row) {
    const unsigned at=(row/2)*3;
    if(shift<5) {
      const unsigned bits=(row&1)?((unsigned(glyph[at+1])&15)<<8)|glyph[at+2]:(unsigned(glyph[at])<<4)|(glyph[at+1]>>4);
      const unsigned shifted=bits<<(12-shift);
      output[row*3]=std::uint8_t(shifted>>16);output[row*3+1]=std::uint8_t(shifted>>8);
    } else {
      // DECOMP_ENTRY2's last three paths preserve neighboring packed bits;
      // C41DB6 applies the separate three-strip masks after decompression.
      const unsigned first=glyph[at+(row&1)],second=glyph[at+(row&1)+1];
      const unsigned right=(row&1)?shift-4:shift;
      output[row*3]=std::uint8_t(first>>right);
      output[row*3+1]=std::uint8_t((first<<(8-right))|(second>>right));
      output[row*3+2]=std::uint8_t(second<<(8-right));
      if(shift==5)output[row*3+2]&=128;
    }
  }
  return output;
}
std::uint16_t Resources::name_glyph(std::uint8_t encoded) const {
  require(version_==GameVersion::JP&&encoded>=32,"Japanese flyover name requires its authored encoded glyph");
  return std::uint16_t(0x8000+name_map_.at(unsigned(encoded)-32));
}
}
