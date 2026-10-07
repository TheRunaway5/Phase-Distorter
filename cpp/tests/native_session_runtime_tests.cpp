#include "eb/native_session.hpp"
#include "eb/direct_scene.hpp"
#include "eb/native/saves/archive.hpp"
#include "eb/asset_store.hpp"
#include "generated_assets.hpp"
#include "native_session_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
namespace {
void check(bool value,const char *message) { if(!value) throw std::runtime_error(message); }
void run(const eb::GameAssets &assets) {
    const auto archive=native_session_save(assets.version);
    eb::NativeSession baseline(assets.image,assets.version,archive.bytes(),1);
    eb::NativeSession sampled(assets.image,assets.version,archive.bytes(),1);
    unsigned observed=0;std::shared_ptr<const eb::DirectSceneFrame> retained;
    std::vector<std::uint32_t> retained_pixels;
    std::uint64_t retained_frame{};
    sampled.observe_completed_frames([&](eb::PresentationFrame frame) {
        ++observed; if(!retained && frame.scene) {
            retained=frame.scene; retained_frame=retained->frame;
            retained_pixels=eb::rasterize_direct_scene({retained,{}});
        }
    });
    for(unsigned frame=0;frame<240;++frame) {
        const auto before=sampled.diagnostics();
        for(unsigned width:{256u,320u,398u,1024u,256u}) {
            sampled.configure_presentation(width,false,true);
            (void)sampled.presentation_frame();
            check(sampled.frames()==before.frames && sampled.steps()==before.steps &&
                  sampled.diagnostics().master_clocks==before.master_clocks,
                  "Presentation sampling advanced native gameplay/audio");
        }
        const auto buttons=std::uint16_t(frame>=120?0x0800:0);
        const auto count=baseline.advance_frame(buttons);
        check(count && sampled.advance_frame(buttons)==count,"Native physical frame did not finish identically");
        check(std::equal(baseline.native_pixels().begin(),baseline.native_pixels().end(),sampled.native_pixels().begin()),
              "Presentation sampling changed actual gameplay picture");
        check(baseline.steps()==sampled.steps() && baseline.diagnostics().master_clocks==sampled.diagnostics().master_clocks,
              "Presentation sampling changed native work/audio cadence");
    }
    check(observed==sampled.frames() && sampled.frames()>=240 && sampled.diagnostics().cpu_instructions==0,
          "Native completion receipts or gameplay CPU independence differ");
    check(bool(retained) && retained->frame==retained_frame &&
          eb::rasterize_direct_scene({retained,{}})==retained_pixels,
          "Later simulation mutated a retained completed frame");
    check(baseline.take_audio_samples()==sampled.take_audio_samples(),
          "Presentation sampling changed the actual stereo audio stream");
    check(std::equal(sampled.save_memory().begin(),sampled.save_memory().end(),archive.bytes().begin()),
          "Native simulation silently overwrote battery save");
    std::cout<<"PASS native session Continue+"<<sampled.frames()<<" physical frames "<<assets.title<<": CPU-free input/audio/immutable presentation\n";
}
}
int main(int argc,char **argv) {
    if(argc<2) return 77;
    try { for(int i=1;i<argc;++i) run(eb::load_game_assets(argv[i],eb::asset_profiles())); }
    catch(const std::exception &error) { std::cerr<<error.what()<<'\n'; return 1; }
    return 0;
}
