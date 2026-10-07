#include "native_session_fixture.hpp"
#include "eb/native_session.hpp"
#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string_view>
namespace {
void check(bool value,const char *message) {if(!value)throw std::runtime_error(message);}
void run(const eb::GameAssets &assets,unsigned x,unsigned y,const char *export_path,bool instant) {
    auto archive=native_session_save(assets.version);auto saved=archive.load(0);
    saved.game.leader_x=x;saved.game.leader_y=y;
    // Source instant admission uses offense/speed; level99 makes weak enemies
    // flee before contact. Keep the ordinary authored approach at level1.
    saved.characters[0].values.level=1;
    saved.characters[0].values.speed=saved.characters[0].values.base_speed=instant?200:0;
    if(instant) saved.characters[0].values.offense=saved.characters[0].values.base_offense=244;
    archive.save(0,saved,0);
    eb::NativeSession baseline(assets.image,assets.version,archive.bytes(),1);
    eb::NativeSession sampled(assets.image,assets.version,archive.bytes(),1);
    std::uint64_t observed{};bool battle_screen{};std::shared_ptr<const eb::DirectSceneFrame> retained;
    std::vector<std::uint32_t> retained_pixels;
    sampled.observe_completed_frames([&](eb::PresentationFrame frame) {
        ++observed;
        battle_screen|=bool(sampled.diagnostics().native_battle_mode_flag);
        if(!retained && (instant || sampled.diagnostics().native_battle_mode_flag) && frame.scene) {
            retained=frame.scene;retained_pixels=eb::rasterize_direct_scene({retained,{}});
        }
    });
    unsigned after_return{};
    for(unsigned call=0;call<3000;++call) {
        const auto before=sampled.diagnostics();
        for(unsigned width:{256u,320u,398u,1024u,256u}) {
            sampled.configure_presentation(width,false,true);(void)sampled.presentation_frame();
            const auto state=sampled.diagnostics();
            check(state.frames==before.frames && state.steps==before.steps &&
                  state.master_clocks==before.master_clocks &&
                  state.native_encounters_completed==before.native_encounters_completed,
                  "Battle presentation sampling changed simulation/audio");
        }
        // Real controller taps leave a release interval after instant text
        // closes. Rapid A taps legitimately reopen the overworld menu there.
        const bool tap = instant ? call % 16 == 0 : !(call & 1);
        const auto buttons=std::uint16_t(!after_return && before.native_battle_mode && tap?0x80:0);
        const auto count=baseline.advance_frame(buttons);
        check(count && sampled.advance_frame(buttons)==count,"Native encounter frame receipts differ");
        const auto actual=sampled.diagnostics(),expected=baseline.diagnostics();
        check(actual.frames==expected.frames && actual.steps==expected.steps &&
              actual.master_clocks==expected.master_clocks &&
              actual.native_battle_mode==expected.native_battle_mode &&
              actual.native_battle_mode_flag==expected.native_battle_mode_flag &&
              actual.native_encounters_started==expected.native_encounters_started &&
              actual.native_encounters_completed==expected.native_encounters_completed,
              "Sampling changed encounter/menu/action/outcome progress");
        check(std::equal(baseline.native_pixels().begin(),baseline.native_pixels().end(),sampled.native_pixels().begin()),
              "Sampling changed the canonical native battle picture");
        check(baseline.take_audio_samples()==sampled.take_audio_samples(),"Sampling changed battle PCM audio");
        check(actual.cpu_instructions==0 && !actual.machine_debug_available,"Native battle used a gameplay machine");
        if(actual.native_encounters_completed && ++after_return==120) {
            check(!actual.native_battle_mode && actual.native_encounters_started==1 &&
                  actual.native_encounters_completed==1 && observed==actual.frames,
                  "Encounter did not return to a live world with genuine frame receipts");
            check(battle_screen!=instant,"Encounter did not execute the selected ordinary/instant route");
            check(retained && eb::rasterize_direct_scene({retained,{}})==retained_pixels,
                  "Later gameplay mutated a retained battle frame");
            check(std::equal(sampled.save_memory().begin(),sampled.save_memory().end(),archive.bytes().begin()),
                  "Encounter silently overwrote the battery archive");
            if(export_path) {
                std::ofstream out(export_path,std::ios::binary);
                const auto bytes=archive.bytes();out.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());
                out.close();check(bool(out),"Could not export the requested synthetic encounter fixture");
            }
            std::cout<<"PASS native Continue -> overworld encounter -> "
                     <<(instant?"instant victory":"command menu -> actions -> victory")<<" -> map return: "
                     <<assets.title<<" physical_frames="<<actual.frames<<" CPU=0; sampling and PCM identical\n";
            return;
        }
    }
    throw std::runtime_error("Native session did not complete the actual encountered battle");
}
}
int main(int argc,char**argv) {
    if(argc<2)return 77;
    try {
        const auto assets=eb::load_game_assets(argv[1],eb::asset_profiles());
        const bool japanese=assets.version==eb::GameVersion::JP;
        const bool instant=argc==3 && std::string_view(argv[2])=="--instant";
        if((argc==3 && !instant) || argc>5)throw std::runtime_error("Expected PACK [--instant | X Y [SYNTHETIC_SAVE_EXPORT]]");
        const unsigned x=argc>=4?std::stoul(argv[2]):japanese?1632:1184;
        const unsigned y=argc>=4?std::stoul(argv[3]):japanese?288:608;
        check(x<=0xffff && y<=0xffff,"Fixture coordinates leave the source word domain");
        run(assets,x,y,argc==5?argv[4]:nullptr,instant);
    }catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}
}
