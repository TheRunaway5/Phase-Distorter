#include "eb/native/cutscenes/ending/render.hpp"
#include "eb/native/entities/graphics/objects.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::cutscenes::ending {
namespace {
std::uint32_t color(unsigned packed) {
  const unsigned r=packed&31,g=(packed>>5)&31,b=(packed>>10)&31;
  return 0xff000000u|((r<<3|r>>2)<<16)|((g<<3|g>>2)<<8)|(b<<3|b>>2);
}
}
std::shared_ptr<const DirectSceneFrame> render(const DisplayView &view,const battle::BackgroundDisplayState &layout) {
  if((layout.mode&7)!=1)throw std::logic_error("Credits capture requires its actual Mode1 display");
  auto out=std::make_shared<DirectSceneFrame>();
  // Retained hardware OAM samples the current physical tiles and colors.
  // Each capture owns its pixels; later transfers leave older frames intact.
  const auto objects=view.raw_objects?entities::graphics::sample_objects(*view.raw_objects,
      view.video,view.palette,view.object_size,view.frame,0x43524544495453ull,layout.mode):view.world_objects;
  if(objects&&(objects->width!=256||objects->atlas_width>4096||objects->atlas_height>4096||
      objects->atlas.size()!=std::size_t(objects->atlas_width)*objects->atlas_height||
      (!objects->palette_indices.empty()&&objects->palette_indices.size()!=objects->atlas.size())||
      (objects->palette_indices.empty()&&!objects->quads.empty())))
    throw std::logic_error("Credits require the actual selected object publication");
  out->width=256;out->atlas_width=objects?std::max(256u,objects->atlas_width):256;
  out->atlas_height=6*224+(objects?objects->atlas_height:0);out->frame=view.frame;out->scene_identity=0x43524544495453ull;
  out->atlas.resize(std::size_t(out->atlas_width)*out->atlas_height);out->palette_indices.resize(out->atlas.size(),256);
  const auto word=[&](unsigned at){return unsigned(view.video[std::uint16_t(at)])|(unsigned(view.video[std::uint16_t(at+1)])<<8);};
  for(unsigned plane=0;plane<3;++plane) {
    const unsigned size=layout.maps[plane]&3,map=unsigned(layout.maps[plane]&0xfc)<<9;
    const unsigned graphics=((layout.graphics[plane/2]>>((plane&1)*4))&15)<<13;
    const unsigned tile_size=layout.mode&(0x10u<<plane)?16:8;
    const unsigned depth=plane==2?2:4,width=(size&1?64:32)*tile_size,height=(size&2?64:32)*tile_size;
    for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x) {
      const unsigned sx=(x+view.scroll[plane].x)&(width-1),sy=(y+1+view.scroll[plane].y)&(height-1);
      const unsigned tile_x=sx/tile_size,tile_y=sy/tile_size;
      const unsigned page=(tile_x/32)+((tile_y/32)*(width/tile_size/32));
      const unsigned entry=word(map+page*0x800+((tile_y%32)*32+tile_x%32)*2);
      const unsigned tx=entry&0x4000?tile_size-1-(sx%tile_size):sx%tile_size;
      const unsigned ty=entry&0x8000?tile_size-1-(sy%tile_size):sy%tile_size;
      const unsigned tile=((entry&1023)+tx/8+(ty/8)*16)&1023;
      const unsigned start=graphics+tile*depth*8+(ty%8)*2;unsigned pixel{};
      for(unsigned bit=0;bit<depth;++bit)pixel|=((view.video[std::uint16_t(start+(bit/2)*16+(bit&1))]>>(7-tx%8))&1)<<bit;
      if(!pixel)continue;
      const unsigned id=((entry>>10)&7)*(1u<<depth)+pixel;
      const unsigned at=((plane*2+((entry>>13)&1))*224+y)*out->atlas_width+x;
      out->palette_indices[at]=std::uint16_t(id);out->atlas[at]=color(view.palette[id]);
    }
    for(unsigned high=0;high<2;++high) {
      const int priority=plane==0?(high?9:6):plane==1?(high?8:5):high?((layout.mode&8)?11:2):0;
      DirectSceneFrame::Quad quad{0,(plane*2+high)*224,256,224,0,0,priority,0,false};
      quad.layer=DirectSceneFrame::Layer(plane);out->quads.push_back(quad);
    }
  }
  if(objects) {
    constexpr unsigned first_row=6*224;
    for(unsigned y=0;y<objects->atlas_height;++y) {
      std::copy_n(objects->atlas.begin()+std::size_t(y)*objects->atlas_width,objects->atlas_width,
          out->atlas.begin()+std::size_t(first_row+y)*out->atlas_width);
      if(!objects->palette_indices.empty())
        std::copy_n(objects->palette_indices.begin()+std::size_t(y)*objects->atlas_width,objects->atlas_width,
            out->palette_indices.begin()+std::size_t(first_row+y)*out->atlas_width);
    }
    out->motions.push_back({0,0,0});
    out->motions.insert(out->motions.end(),objects->motions.begin(),objects->motions.end());
    for(auto quad:objects->quads)if(quad.layer==DirectSceneFrame::Layer::Actors) {
      quad.v+=first_row;quad.motion=quad.motion<objects->motions.size()?quad.motion+1:0;
      out->quads.push_back(quad);
    }
  }
  return out;
}
}
