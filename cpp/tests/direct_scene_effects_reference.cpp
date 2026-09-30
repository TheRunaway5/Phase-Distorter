// Independent legacy pixel compositor is an oracle only. The native renderer
// receives immutable layer pictures and semantic display policy, never a bus.
#include "eb/direct_scene.hpp"
#include "eb/game_scene_renderer.hpp"
#include "eb/snes_bus.hpp"
#include "eb/native/palette_transition.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>
namespace {
using Frame=eb::DirectSceneFrame;
std::uint64_t checks{};
unsigned bits(const auto &a) {unsigned v=0;for(unsigned i=0;i<a.size();++i)if(a[i])v|=1u<<i;return v;}
std::uint32_t argb(unsigned c) {return eb::native::palette_argb({std::uint8_t(c&31),std::uint8_t((c>>5)&31),std::uint8_t((c>>10)&31)});}
void run(eb::GameVersion region,unsigned width) {
  auto bus=std::make_unique<eb::SnesBus>(std::vector<std::uint8_t>(0x300000),region);
  eb::GameSceneRenderer legacy;
  std::array<std::uint8_t,64> regs{};
  regs[0]=15;regs[5]=0; // four actual2bpp layers
  regs[7]=4;regs[8]=8;regs[9]=12;regs[10]=16;
  regs[11]=0x88;regs[12]=0x88;
  for(unsigned i=0;i<256;++i){const unsigned c=((i*11)&31)|(((i*7)&31)<<5)|(((i*3)&31)<<10);bus->palette_ram[i*2]=c;bus->palette_ram[i*2+1]=c>>8;}
  for(unsigned layer=0;layer<4;++layer)
    for(unsigned y=0;y<32;++y)for(unsigned x=0;x<32;++x){
      const unsigned tile=((x+y+layer)&7)|(((x+layer)&7)<<10)|(((x^y)&1)<<13);
      const unsigned at=(layer+1)*0x800+(y*32+x)*2;
      bus->video_ram[at]=tile;bus->video_ram[at+1]=tile>>8;
    }
  for(unsigned tile=0;tile<8;++tile)for(unsigned y=0;y<8;++y){bus->video_ram[0x8000+tile*16+y*2]=std::uint8_t(0xa5^(tile*19+y*5));bus->video_ram[0x8001+tile*16+y*2]=std::uint8_t(0x71^(tile*7+y*21));}
  auto frame=std::make_shared<Frame>();frame->width=width;frame->atlas_width=width;
  auto view=bus->scene_read_view(); view.ppu_registers=regs;
  const int origin=-int(width-256)/2;
  const auto obj=[&](int x,unsigned y){
    if(((x+1024)/5+y/7)%3==0)return eb::PpuPixel{};
    const bool high=((x+1024)/11+y/13)&1,math=((x+1024)/17+y/19)&1;
    return eb::PpuPixel{std::uint16_t((x*3+y*11)&32767),high?10:3,4,math,193};
  };
  for(unsigned layer=0;layer<5;++layer)for(unsigned high=0;high<2;++high)for(unsigned math=0;math<(layer==4?2u:1u);++math){
    const unsigned v=frame->atlas_height;
    frame->atlas_height+=224;frame->atlas.resize(std::size_t(width)*frame->atlas_height);
    int priority=-1;
    for(unsigned y=0;y<224;++y)for(unsigned x=0;x<width;++x){
      const auto p=layer==4?obj(origin+int(x),y):view.sample_background_pixel(layer,origin+int(x),y+1);
      if(p.priority<0 || (layer==4&&p.math!=bool(math)))continue;
      const unsigned upper=layer==4?(p.priority==10):((p.priority==7)||(p.priority==8)||(p.priority==9)||(p.priority==10));
      // Mode0 priorities are BG1 7/10,BG2 6/9,BG3 1/4,BG4 0/3.
      const int highs[4]={10,9,4,3};
      const bool h=layer==4?upper:p.priority==highs[layer];
      if(h!=bool(high))continue;
      priority=p.priority;frame->atlas[(v+y)*width+x]=argb(p.color);
    }
    if(priority>=0){frame->quads.push_back({0,v,width,224,0,0,priority,0,layer==4});frame->quads.back().layer=Frame::Layer(layer);frame->quads.back().color_math_eligible=layer!=4||math;}
  }
  for(unsigned sample=0;sample<96;++sample){
    auto &e=frame->effects.emplace();
    regs[0]=e.brightness=(sample*7)%16;
    for(unsigned l=0;l<5;++l){e.main[l]=(sample+l)%4!=0;e.sub[l]=(sample+l*3)%3!=0;}
    for(unsigned l=0;l<6;++l){e.math[l]=(sample+l)%3!=0;e.masked[l]=(sample+l*5)%4!=0;}
    e.use_subscreen=sample&1;e.subtract=sample&2;e.half=sample&4;e.invert=sample&8;
    e.clip=Frame::WindowPolicy((sample/3)%4);e.prevent=Frame::WindowPolicy((sample/5)%4);
    e.fixed={std::uint8_t(sample&31),std::uint8_t((sample*3)&31),std::uint8_t((sample*7)&31)};
    e.backdrop=argb(view.palette(0));
    regs[0x2c]=bits(e.main);regs[0x2d]=bits(e.sub);regs[0x2e]=regs[0x2f]=bits(e.masked)&31;
    regs[0x30]=(unsigned(e.clip)<<6)|(unsigned(e.prevent)<<4)|(e.use_subscreen?2:0);
    regs[0x31]=bits(e.math)|(e.subtract?128:0)|(e.half?64:0);
    regs[0x23]=regs[0x24]=regs[0x25]=0;
    for(unsigned l=0;l<6;++l)if(e.masked[l])regs[0x23+l/2]|=(e.invert?10:15)<<((l&1)*4);
    regs[0x2a]=e.invert?0:0x55;regs[0x2b]=e.invert?0:5;
    view.fixed_color=e.fixed[0]|e.fixed[1]<<5|e.fixed[2]<<10;
    for(unsigned y=0;y<224;++y)e.windows[y]={std::uint8_t((y+sample*3)%129),std::uint8_t(128+(y*3+sample)%128),std::uint8_t((y*5+sample)%256),std::uint8_t((y+sample*7)%256)};
    const auto actual=eb::rasterize_direct_scene({frame,{}});
    for(unsigned y=0;y<224;++y){for(unsigned k=0;k<4;++k)regs[0x26+k]=e.windows[y][k];const auto current=view;
      for(unsigned x=0;x<width;++x){const auto expected=legacy.compose_presentation_pixel(current,origin+int(x),y,obj(origin+int(x),y),false);++checks;
        if(actual[y*width+x]!=expected)throw std::runtime_error("Native effect pixel differs sample="+std::to_string(sample)+" x="+std::to_string(x)+" y="+std::to_string(y)+" actual="+std::to_string(actual[y*width+x])+" expected="+std::to_string(expected));}
    }
  }
}
}
int main(){try{for(auto region:{eb::GameVersion::US,eb::GameVersion::JP})for(unsigned width:{256u,398u,522u})run(region,width);std::cout<<"Direct scene effect reference: "<<checks<<" pixel comparisons\n";}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
