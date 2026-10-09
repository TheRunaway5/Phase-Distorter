#include "eb/native/cutscenes/cast/resources.hpp"
#include "../../dialogue/detail/hal.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::cutscenes::cast {
namespace {
void require(bool ok,const char *message){if(!ok)throw std::runtime_error(message);}
struct Reader {
  std::span<const std::uint8_t> image;
  unsigned byte(unsigned at) const {require(at<image.size(),"Truncated Cast content");return image[at];}
  unsigned word(unsigned at) const {return byte(at)|(byte(at+1)<<8);}
  unsigned pointer(unsigned at) const {const unsigned p=word(at)|(word(at+2)<<16);require(p>=0xc00000&&p<0xf00000,"Invalid Cast font identity");return p-0xc00000;}
  std::vector<std::uint8_t> decode(unsigned at,unsigned extent) const {
    const unsigned begin=at;unsigned size{};
    for(;;){const unsigned h=byte(at++);if(h==255)break;unsigned k=h>>5,n=(h&31)+1;
      if(k==7){k=(h>>2)&7;n=(((h&3)<<8)|byte(at++))+1;}
      const unsigned produced=n*(k==2?2u:1u);
      require(k<7&&size<=extent&&produced<=extent-size,"Cast compressed asset exceeds its declared extent");
      size+=produced;at+=k==0?n:k==2||k>=4?2:1;require(at<=image.size(),"Truncated Cast compressed asset");}
    require(size==extent,"Cast compressed asset extent differs");
    return dialogue::detail::decode_hal_exact(image.subspan(begin,at-begin),extent);
  }
};
}
Resources::Resources(std::span<const std::uint8_t> image,GameVersion version):version_(version) {
  require(version==GameVersion::US||version==GameVersion::JP,"Unsupported Cast region");const Reader r{image};const bool jp=version==GameVersion::JP;
  header_=r.decode(jp?0x200000:0x21d6e1,jp?0x2a00:0x400);
  graphics_=r.decode(jp?0x21d18c:0x21d835,jp?0x200:0x2a00);
  special_=r.decode(jp?0x21d28a:0x21e4e6,0x100);
  for(unsigned i=0;i<palette_.size();++i)palette_[i]=std::uint16_t(r.word((jp?0x21d26a:0x21d815)+i*2));
  for(unsigned i=0;i<sprites_.size();++i)sprites_[i]=std::uint16_t(r.word(0x30000+i*2));
  if(jp) {
    // The pointer table owns48 entries. Its same-bank strings end before the
    // table; max32 matches PREPARE_CAST_NAME_TILEMAP's authored truncation.
    for(unsigned i=0;i<names_.size();++i){const unsigned at=0x210000+r.word(0x212381+i*2);require(at>=0x212110&&at<0x212381,"Cast JP name pointer escapes its declared dictionary");
      for(unsigned j=0;j<32;++j){const auto b=std::uint8_t(r.byte(at+j));if(!b)break;names_[i].push_back(b);}}
  } else {
    for(unsigned i=0;i<formats_.size();++i)formats_[i]={std::uint16_t(r.word(0x212efa+i*3)),std::uint8_t(r.byte(0x212efa+i*3+2))};
    for(unsigned i=0;i<party_tiles_.size();++i)party_tiles_[i]=std::uint16_t(r.word(0x3fdb5+i*2));
    const std::array<unsigned,3> suffixes{0x4e796,0x4e79d,0x4e7a4};
    for(unsigned i=0;i<suffixes.size();++i)for(unsigned j=0;j<10;++j){const auto b=std::uint8_t(r.byte(suffixes[i]+j));if(!b)break;guardians_[i].push_back(b);}
    require(r.word(0x3f05c)==32&&r.word(0x3f05e)==16,"Cast normal font descriptor differs");
    const unsigned metrics=r.pointer(0x3f054),glyphs=r.pointer(0x3f058);
    for(unsigned i=0;i<widths_.size();++i)widths_[i]=std::uint8_t(r.byte(metrics+i));
    // Source masks glyph index to127, including32 adjacent entries after its
    // declared96 glyphs. An unsigned padded width can read32 sixteen-row
    // strips. Import that contiguous adjacency once instead of live ROM reads.
    for(unsigned i=0;i<127*32+32*16;++i)font_.push_back(std::uint8_t(r.byte(glyphs+i)));
  }
}
std::span<const std::uint8_t> Resources::glyph_strip(unsigned index,unsigned strip) const {
  if(version_!=GameVersion::US||index>=128||strip>=32)throw std::out_of_range("Cast normal-font strip exceeds its source domain");
  return std::span(font_).subspan(index*32+strip*16,16);
}
}
