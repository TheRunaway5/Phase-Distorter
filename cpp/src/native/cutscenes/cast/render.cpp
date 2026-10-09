#include "eb/native/cutscenes/cast/render.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::cutscenes::cast {
namespace {
std::uint32_t color(unsigned p){const unsigned r=p&31,g=(p>>5)&31,b=(p>>10)&31;return 0xff000000u|((r<<3|r>>2)<<16)|((g<<3|g>>2)<<8)|(b<<3|b>>2);}
}
std::shared_ptr<const DirectSceneFrame> render(const DisplayView &view,BattleBackgroundSceneFrame background,const battle::BackgroundDisplayState &layout) {
  if(background.bitdepth!=4||(layout.mode&7)!=1)throw std::logic_error("Cast requires its actual Mode1 background");
  ScenePalette colors;for(unsigned i=0;i<colors.size();++i){const unsigned p=view.palette[i];colors[i]={std::uint8_t(p&31),std::uint8_t((p>>5)&31),std::uint8_t((p>>10)&31)};}
  background.primary.horizontal_scroll=view.scroll[1].x;background.primary.vertical_scroll=view.scroll[1].y;
  if(!(view.hdma&0x20))background.primary.axis=BattleDistortionAxis::None;
  if(background.secondary){background.secondary->horizontal_scroll=view.scroll[0].x;background.secondary->vertical_scroll=view.scroll[0].y;if(!(view.hdma&0x40))background.secondary->axis=BattleDistortionAxis::None;}
  if(!(view.hdma&4)){background.effects.top_end=0;background.effects.bottom_start=224;}
  auto out=std::make_shared<DirectSceneFrame>(*background.draw_published_layers(colors,view.video,layout,256,view.frame,0x43415354));
  const auto objects=view.raw_objects?entities::graphics::sample_objects(*view.raw_objects,view.video,view.palette,
      view.object_size,view.frame,0x43415354,layout.mode):view.world_objects;
  if(objects&&(objects->width!=256||objects->atlas_width>4096||objects->atlas_height>4096||objects->atlas.size()!=std::size_t(objects->atlas_width)*objects->atlas_height||
      (!objects->palette_indices.empty()&&objects->palette_indices.size()!=objects->atlas.size())||(objects->palette_indices.empty()&&!objects->quads.empty())))throw std::logic_error("Cast objects lack their actual immutable publication");
  // Repack only the immutable capture, retaining each quad's motion/layer and
  // raw palette identity. Current display colors are sampled independently of
  // the earlier object selection, just as CGRAM can change without OAM DMA.
  const unsigned first=out->atlas_height,width=objects?std::max(256u,objects->atlas_width):256u;
  if(width!=out->atlas_width){std::vector<std::uint32_t> pixels(std::size_t(width)*first);std::vector<std::uint16_t> ids(pixels.size(),256);
    for(unsigned y=0;y<first;++y){std::copy_n(out->atlas.begin()+y*out->atlas_width,out->atlas_width,pixels.begin()+y*width);std::copy_n(out->palette_indices.begin()+y*out->atlas_width,out->atlas_width,ids.begin()+y*width);}out->atlas=std::move(pixels);out->palette_indices=std::move(ids);out->atlas_width=width;}
  const unsigned object_row=first+448;out->atlas_height=object_row+(objects?objects->atlas_height:0);out->atlas.resize(std::size_t(width)*out->atlas_height);out->palette_indices.resize(out->atlas.size(),256);
  const unsigned map=unsigned(layout.maps[2]&0xfc)<<9,graphics=(layout.graphics[1]&15)<<13;
  const auto word=[&](unsigned at){return unsigned(view.video[std::uint16_t(at)])|(unsigned(view.video[std::uint16_t(at+1)])<<8);};
  for(unsigned y=0;y<224;++y)for(unsigned x=0;x<256;++x){const unsigned sx=(x+view.scroll[2].x)&255,sy=(y+1+view.scroll[2].y)&255;
    const unsigned entry=word(map+((sy/8)*32+sx/8)*2),tx=entry&0x4000?7-sx%8:sx%8,ty=entry&0x8000?7-sy%8:sy%8;
    const unsigned start=graphics+(entry&1023)*16+ty*2,pixel=((view.video[std::uint16_t(start)]>>(7-tx))&1)|(((view.video[std::uint16_t(start+1)]>>(7-tx))&1)<<1);
    if(pixel){const unsigned id=((entry>>10)&7)*4+pixel,at=(first+((entry>>13)&1)*224+y)*width+x;out->atlas[at]=color(view.palette[id]);out->palette_indices[at]=std::uint16_t(id);}}
  for(unsigned high=0;high<2;++high){DirectSceneFrame::Quad quad{0,first+high*224,256,224,0,0,high?((layout.mode&8)?11:2):0,0,false};quad.layer=DirectSceneFrame::Layer::Background3;out->quads.push_back(quad);}
  if(objects){const unsigned motion=unsigned(out->motions.size());out->motions.insert(out->motions.end(),objects->motions.begin(),objects->motions.end());
    for(unsigned y=0;y<objects->atlas_height;++y)for(unsigned x=0;x<objects->atlas_width;++x){const unsigned input=y*objects->atlas_width+x,at=(object_row+y)*width+x,id=objects->palette_indices.empty()?256:objects->palette_indices[input];out->palette_indices[at]=std::uint16_t(id);out->atlas[at]=objects->atlas[input]&&id<256?color(view.palette[id]):objects->atlas[input];}
    for(auto quad:objects->quads)if(quad.layer==DirectSceneFrame::Layer::Actors){quad.v+=object_row;quad.motion=quad.motion<objects->motions.size()?motion+quad.motion:0;out->quads.push_back(quad);}}
  return out;
}
}
