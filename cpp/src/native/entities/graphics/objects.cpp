#include "eb/native/entities/graphics/objects.hpp"
#include <stdexcept>
#include <unordered_map>
namespace eb::native::entities::graphics {
void ObjectEmitter::clear() noexcept {
  count_=high_count_=0;high_buffer_=0x80;trailing_high_byte_=0;
  for(unsigned i=0;i<128;++i){frame_.bytes[i*4+1]=224;frame_.identities[i]=0;frame_.anchors[i]={};}
}
void ObjectEmitter::append(ObjectMap map,std::uint16_t x,std::uint16_t y,std::uint64_t identity,ObjectAnchor anchor) {
  if(identity&&!anchor.owned)anchor={std::int16_t(x),std::int16_t(y),true};
  if(count_==128)return;
  auto at=map.start;
  for(unsigned records=0;records<65536;++records){
    const unsigned offset=std::uint16_t(at-map.origin);
    if(offset>map.bytes.size()||5>map.bytes.size()-offset)
      throw std::out_of_range("Object spritemap escaped its declared content");
    const auto p=map.bytes.subspan(offset,5);
    if(p[0]==0x80){at=std::uint16_t(p[1]|unsigned(p[2])<<8);continue;}
    const auto py=std::uint16_t(y+std::int8_t(p[0])-1);
    if(py<224||py>=0xffe0){
      // Original writes tile/X before checking the high X byte. A rejected
      // entry therefore changes those bytes of the next still-hidden slot.
      frame_.bytes[count_*4+2]=p[1];frame_.bytes[count_*4+3]=p[2];
      const auto px=std::uint16_t(x+std::int8_t(p[3]));
      frame_.bytes[count_*4]=std::uint8_t(px);
      if(px<256||px>=0xff00){
        high_buffer_=std::uint8_t((high_buffer_>>1)|(px>=0xff00?0x80:0));
        const bool flush=high_buffer_&1;
        high_buffer_=std::uint8_t((high_buffer_>>1)|((p[4]&1)?0x80:0));
        if(flush){frame_.bytes[512+high_count_++]=high_buffer_;high_buffer_=0x80;}
        frame_.bytes[count_*4+1]=std::uint8_t(py);frame_.identities[count_]=identity;frame_.anchors[count_]=anchor;++count_;
        if(count_==128)return;
      }
    }
    if(p[4]&0x80)return;
    at=std::uint16_t(at+5);
  }
  throw std::logic_error("Object spritemap has no terminating record");
}
void ObjectEmitter::finish() noexcept {
  auto value=high_buffer_;
  if(value!=0x80){bool stop{};do{stop=value&2;value>>=2;}while(!stop);}
  if(high_count_<32)frame_.bytes[512+high_count_]=value;
  else trailing_high_byte_=value;
}
std::shared_ptr<const DirectSceneFrame> sample_objects(const ObjectFrame &objects,
    std::span<const std::uint8_t,65536> video,std::span<const std::uint16_t,256> palette,
    std::uint8_t object_size,std::uint64_t sequence,std::uint64_t scene,std::uint8_t mode) {
  // OBSEL's eight authored small/large pairs, including rectangular modes.
  constexpr unsigned widths[8][2]={{8,16},{8,32},{8,64},{16,32},{16,64},{32,64},{16,32},{16,32}};
  constexpr unsigned heights[8][2]={{8,16},{8,32},{8,64},{16,32},{16,64},{32,64},{32,64},{32,32}};
  constexpr int mode0[4]={2,5,8,11},mode1[4]={1,3,7,10},other[4]={1,3,5,7};
  const auto &priorities=(mode&7)==0?mode0:(mode&7)==1?mode1:other;
  auto out=std::make_shared<DirectSceneFrame>();out->width=256;out->frame=sequence;out->scene_identity=scene;
  out->atlas_width=1024;out->atlas_height=1;out->atlas.resize(1024);out->palette_indices.resize(1024,256);
  const unsigned base=(object_size&7)<<14,name=((object_size>>3)&3)+1;
  std::array<unsigned,224> counts{},tiles{};
  out->motions.push_back({}); // Unowned source OAM has stationary presentation.
  std::unordered_map<std::uint64_t,unsigned> groups;
  unsigned packed{};
  for(unsigned i=0;i<128;++i){
    const auto &raw=objects.bytes;const unsigned extra=(raw[512+i/4]>>((i&3)*2))&3;
    const unsigned w=widths[object_size>>5][extra>>1],h=heights[object_size>>5][extra>>1];
    int x=raw[i*4]|((extra&1)<<8);if(x>=256)x-=512;
    const unsigned y=raw[i*4+1],tile=raw[i*4+2],flags=raw[i*4+3],bank=flags&1?name*8192:0;
    bool visible{};for(unsigned py=0;py<224;++py)visible|=((py-y)&255)<h;
    if(!visible)continue;
    const unsigned u=(packed%16)*64,v=(packed/16)*64;++packed;
    if(v+h>out->atlas_height){out->atlas_height=v+h;out->atlas.resize(std::size_t(1024)*out->atlas_height);out->palette_indices.resize(out->atlas.size(),256);}
    for(unsigned screen_y=0;screen_y<224;++screen_y){
      const unsigned py=(screen_y-y)&255;if(py>=h)continue;
      if(++counts[screen_y]>32)continue;
      for(unsigned px=0;px<w;++px){
        const int screen_x=x+int(px);
        if(!(px&7)&&screen_x>-8&&screen_x<256&&++tiles[screen_y]>34)break;
        if(screen_x<0||screen_x>=256)continue;
        const unsigned sx=flags&0x40?w-1-px:px,sy=flags&0x80?h-1-py:py;
        const unsigned t=(((tile&0xf0)+(sy/8)*16)&0xf0)|((tile+sx/8)&15);
        const unsigned address=base+bank+t*32+(sy&7)*2;unsigned color{};
        for(unsigned plane=0;plane<4;++plane)color|=((video[std::uint16_t(address+(plane/2)*16+(plane&1))]>>(7-(sx&7)))&1)<<plane;
        const unsigned id=128+((flags>>1)&7)*16+color,at=(v+py)*1024+u+px;
        out->palette_indices[at]=std::uint16_t(id);
        if(color){const auto c=palette[id];const unsigned r=c&31,g=(c>>5)&31,b=(c>>10)&31;out->atlas[at]=0xff000000u|((r<<3|r>>2)<<16)|((g<<3|g>>2)<<8)|(b<<3|b>>2);}
      }
    }
    // OAM Y wraps modulo256. A top sprite can split across the bottom edge;
    // emit only visible runs while preserving original first-object order.
    unsigned motion{};
    const auto identity=objects.identities[i];const auto anchor=objects.anchors[i];
    if(identity&&anchor.owned){
      const auto [entry,inserted]=groups.try_emplace(identity,unsigned(out->motions.size()));motion=entry->second;
      if(inserted)out->motions.push_back({identity,float(anchor.x),float(anchor.y)});
      else if(out->motions[motion].x!=anchor.x||out->motions[motion].y!=anchor.y)
        throw std::logic_error("One selected actor has inconsistent physical object anchors");
    }
    for(int top:{int(y),int(y)-256})if(top<224&&top+int(h)>0){
      DirectSceneFrame::Quad q{u,v,w,h,float(x),float(top),priorities[(flags>>4)&3],motion,true};q.layer=DirectSceneFrame::Layer::Actors;q.color_math_eligible=((flags>>1)&7)>=4;out->quads.push_back(q);
    }
  }
  return out;
}
}
