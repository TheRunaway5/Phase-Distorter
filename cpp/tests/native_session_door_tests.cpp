#include "native_session_fixture.hpp"
#include "eb/native_session.hpp"
#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "eb/native/world_doors.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <stdexcept>
namespace {
void check(bool value,const char *message){if(!value)throw std::runtime_error(message);}
void run(const eb::GameAssets &assets,const char *export_path) {
  auto archive=native_session_save(assets.version);auto saved=archive.load(0);
  // Actual map directory type2 door at cell157,57, approached from below.
  // Its real payload is unconditional and selects an independently loaded map.
  saved.game.leader_x=1259;saved.game.leader_y=480;saved.game.leader_direction=0;
  archive.save(0,saved,0);
  eb::NativeSession baseline(assets.image,assets.version,archive.bytes(),1);
  eb::NativeSession sampled(assets.image,assets.version,archive.bytes(),1);
  std::shared_ptr<const eb::DirectSceneFrame> retained;std::vector<std::uint32_t> retained_pixels;
  std::uint64_t observed{};sampled.observe_completed_frames([&](auto frame){
    ++observed;if(!retained&&sampled.diagnostics().native_door_active){retained=frame.scene;retained_pixels=eb::rasterize_direct_scene({retained,{}});}
  });
  unsigned after{};
  for(unsigned call=0;call<2000;++call) {
    const auto before=sampled.diagnostics();
    for(unsigned width:{256u,320u,398u,1024u,256u}) {
      sampled.configure_presentation(width,false,true);(void)sampled.presentation_frame();
      const auto state=sampled.diagnostics();check(state.frames==before.frames&&state.steps==before.steps&&
          state.master_clocks==before.master_clocks,"Door presentation sampling advanced gameplay/audio");
    }
    const auto buttons=std::uint16_t(call>=90&&!before.native_doors_started?0x0800:0);
    const auto count=baseline.advance_frame(buttons);check(count&&sampled.advance_frame(buttons)==count,"Door physical frame receipts differ");
    const auto actual=sampled.diagnostics(),expected=baseline.diagnostics();
    check(actual.cpu_instructions==0&&!actual.machine_debug_available,"Door used a gameplay processor");
    check(actual.native_doors_started==expected.native_doors_started&&actual.native_doors_completed==expected.native_doors_completed&&
        actual.frames==expected.frames&&actual.steps==expected.steps&&actual.master_clocks==expected.master_clocks,"Door owner cadence differs");
    check(std::equal(sampled.native_pixels().begin(),sampled.native_pixels().end(),baseline.native_pixels().begin()),"Door sampling changed actual map/fade pixels");
    check(sampled.take_audio_samples()==baseline.take_audio_samples(),"Door sampling changed PCM");
    if(actual.native_doors_completed&&++after==120) {
      check(actual.native_doors_started==1&&actual.native_doors_completed==1&&!actual.native_door_active&&observed==actual.frames,
          "Entered door did not return to a live native world");
      check(retained&&eb::rasterize_direct_scene({retained,{}})==retained_pixels,"Door later mutated retained frame");
      check(std::equal(sampled.save_memory().begin(),sampled.save_memory().end(),archive.bytes().begin()),"Door overwrote battery archive");
      if(export_path){std::ofstream out(export_path,std::ios::binary);const auto bytes=archive.bytes();out.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());check(bool(out),"Could not export synthetic door fixture");}
      std::cout<<"PASS native Continue -> actual walked door -> destination ->120 world calls: "<<assets.title
          <<" physical_frames="<<actual.frames<<" CPU=0; canonical pixels, PCM and sampling identical\n";return;
    }
  }
  throw std::runtime_error("Actual approached door never completed");
}
}
int main(int argc,char **argv){if(argc<2)return 77;try{
  std::vector<std::string> packs;std::string export_path;
  for(int i=1;i<argc;++i) {
    if(std::string(argv[i])=="--export") {
      check(i+1<argc&&export_path.empty(),"--export requires one SRAM destination");
      export_path=argv[++i];
      check(std::filesystem::path(export_path).extension()==".srm","Door fixture export must explicitly select a .srm path");
    } else packs.emplace_back(argv[i]);
  }
  check(!packs.empty()&&(export_path.empty()||packs.size()==1),"SRAM export requires exactly one regional pack");
  for(const auto &pack:packs) {
  const auto assets=eb::load_game_assets(pack,eb::asset_profiles());
  run(assets,export_path.empty()?nullptr:export_path.c_str());
  auto directory=eb::native::npcs::MapTextResources::import(assets.image,assets.version);
  eb::native::npcs::MapTextState found;
  check(directory->lookup(157,57,found)==2,"Actual integrated door fixture lost its map directory record");
  const auto key=eb::native::WorldDoorResources::door_key(found.door_found);
  const unsigned offset=unsigned(key[0])|unsigned(key[1])<<8;
  // Configured authored white/swirl selectors use the same actually walked
  // route and retained session/map owners; the untouched run above establishes
  // the real directory payload separately.
  for(unsigned style:{14,11,16}) {
    auto configured=assets;
    configured.title+=" configured transition "+std::to_string(style);
    configured.image.at(0xf0000+offset+10)=std::uint8_t(style);
    run(configured,nullptr);
  }
  }
}
catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}return 0;}
