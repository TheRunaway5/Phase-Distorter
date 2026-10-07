#include "eb/native_session.hpp"
#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "eb/native/battle/actions/resources.hpp"
#include "eb/native/dialogue/substitution_resources.hpp"
#include "generated_assets.hpp"
#include "native_session_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
namespace {
void check(bool v,const char *m){if(!v)throw std::runtime_error(m);}
void run(const eb::GameAssets &assets) {
    auto archive=native_session_save(assets.version);auto saved=archive.load(0);
    auto items=eb::native::dialogue::SubstitutionResources::import(assets.image,assets.version);
    auto actions=eb::native::battle::actions::Resources::import(assets.image,assets.version);
    unsigned item{};
    for(unsigned i=1;i<items->item_count();++i)
        if(actions->kind(items->item_effect(i))==eb::native::battle::actions::Kind::EAT_FOOD &&
            (items->item_properties(i).flags&0x80) && (items->item_properties(i).type&0x30)==0x20) {item=i;break;}
    check(item,"Actual regional food catalog omitted test item");
    saved.characters[0].values.items[0]=std::uint8_t(item);
    saved.characters[0].values.current_hp=saved.characters[0].values.target_hp=100;
    archive.save(0,saved,0);
    eb::NativeSession plain(assets.image,assets.version,archive.bytes(),1);
    eb::NativeSession sampled(assets.image,assets.version,archive.bytes(),1);
    auto frame=[&](std::uint16_t buttons) {
        const auto before=sampled.diagnostics();
        for(unsigned width:{320u,398u,1024u,256u}) {
            sampled.configure_presentation(width,false,true);(void)sampled.presentation_frame();
        }
        check(sampled.frames()==before.frames&&sampled.steps()==before.steps&&sampled.diagnostics().master_clocks==before.master_clocks,
            "Item menu presentation advanced native gameplay/audio");
        const auto count=plain.advance_frame(buttons);check(count&&sampled.advance_frame(buttons)==count,"Item action frame cadence differs");
        check(std::equal(plain.native_pixels().begin(),plain.native_pixels().end(),sampled.native_pixels().begin()),
            "Item action pictures depend on presentation sampling");
        check(plain.take_audio_samples()==sampled.take_audio_samples(),"Item action PCM depends on presentation sampling");
    };
    auto idle=[&](unsigned count){while(count--)frame(0);};
    auto press=[&](std::uint16_t button){frame(button);idle(20);};
    idle(100);press(0x80);press(0x100);press(0x80);press(0x80);press(0x80);
    for(unsigned i=0;i<500 && !sampled.diagnostics().native_item_uses_completed;++i) {
        // Source text and prompts receive genuine press/release input.
        frame(i%8==0?0x80:0);
    }
    const auto used=sampled.diagnostics();
    check(used.native_item_uses_started==1&&used.native_item_uses_completed==1,
        "Real Goods Use did not complete its native item action");
    idle(60);
    check(sampled.diagnostics().native_world_menus_opened==1 && sampled.diagnostics().native_world_menus_completed==1 &&
        !sampled.diagnostics().native_world_menu_active && sampled.diagnostics().cpu_instructions==0,
        "World item action did not return to the native world loop");
    check(std::equal(sampled.save_memory().begin(),sampled.save_memory().end(),archive.bytes().begin()),
        "Item action silently overwrote battery save");
    std::cout<<"PASS "<<assets.title<<" native Continue -> Goods -> food Use -> world; item="<<item
        <<" physical_frames="<<sampled.frames()<<" CPU=0 picture/PCM sampling identical\n";
}
}
int main(int argc,char **argv){if(argc<2)return 77;try{for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));}
catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}return 0;}
