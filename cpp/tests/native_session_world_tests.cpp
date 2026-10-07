#include "eb/native_session.hpp"
#include "eb/direct_scene.hpp"
#include "eb/asset_store.hpp"
#include "generated_assets.hpp"
#include "native_session_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
namespace {
void require(bool value,const char *message) { if(!value) throw std::runtime_error(message); }
void run(const eb::GameAssets &assets,std::uint16_t entry) {
    const auto archive=native_session_save(assets.version);
    eb::NativeSession plain(assets.image,assets.version,archive.bytes(),1);
    eb::NativeSession sampled(assets.image,assets.version,archive.bytes(),1);
    std::shared_ptr<const eb::DirectSceneFrame> retained;
    std::vector<std::uint32_t> retained_pixels;
    unsigned observed=0;
    sampled.observe_completed_frames([&](eb::PresentationFrame frame) {
        ++observed;
        if(sampled.diagnostics().native_world_menu_active && !retained) {
            retained=frame.scene; retained_pixels=eb::rasterize_direct_scene({retained,{}});
        }
    });
    auto advance=[&](std::uint16_t buttons) {
        const auto before=sampled.diagnostics();
        for(unsigned width:{320u,398u,1024u,256u}) {
            sampled.configure_presentation(width,false,true);
            (void)sampled.presentation_frame();
        }
        require(sampled.frames()==before.frames && sampled.steps()==before.steps &&
            sampled.diagnostics().master_clocks==before.master_clocks,"World presentation advanced gameplay/audio");
        const auto frames=plain.advance_frame(buttons);
        require(frames && sampled.advance_frame(buttons)==frames,"World physical boundary differs");
        require(std::equal(plain.native_pixels().begin(),plain.native_pixels().end(),sampled.native_pixels().begin()),
            "World menu picture depends on presentation sampling");
        require(plain.steps()==sampled.steps() && plain.diagnostics().master_clocks==sampled.diagnostics().master_clocks,
            "World menu input/audio cadence depends on presentation sampling");
    };
    for(unsigned i=0;i<100;++i)advance(0);
    advance(entry);
    for(unsigned i=0;i<20;++i)advance(0);
    require(sampled.diagnostics().native_world_menus_opened==1 && sampled.diagnostics().native_world_menu_active,
        "Desktop native MainLoop did not open its actual world menu");
    // Keep source B held through the actual poll, then release before reuse.
    for(unsigned i=0;i<20;++i)advance(0x8000);
    for(unsigned i=0;i<20;++i)advance(0);
    const auto result=sampled.diagnostics();
    require(result.native_world_menus_completed==1 && !result.native_world_menu_active,
        "Native menu cleanup did not return to the desktop world loop");
    require(observed==sampled.frames() && result.cpu_instructions==0 && bool(retained),
        "Native world menu omitted actual publication or used gameplay CPU");
    require(eb::rasterize_direct_scene({retained,{}})==retained_pixels,
        "Later menu cleanup mutated its retained frame");
    require(plain.take_audio_samples()==sampled.take_audio_samples(),"World menu sampling changed actual audio");
    require(std::equal(sampled.save_memory().begin(),sampled.save_memory().end(),archive.bytes().begin()),
        "Native menu silently overwrote battery save");
    std::cout<<"PASS integrated "<<assets.title<<" world menu input="<<entry
        <<" actual_frames="<<sampled.frames()<<" immutable picture/input/audio\n";
}
}
int main(int argc,char **argv) {
    if(argc<2)return 77;
    try {for(int i=1;i<argc;++i) {
        const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
        for(auto button:{std::uint16_t(0x0080),std::uint16_t(0x8000),std::uint16_t(0x2000)})run(assets,button);
    }}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}
    return 0;
}
