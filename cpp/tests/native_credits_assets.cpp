// Runs the imported staff-text scene without linking any reference machinery.
#include "eb/native/cutscenes/credits.hpp"
#include "eb/asset_store.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <fstream>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::cutscenes;
void require(bool ok,const char* message) { if(!ok) throw std::runtime_error(message); }
void preview(const CreditsTextScene& scene, const CreditsResources& resources, const char* path) {
    const auto pixels=scene.indexed_canvas();
    std::ofstream out(path,std::ios::binary);
    require(bool(out),"Could not open native credits preview");
    out<<"P6\n256 224\n255\n";
    for(const auto pixel:pixels) {
        const auto color=resources.palette().at(pixel);
        for(unsigned shift:{0u,5u,10u}) {
            const unsigned channel=(color>>shift)&31;
            out.put(char((channel<<3)|(channel>>2)));
        }
    }
    require(bool(out),"Could not write native credits preview");
}
}
int main(int argc,char** argv) {
 try {
    if(argc<2 || argc>3) throw std::invalid_argument("Usage: native_credits_assets local.ebpak [preview.ppm]");
    auto assets=eb::load_game_assets(argv[1],eb::asset_profiles());
    auto resources=CreditsResources::import(assets.image,assets.version);
    CreditsTextScene scene(resources);
    const std::array<std::uint8_t,4> name=assets.version==eb::GameVersion::US ?
        std::array<std::uint8_t,4>{0x71,0x72,0x73,0x74} : std::array<std::uint8_t,4>{0x41,0x42,0x43,0x44};
    std::uint64_t publications=0,sampled_pixels=0,nonzero_pixels=0;
    bool wrote_preview=false;
    while(!scene.scroll_complete()) {
        publications+=scene.publish_next_row();
        scene.advance_tick(name);
        if(scene.state().ticks%32==0) {
            const auto pixels=scene.indexed_canvas();
            const auto visible=std::count_if(pixels.begin(),pixels.end(),[](auto p){return p!=0;});
            sampled_pixels+=pixels.size();nonzero_pixels+=visible;
            if(argc==3 && !wrote_preview && scene.state().ticks>=4096 && visible>500) {
                preview(scene,*resources,argv[2]);wrote_preview=true;
            }
        }
    }
    // PLAY_CREDITS stops scrolling before the terminal FF is fetched when a
    // nonempty player name contributes its original sixteen pixels of spacing.
    require(!scene.script_ended() && scene.state().cursor + 1 == resources->script().size(),
            "Native staff scene did not retain the original populated-name stop state");
    require(nonzero_pixels>0 && publications>500,"Native staff coverage was vacuous");
    const auto final_tiles=std::count_if(scene.tile_canvas().begin(),scene.tile_canvas().end(),[](auto tile){return tile!=0;});
    const auto final_pixels=scene.indexed_canvas();
    const auto final_visible=std::count_if(final_pixels.begin(),final_pixels.end(),[](auto pixel){return pixel!=0;});
    const auto final_state=scene.state();
    require(!scene.advance_tick(name) && scene.state()==final_state,"Stopped staff scene continued advancing");
    if(argc==3) require(wrote_preview,"Requested preview did not capture visible native text");
    std::cout<<(assets.version==eb::GameVersion::US?"US":"JP")<<" native-only staff scene ticks="<<scene.state().ticks
             <<" final_cursor="<<scene.state().cursor<<" script_ended="<<scene.script_ended()
             <<" final_nonzero_tiles="<<final_tiles<<" final_visible_pixels="<<final_visible
             <<" pending_rows="<<scene.pending_rows()<<" row_publications="<<publications<<" sampled_pixels="<<sampled_pixels
             <<" nontransparent_pixels="<<nonzero_pixels<<" original_image_sha256="<<eb::sha256(assets.image)<<'\n';
    return 0;
 } catch(const std::exception& e) {std::cerr<<e.what()<<'\n';return 1;}
}
