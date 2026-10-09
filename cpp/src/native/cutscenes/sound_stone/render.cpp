#include "eb/native/cutscenes/sound_stone/render.hpp"
#include <stdexcept>

namespace eb::native::cutscenes::sound_stone {
namespace {
std::uint32_t color(unsigned p) {
  const unsigned r=p&31,g=(p>>5)&31,b=(p>>10)&31;
  return 0xff000000u|((r<<3|r>>2)<<16)|((g<<3|g>>2)<<8)|(b<<3|b>>2);
}
}
std::shared_ptr<const DirectSceneFrame> render(const DisplayView &view,
    BattleBackgroundSceneFrame background,const battle::BackgroundDisplayState &layout,
    std::span<const Sprite> sprites) {
  if(sprites.size()>128) throw std::out_of_range("Sound Stone objects exceed OAM capacity");
  ScenePalette palette;
  for(unsigned i=0;i<palette.size();++i) {
    const unsigned p=view.palette[i]; palette[i]={std::uint8_t(p&31),std::uint8_t((p>>5)&31),std::uint8_t((p>>10)&31)};
  }
  const unsigned primary=background.bitdepth==4?1:2,secondary=background.bitdepth==4?0:3;
  background.primary.horizontal_scroll=view.scroll[primary].x;
  background.primary.vertical_scroll=view.scroll[primary].y;
  if(!(view.hdma&0x20)) background.primary.axis=BattleDistortionAxis::None;
  if(background.secondary) {
    background.secondary->horizontal_scroll=view.scroll[secondary].x;
    background.secondary->vertical_scroll=view.scroll[secondary].y;
    if(!(view.hdma&0x40)) background.secondary->axis=BattleDistortionAxis::None;
  }
  if(!(view.hdma&4)) { background.effects.top_end=0; background.effects.bottom_start=224; }
  auto out=std::make_shared<DirectSceneFrame>(*background.draw_published_layers(palette,view.video,layout,256,
      view.frame,0x534f554e4453544full));
  unsigned row=out->atlas_height;
  for(const auto &sprite:sprites) out->atlas_height+=sprite.large?32:16;
  out->atlas.resize(std::size_t(out->atlas_width)*out->atlas_height);
  out->palette_indices.resize(out->atlas.size(),256);
  for(const auto &sprite:sprites) {
    const unsigned size=sprite.large?32:16;
    for(unsigned y=0;y<size;++y) for(unsigned x=0;x<size;++x) {
      const unsigned sx=sprite.flags&0x40?size-1-x:x,sy=sprite.flags&0x80?size-1-y:y;
      const unsigned tile=(unsigned(sprite.flags&1)<<8)|
          (((unsigned(sprite.tile&0xf0)+(sy/8)*16)&0xf0))|((sprite.tile+sx/8)&15);
      const unsigned start=0x4000+tile*32; unsigned pixel{};
      for(unsigned plane=0;plane<4;++plane)
        pixel|=((view.video[std::uint16_t(start+(sy%8)*2+(plane/2)*16+(plane&1))]>>(7-sx%8))&1u)<<plane;
      const unsigned id=128+((sprite.flags>>1)&7)*16+pixel,at=(row+y)*out->atlas_width+x;
      out->palette_indices[at]=std::uint16_t(id); out->atlas[at]=pixel?color(view.palette[id]):0;
    }
    const int x=sprite.x<0x8000?int(sprite.x):int(sprite.x)-65536;
    // OAM's Y word is accepted before byte truncation. Negative Y wraps in
    // the hardware's240-line object coordinate domain at visible capture.
    const int y=sprite.y<0x8000?int(sprite.y):int(sprite.y)-65536;
    constexpr int object_priority[]{1,3,7,10};
    DirectSceneFrame::Quad quad{0,row,size,size,float(x),float(y),object_priority[(sprite.flags>>4)&3],0,true};
    quad.layer=DirectSceneFrame::Layer::Actors;quad.color_math_eligible=((sprite.flags>>1)&7)>=4;
    out->quads.push_back(quad);row+=size;
  }
  return out;
}
}
