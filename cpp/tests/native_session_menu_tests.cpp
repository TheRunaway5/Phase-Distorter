#include "eb/native_session.hpp"
#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "generated_assets.hpp"
#include "native_session_fixture.hpp"
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <stdexcept>

namespace {
void check(bool value,const char *message){if(!value)throw std::runtime_error(message);}
void run(const eb::GameAssets &assets,unsigned mode) {
    auto archive=native_session_save(assets.version);auto saved=archive.load(0);
    saved.characters[0].values.current_hp=saved.characters[0].values.target_hp=100;
    if(mode==1)saved.characters[0].values.items={0x11,0x12};
    archive.save(0,saved,0);
    eb::NativeSession plain(assets.image,assets.version,archive.bytes(),1);
    eb::NativeSession sampled(assets.image,assets.version,archive.bytes(),1);
    std::shared_ptr<const eb::DirectSceneFrame> retained;
    std::vector<std::uint32_t> retained_pixels;
    unsigned observed{};
    sampled.observe_completed_frames([&](eb::PresentationFrame frame){
        ++observed;
        if(sampled.diagnostics().native_world_menu_active && !retained){
            retained=frame.scene;retained_pixels=eb::rasterize_direct_scene({retained,{}});
        }
    });
    auto frame=[&](std::uint16_t buttons){
        const auto before=sampled.diagnostics();
        for(unsigned width:{320u,398u,1024u,256u}){
            sampled.configure_presentation(width,false,true);(void)sampled.presentation_frame();
        }
        check(sampled.frames()==before.frames && sampled.steps()==before.steps &&
            sampled.diagnostics().master_clocks==before.master_clocks,"Menu sampling advanced gameplay/audio");
        const auto count=plain.advance_frame(buttons);
        check(count && sampled.advance_frame(buttons)==count,"Menu physical cadence differs");
        check(std::equal(plain.native_pixels().begin(),plain.native_pixels().end(),sampled.native_pixels().begin()),
            "Menu picture depends on sampling");
        check(plain.take_audio_samples()==sampled.take_audio_samples(),"Menu PCM depends on sampling");
    };
    auto idle=[&](unsigned count){while(count--)frame(0);};
    auto press=[&](std::uint16_t buttons){frame(buttons);idle(20);};
    idle(100);press(0x80);
    check(sampled.diagnostics().native_world_menus_opened==1 && sampled.diagnostics().native_world_menu_active,
        "Real A did not open the native command menu");
    if(mode==0){
        // Talk -> PSI; the first world ability is Lifeup alpha.
        press(0x400);press(0x80);press(0x80);
        for(unsigned i=0;i<500 && sampled.diagnostics().native_world_menu_active;++i)frame(i%8==0?0x80:0);
    } else if(mode==1){
        // Talk -> Goods -> Equip; Weapon -> Tee Ball Bat, then leave.
        press(0x100);press(0x400);press(0x80);press(0x80);
        press(0x400);press(0x80);press(0x8000);press(0x8000);
    } else {
        // Talk -> Goods -> Equip -> Status; inspect Recovery PSI help.
        press(0x100);press(0x400);press(0x400);press(0x80);press(0x80);
        press(0x400);press(0x80);press(0x8000);press(0x8000);press(0x8000);press(0x8000);
    }
    const auto returned=sampled.diagnostics();
    if(std::getenv("EB_SESSION_MENU_TRACE"))std::cerr<<"mode="<<mode<<" frames="<<sampled.frames()<<" opened="<<returned.native_world_menus_opened<<" completed="<<returned.native_world_menus_completed<<" active="<<returned.native_world_menu_active<<'\n';
    check(returned.native_world_menus_completed==1 && !returned.native_world_menu_active,
        "Native submenu did not return to its actual world caller");
    idle(120);
    const auto result=sampled.diagnostics();
    check(result.frames==returned.frames+120 && result.steps>returned.steps && result.cpu_instructions==0 &&
        result.native_world_menus_opened==1 && result.native_world_menus_completed==1 && !result.native_world_menu_active,
        "Menu return did not continue 120 real native world frames");
    check(observed==sampled.frames() && retained,"Menu omitted actual immutable publication");
    check(eb::rasterize_direct_scene({retained,{}})==retained_pixels,"Menu cleanup mutated a retained frame");
    check(std::equal(sampled.save_memory().begin(),sampled.save_memory().end(),archive.bytes().begin()),
        "Menu silently overwrote battery save");
    std::cout<<"PASS "<<assets.title<<" native "<<(mode==0?"PSI Lifeup":mode==1?"Equip change":"Status PSI help")
        <<" ->120 world frames; physical_frames="<<sampled.frames()<<" CPU=0 picture/PCM sampling identical\n";
}
}
int main(int argc,char **argv){if(argc<2)return 77;try{for(int i=1;i<argc;++i){const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
    if(const auto *mode=std::getenv("EB_SESSION_MENU_MODE"))run(assets,unsigned(std::stoul(mode)));else for(unsigned mode=0;mode<3;++mode)run(assets,mode);}}
catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}return 0;}
