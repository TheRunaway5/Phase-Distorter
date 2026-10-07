#include "eb/native/world/townmap/resources.hpp"
#include "../../dialogue/detail/hal.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::world::townmap {
namespace {
void require(bool ok,const char *message) { if(!ok)throw std::runtime_error(message); }
struct Reader {
  std::span<const std::uint8_t> image;
  unsigned byte(unsigned at) const { require(at<image.size(),"Truncated town-map content");return image[at]; }
  unsigned word(unsigned at) const { return byte(at)|byte(at+1)<<8; }
  unsigned pointer(unsigned at) const { const auto p=word(at)|byte(at+2)<<16;require(p>=0xc00000&&p<0xf00000,"Town-map pointer is outside declared content");return p-0xc00000; }
  std::vector<std::uint8_t> decode(unsigned at,unsigned size) const {
    const unsigned begin=at;unsigned decoded{};
    for(;;) {
      const unsigned head=byte(at++);if(head==255)break;
      unsigned kind=head>>5,count=(head&31)+1;
      if(kind==7){kind=(head>>2)&7;count=(((head&3)<<8)|byte(at++))+1;}
      require(kind<7&&decoded<=size&&count*(kind==2?2u:1u)<=size-decoded,"Town-map compressed asset exceeds declared decoded extent");
      decoded+=count*(kind==2?2u:1u);
      at+=kind==0?count:kind==2||kind>=4?2:1;
      require(at<=image.size(),"Truncated town-map compressed asset");
    }
    require(decoded==size,"Town-map decoded asset extent differs");
    return dialogue::detail::decode_hal_exact(image.subspan(begin,at-begin),size);
  }
};
}
Resources::Resources(std::span<const std::uint8_t> image,GameVersion version):version_(version) {
  require(version==GameVersion::US||version==GameVersion::JP,"Unsupported town-map region");
  Reader r{image};const bool jp=version==GameVersion::JP;
  const unsigned sectors=jp?0x2fa022:0x2fa70f,mapping=jp?0x2fbe22:0x2fc50f;
  const unsigned gfx=jp?0x2030e5:0x202190,label=jp?0x21d7e2:0x21ea50;
  const unsigned palette=jp?0x21defd:0x21f1c3,icons=jp?0x21e159:0x21f44c;
  const unsigned blink=jp?0x21e187:0x21f47a,placements=jp?0x21e19e:0x21f491;
  for(unsigned i=0;i<sectors_.size();++i) {
    sectors_[i]={std::uint8_t(r.byte(sectors+i*3)),std::uint8_t(r.byte(sectors+i*3+1)),std::uint8_t(r.byte(sectors+i*3+2))};
    require((sectors_[i].selector&15)<=6,"Town-map sector selects an unknown map");
  }
  for(unsigned i=0;i<mapping_.size();++i){mapping_[i]=r.word(mapping+i*2);require(mapping_[i]<icons_.size(),"Town-map mapping selects an unknown icon");}
  for(unsigned i=0;i<maps_.size();++i) {
    auto &m=maps_[i];m.decoded=r.decode(r.pointer(gfx+i*4),0x4840);
    Reader d{m.decoded};
    for(unsigned color=0;color<m.palette.size();++color)m.palette[color]=d.word(color*2);
    for(unsigned tile=0;tile<m.arrangement.size();++tile)m.arrangement[tile]=d.word(0x40+tile*2);
    for(unsigned tile=0;tile<m.tiles.size();++tile)for(unsigned y=0;y<8;++y)for(unsigned x=0;x<8;++x) {
      unsigned pixel{};for(unsigned plane=0;plane<4;++plane)
        pixel|=((d.byte(0x840+tile*32+y*2+(plane/2)*16+(plane&1))>>(7-x))&1)<<plane;
      m.tiles[tile][y*8+x]=pixel;
    }
    for(const auto entry:m.arrangement)require((entry&1023)<m.tiles.size()&&((entry>>10)&7)<2,"Town-map arrangement exceeds declared artwork/palette");
  }
  // The label stream ends before COPY_TO_VRAM's declared extent. Its suffix
  // remains the actual preceding map decompression in shared BUFFER.
  labels_=r.decode(label,jp?0x1b80:0x2280);
  for(unsigned i=0;i<palette_.size();++i)palette_[i]=r.word(palette+i*2);
  for(unsigned i=0;i<icons_.size();++i) {
    blink_[i]=r.byte(blink+i);unsigned at=0x210000+r.word(icons+i*2);
    for(unsigned count=0;;++count) {
      // Only the first64 bytes are declared icon colors; LOAD_TOWN_MAP_DATA
      // copies128 colors, deliberately including these neighboring records.
      require(count<128&&at>=palette+0x40&&at+5<=icons,"Town-map spritemap exceeds its declared extent");
      const unsigned y=r.byte(at),tile=r.word(at+1),x=r.byte(at+3),flags=r.byte(at+4);
      if(y==128){at=0x210000+tile;continue;}
      require((tile&511)*32+((flags&1)?0x240u:32u)<=labels_.size(),"Town-map icon tile exceeds label artwork");
      icons_[i].push_back({std::int8_t(x),std::int8_t(y),std::uint16_t(tile),bool(flags&1)});
      if(flags&128)break;
      at+=5;
    }
  }
  for(unsigned i=0;i<placements_.size();++i) {
    unsigned at=r.pointer(placements+i*4);
    for(unsigned count=0;r.byte(at)!=255;++count,at+=5) {
      require(count<32&&at>=placements+24&&at+5<(jp?0x21e28e:0x21f581),"Town-map placement list exceeds declared extent");
      const unsigned icon=r.byte(at+2),flag=r.word(at+3);
      require(icon<icons_.size()&&(flag&0x7fff)<=1024,"Town-map placement selects an unknown icon/flag");
      placements_[i].push_back({std::uint8_t(r.byte(at)),std::uint8_t(r.byte(at+1)),std::uint8_t(icon),std::uint16_t(flag)});
    }
  }
}
const Sector &Resources::sector(std::uint16_t x,std::uint16_t y) const {
  require((x>>8)<32&&y<80*128,"Town-map leader sector is outside authored content");
  return sectors_[(y/128)*32+(x>>8)];
}
std::vector<IconDraw> select_icons(const Resources &r,unsigned map,const Sector &sector,const State &state,std::span<const std::uint8_t> flags) {
  require(flags.size()==128,"Town-map icons require actual event flags");std::vector<IconDraw> out;
  for(const auto p:r.placements(map)) {
    if(r.blinks(p.icon)&&state.animation<10)continue;
    const unsigned flag=p.flag&0x7fff;const bool set=flag&&((flags[(flag-1)/8]>>((flag-1)%8))&1);
    if(set!=bool(p.flag&0x8000))continue;
    out.push_back({p.icon,p.x,p.y});
  }
  unsigned arrow{};int x=sector.x,y=sector.y;
  switch(sector.selector&0x70){case 0x10:arrow=2;y-=8;break;case 0x20:arrow=3;y+=8;break;case 0x40:arrow=4;x-=8;break;case 0x30:arrow=5;x+=16;break;default:break;}
  if(arrow)out.push_back({std::uint16_t(r.mapping(arrow)),std::int16_t(x),std::int16_t(y)});
  out.push_back({std::uint16_t(r.mapping(state.player_animation<10?1:0)),sector.x,sector.y});return out;
}
std::shared_ptr<const DirectSceneFrame> render(const Resources &r,unsigned map,std::span<const IconDraw> draws) {
  const auto &m=r.map(map);
  auto out=std::make_shared<DirectSceneFrame>();
  out->width=256;out->scene_identity=0x544f574e4d4150ull;out->atlas_width=256;
  // Each authored object gets its own indexed atlas block. Palette identities
  // are sampled by the real publication owner after the NMI upload phase.
  unsigned height=256;
  for(const auto &draw:draws)for(const auto &part:r.icon(draw.icon))height+=part.large?16:8;
  out->atlas_height=height;out->atlas.resize(256*height);out->palette_indices.resize(256*height,256);
  const auto color=[](unsigned packed) {
    const unsigned red=packed&31,green=(packed>>5)&31,blue=(packed>>10)&31;
    return 0xff000000u|((red<<3|red>>2)<<16)|((green<<3|green>>2)<<8)|(blue<<3|blue>>2);
  };
  for(unsigned y=0;y<256;++y)for(unsigned x=0;x<256;++x) {
    const auto cell=m.arrangement[(y/8)*32+x/8];
    const unsigned tx=(cell&0x4000)?7-x%8:x%8,ty=(cell&0x8000)?7-y%8:y%8;
    const unsigned pixel=m.tiles[cell&1023][ty*8+tx],id=((cell>>10)&7)*16+pixel;
    const unsigned at=y*256+x;out->palette_indices[at]=id;
    // Palette zero is transparent to the backdrop, as in Mode1 BG1.
    out->atlas[at]=pixel?color(m.palette[id]):0;
  }
  for(unsigned y=0;y<29;++y)for(unsigned x=0;x<32;++x) {
    const auto entry=m.arrangement[y*32+x];
    out->quads.push_back({x*8,y*8,8,8,float(x*8),float(y*8)-1,entry&0x2000?9:6,0,false});
  }
  unsigned row=256,objects=0;
  for(const auto &draw:draws)for(const auto &part:r.icon(draw.icon)) {
    const int x=draw.x+part.x,y=draw.y+part.y;
    // C08CD5 rejects vertical coordinates outside [-32,223], before OAM's
    // byte wrap. It also rejects X words whose high byte is neither00 norFF.
    if(y-1>=224 || y-1< -32 || x>=256 || x< -256)continue;
    if(objects==128)return out;
    ++objects;
    const unsigned size=part.large?16:8;
    for(unsigned py=0;py<size;++py)for(unsigned px=0;px<size;++px) {
      const unsigned sx=part.tile&0x4000?size-1-px:px,sy=part.tile&0x8000?size-1-py:py;
      const unsigned tile=(part.tile&0x100)|(((part.tile&0xf0)+(sy/8)*16)&0xf0)|((part.tile+sx/8)&15);
      unsigned pixel{};for(unsigned plane=0;plane<4;++plane)
        pixel|=((r.labels()[tile*32+(sy%8)*2+(plane/2)*16+(plane&1)]>>(7-sx%8))&1)<<plane;
      const unsigned id=128+((part.tile>>9)&7)*16+pixel,at=(row+py)*256+px;
      out->palette_indices[at]=id;out->atlas[at]=pixel?color(r.icon_palette()[id-128]):0;
    }
    DirectSceneFrame::Quad quad{0,row,size,size,float(x),float(y)-1,2+int((part.tile>>12)&3)*3,0,true};
    quad.layer=DirectSceneFrame::Layer::Actors;quad.color_math_eligible=((part.tile>>9)&7)>=4;
    out->quads.push_back(quad);row+=size;
  }
  return out;
}
}
