#include "eb/native/cutscenes/ending/resources.hpp"
#include "../../dialogue/detail/hal.hpp"
#include <stdexcept>
namespace eb::native::cutscenes::ending {
namespace {
void require(bool ok,const char *message){if(!ok)throw std::runtime_error(message);}
struct Reader {
  std::span<const std::uint8_t> image;
  unsigned byte(unsigned at) const {require(at<image.size(),"Truncated ending content");return image[at];}
  unsigned word(unsigned at) const {return byte(at)|(byte(at+1)<<8);}
  std::vector<std::uint8_t> decode(unsigned at,unsigned upper,std::vector<std::uint8_t> &encoded) const {
    const unsigned begin=at;unsigned size{};
    for(;;) {
      const unsigned head=byte(at++);if(head==255)break;
      unsigned kind=head>>5,count=(head&31)+1;
      if(kind==7){kind=(head>>2)&7;count=(((head&3)<<8)|byte(at++))+1;}
      const unsigned produced=count*(kind==2?2u:1u);
      require(kind<7&&size<=upper&&produced<=upper-size,"Ending compressed content exceeds BUFFER");
      size+=produced;at+=kind==0?count:kind==2||kind>=4?2:1;
      require(at<=image.size(),"Truncated ending compressed content");
    }
    const auto stream=image.subspan(begin,at-begin);
    encoded.assign(stream.begin(),stream.end());
    return dialogue::detail::decode_hal_exact(stream,size);
  }
};
}
Resources::Resources(std::span<const std::uint8_t> image,GameVersion version)
    :credits_(CreditsResources::import(image,version)) {
  Reader r{image};const bool jp=version==GameVersion::JP;
  wipe_[0]=std::uint8_t(r.byte(wipe_identity()-0xc00000));
  require(wipe_[0]==0,"Ending row wipe constant differs");
  frame_=r.decode(jp?0x21d6dc:0x21e94a,65536,encoded_frame_);
  const auto layout=credits_content_layout(version);
  font_=r.decode(layout.compressed_font,layout.font_bytes,encoded_font_);
  require(font_.size()==layout.font_bytes,"Ending staff font extent differs");
  // COPY_TO_VRAM reads through offset0x2700, including retained BUFFER tail if
  // the authored frame stream produces fewer bytes.
  require(frame_.size()>=0x700,"Ending frame has no authored arrangement");
  photo_palettes_=r.decode(jp?0x212ba1:0x21374a,65536,encoded_photo_palettes_);
  const unsigned colors=(jp?0x21d6b6:0x21e924)+6;
  for(unsigned i=0;i<frame_palette_.size();++i)frame_palette_[i]=std::uint16_t(r.word(colors+i*2));
  for(unsigned i=0;i<sprite_palettes_.size();++i)sprite_palettes_[i]=std::uint16_t(r.word(0x30000+i*2));
  const unsigned party_graphics=jp?0x3f02e:0x3f2b5;
  for(unsigned member=0;member<photograph_sprites_.size();++member)
    for(unsigned variant=0;variant<2;++variant)
      photograph_sprites_[member][variant]=std::uint16_t(r.word(party_graphics+member*16+variant*2));
  const unsigned config=jp?0x2123e1:0x212f8a;
  for(unsigned i=0;i<photographs_.size();++i) {
    const unsigned at=config+i*62;auto &p=photographs_[i];
    const auto point=[&](unsigned offset){return PhotoPoint{std::uint16_t(r.word(at+offset)),std::uint16_t(r.word(at+offset+2))};};
    p.event_flag=std::uint16_t(r.word(at));p.map=point(2);
    p.palette_offset=std::uint16_t(r.word(at+6));p.slide_direction=std::uint8_t(r.byte(at+8));p.slide_distance=std::uint8_t(r.byte(at+9));
    p.photographer=point(10);
    for(unsigned member=0;member<p.party.size();++member)p.party[member]=point(14+member*4);
    for(unsigned object=0;object<p.objects.size();++object)p.objects[object]={point(38+object*6),std::uint16_t(r.word(at+42+object*6))};
    require(p.event_flag<=1024,"Ending photograph flag exceeds its authored domain");
    require(p.palette_offset<=photo_palettes_.size()&&192<=photo_palettes_.size()-p.palette_offset,
            "Ending photograph palette exceeds its decoded asset");
  }
}
std::uint16_t Resources::photograph_sprite(std::uint8_t encoded) const {
  const unsigned member=encoded&31;
  require(member&&member<=photograph_sprites_.size(),"Saved photograph member exceeds its authored sprite table");
  if(!(encoded&0x20)&&(encoded&0x40))return 12;
  const auto sprite=photograph_sprites_[member-1][bool(encoded&0x20)];
  return sprite==1?14:sprite;
}
bool photo_flag(std::span<const std::uint8_t> flags,std::uint16_t selector) {
  require(flags.size()==128&&selector<=1024,"Ending photograph requires actual event flags");
  return selector&&((flags[(selector-1)/8]>>((selector-1)%8))&1);
}
unsigned count_photographs(const Resources &resources,std::span<const std::uint8_t> flags) {
  unsigned count{};for(const auto &p:resources.photographs())if(photo_flag(flags,p.event_flag))++count;return count;
}
}
