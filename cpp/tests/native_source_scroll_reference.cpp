#include "eb/snes_bus.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <stdexcept>
using namespace eb;
using namespace eb::native::battle;
namespace {
unsigned checks{},cases{};
void require(bool ok,const char* message) {++checks;if(!ok)throw std::runtime_error(message);}
void hardware(SnesBus &source,const PsiDisplayState &native) {
  const auto view=source.scene_read_view();
  for(unsigned i=0;i<4;++i) {
    require(native.source_hardware_scroll()[i].x==view.background_scroll_x[i],"Horizontal source port intermediate state");
    require(native.source_hardware_scroll()[i].y==view.background_scroll_y[i],"Vertical source port intermediate state");
  }
}
void write(SnesBus &source,PsiDisplayState &native,unsigned layer,bool vertical,unsigned value) {
  source.write_byte(0x210d+2*layer+unsigned(vertical),std::uint8_t(value));
  native.write_source_scroll_port(layer,vertical,std::uint8_t(value));
  require(native.source_scroll_latch()==std::uint8_t(value),"Retained last source byte writer");
  hardware(source,native);
}
void publish_source(SnesBus &source,const std::array<PsiScroll,4>& positions) {
  for(unsigned i=0;i<4;++i)for(unsigned vertical=0;vertical<2;++vertical) {
    const auto value=vertical?positions[i].y:positions[i].x;
    source.write_byte(0x210d+2*i+vertical,std::uint8_t(value));
    source.write_byte(0x210d+2*i+vertical,std::uint8_t(value>>8));
  }
}
}
int main(int argc,char**argv) {try {
  if(argc<2)return 77;
  for(int argument=1;argument<argc;++argument) {
    const auto assets=load_game_assets(argv[argument],asset_profiles());
    SnesBus source(assets.image,assets.version);PsiDisplayState video;FrameDisplay frames(video);
    hardware(source,video);
    for(unsigned seed=0;seed<256;++seed) {
      for(unsigned layer=0;layer<4;++layer)video.staged_scroll[layer]={
        std::uint16_t(seed*257+layer*8179),std::uint16_t(seed*127+layer*6551)};
      const auto staged=video.staged_scroll;
      frames.update_world_screen();
      // The real UPDATE_SCREEN snapshot wins over later staging edits.
      video.staged_scroll[3].y^=0xffff;
      publish_source(source,staged);frames.commit_publication();hardware(source,video);
      require(video.scroll==staged,"Whole screen publication must preserve sixteen-bit logical offsets");
      require(video.source_scroll_latch()==std::uint8_t(staged[3].y>>8),"Actual final BG4 Y high-byte writer");
      const auto captured=video.source_hardware_scroll();const auto latch=video.source_scroll_latch();
      frames.commit_publication();
      require(captured==video.source_hardware_scroll()&&latch==video.source_scroll_latch(),"No pending screen means no source scroll port writes");
      for(unsigned low=0;low<256;++low) {
        write(source,video,2,true,low);
        require(video.scroll[2].y==source.scene_read_view().background_scroll_y[2],"Explicit BG3 low write exposes actual intermediate scroll");
        write(source,video,2,true,seed);
        require(video.scroll[2].y==((seed*256+low)&1023),"BG3 high write ten-bit vertical hardware semantics");
        ++cases;
      }
      // Mixed background axes exercise the horizontal fine-scroll recovery
      // and the shared latch across different PPU ports, without host seeding.
      for(unsigned layer=0;layer<4;++layer) {
        write(source,video,layer,false,seed^0xb7);
        write(source,video,(layer+1)&3,true,seed^0x69);
        write(source,video,layer,false,seed^0xd3);
      }
      require(video.staged_scroll[3].y==std::uint16_t(staged[3].y^0xffff),"Source port writes must preserve logical staging");
      video.publish_scroll();publish_source(source,video.staged_scroll);hardware(source,video);
      require(video.scroll==video.staged_scroll,"Ordinary publish_scroll retains its full logical values");
    }
    bool rejected{};const auto before=video.source_hardware_scroll();const auto latch=video.source_scroll_latch();
    try{video.write_source_scroll_port(4,true,1);}catch(const std::out_of_range&){rejected=true;}
    require(rejected&&before==video.source_hardware_scroll()&&latch==video.source_scroll_latch(),"Unknown source port rejects before mutation");
    std::cout<<assets.title<<" all65536 BG3 low/high pairs +256 actual screen snapshots/mixed shared-latch sequences PASS\n";
  }
  std::cout<<"PASS cases="<<cases<<" checks="<<checks<<'\n';
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
