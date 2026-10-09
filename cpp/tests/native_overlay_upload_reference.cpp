// Complete original LOAD_OVERLAY_SPRITES, including both C4B1B8 rows and
// untouched VRAM. No DMA helper, source bank or destination is intercepted.
#include "native_encounter_source_fixture.hpp"
#include "eb/native/overlay_sprites.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/world_display_fade.hpp"
#include "generated_assets.hpp"
#include <algorithm>
namespace {
using namespace eb::native;
void check(bool value,const char *message) {
  if(!value)throw std::runtime_error(message);
}
void run(const eb::GameAssets &assets) {
  encounter_reference::Source source(assets);
  SpriteResources sprites(assets.image,sprite_catalog_layout(assets.version));
  OverlaySprites overlays(assets.image,assets.version,sprites);
  const auto rows=overlays.raw_uploads();
  check(!rows.empty()&&rows.size()<=16&&rows.size()%2==0,
        "Overlay loader lost its finite authored row plan");
  battle::PsiScratch scratch;
  for(unsigned i=0;i<scratch.bytes.size();++i)scratch.bytes[i]=std::uint8_t(i*113+37);
  const auto retained=scratch.bytes;
  WorldDisplayFade fade(WorldDisplayFadeState{0x80});
  for(unsigned pattern=0;pattern<3;++pattern) {
    battle::PsiDisplayState video;
    for(unsigned i=0;i<65536;++i) {
      const auto value=std::uint8_t(pattern?i*(pattern*31+17)+pattern*73:0);
      video.set_vram_byte(std::uint16_t(i),value);
      source.bus->video_ram[i]=value;
    }
    source.call(source.jp?0xc486d8:0xc4b26b);
    for(const auto &row:rows) {
      auto operation=video.begin_transfer({battle::PsiTransferKind::Vram,
          row.source_offset,row.byte_count,row.destination,0,row.bank,row.source_identity},
          scratch,fade);
      check(operation->advance()&&operation->complete()&&!operation->needs_publication(),
            "Forced-blank overlay row fabricated a publication");
    }
    check(video.vram()==source.bus->video_ram,
          "Complete LOAD_OVERLAY_SPRITES VRAM differs");
    check(scratch.bytes==retained&&!video.pending_bytes()&&video.pending().empty(),
          "Overlay rows replaced shared scratch or left an unpublished transfer");
  }
  check(source.nmis==0&&source.polls==0,
        "Forced-blank overlay helper acquired original NMI/input work");
  std::cout<<"PASS "<<(source.jp?"JP":"US")
      <<" complete LOAD_OVERLAY_SPRITES cases=3 rows="<<rows.size()
      <<" compared_video_bytes="<<3*65536<<" original_nmis=0 polls=0\n";
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try {
    for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
  }catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}
}
