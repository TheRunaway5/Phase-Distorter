#include "native_session_fixture.hpp"
#include "eb/native_session.hpp"
#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "eb/native/world/townmap/resources.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <stdexcept>
namespace {
void check(bool value,const char *message){if(!value)throw std::runtime_error(message);}
void run(const eb::GameAssets &assets,const char *export_path) {
  auto archive=native_session_save(assets.version);auto saved=archive.load(0);
  // This genuine map sector is also the full original caller's continue
  // fixture. The actual inventory query, rather than a test service, gates X.
  saved.game.leader_x=0x456;saved.game.leader_y=0x678;
  eb::native::world::townmap::Resources resources(assets.image,assets.version);
  check((resources.sector(saved.game.leader_x,saved.game.leader_y).selector&15)!=0,
      "Integrated TownMap fixture lacks a declared regional map");
  archive.save(0,saved,0);
  {
    eb::NativeSession absent(assets.image,assets.version,archive.bytes(),1);
    for(unsigned call=0;call<160;++call)
      check(absent.advance_frame(call==110||call==130?0x40:0)>0,"Missing-map gate failed to produce a frame");
    const auto state=absent.diagnostics();
    check(state.native_town_maps_started==0&&state.native_town_maps_completed==0&&
        !state.native_town_map_active&&state.cpu_instructions==0,
        "Actual X inventory gate opened a map without the Town Map item");
  }
  saved.characters[0].values.items[0]=202;archive.save(0,saved,0);
  eb::NativeSession baseline(assets.image,assets.version,archive.bytes(),1);
  eb::NativeSession sampled(assets.image,assets.version,archive.bytes(),1);
  std::shared_ptr<const eb::DirectSceneFrame> retained;
  std::vector<std::uint32_t> retained_pixels;std::uint64_t observed{};
  sampled.observe_completed_frames([&](auto frame) {
    ++observed;
    if(!retained&&frame.scene&&frame.scene->scene_identity==0x544f574e4d4150ull) {
      retained=frame.scene;retained_pixels=eb::rasterize_direct_scene({retained,{}});
    }
  });
  auto frame=[&](std::uint16_t buttons) {
    const auto before=sampled.diagnostics();
    for(unsigned width:{320u,398u,1024u,256u}) {
      sampled.configure_presentation(width,false,true);(void)sampled.presentation_frame();
      const auto state=sampled.diagnostics();
      check(state.frames==before.frames&&state.steps==before.steps&&state.master_clocks==before.master_clocks,
          "TownMap presentation sampling advanced gameplay or audio");
    }
    const auto count=baseline.advance_frame(buttons);
    check(count&&sampled.advance_frame(buttons)==count,"TownMap physical frame receipts differ");
    const auto actual=sampled.diagnostics(),expected=baseline.diagnostics();
    check(actual.cpu_instructions==0&&!actual.machine_debug_available,"TownMap used a gameplay processor");
    check(actual.native_town_maps_started==expected.native_town_maps_started&&
        actual.native_town_maps_completed==expected.native_town_maps_completed&&
        actual.frames==expected.frames&&actual.steps==expected.steps&&actual.master_clocks==expected.master_clocks,
        "TownMap actual owner cadence depends on display sampling");
    check(std::equal(sampled.native_pixels().begin(),sampled.native_pixels().end(),baseline.native_pixels().begin()),
        "TownMap actual map/fade pixels depend on display sampling");
    check(sampled.take_audio_samples()==baseline.take_audio_samples(),"TownMap PCM depends on display sampling");
  };
  for(unsigned call=0;call<100;++call)frame(0);
  for(unsigned call=0;call<40;++call)frame(0x40);
  check(sampled.diagnostics().native_town_maps_started==1&&sampled.diagnostics().native_town_map_active&&
      sampled.diagnostics().native_town_maps_completed==0&&retained,
      "Actual held X did not enter and retain the regional map until a new close press");
  frame(0);frame(0x80);
  unsigned resumed{};
  for(unsigned call=0;call<1000;++call) {
    frame(0);const auto state=sampled.diagnostics();
    if(state.native_town_maps_completed&&++resumed==120) {
      check(state.native_town_maps_started==1&&state.native_town_maps_completed==1&&!state.native_town_map_active&&
          observed==state.frames,"Actual TownMap exit did not return to the live native world loop");
      check(eb::rasterize_direct_scene({retained,{}})==retained_pixels,"TownMap later mutated a retained completed frame");
      check(std::equal(sampled.save_memory().begin(),sampled.save_memory().end(),archive.bytes().begin()),
          "TownMap silently overwrote the battery archive");
      if(export_path) {
        const auto bytes=archive.bytes();
        if(std::filesystem::exists(export_path)&&std::filesystem::file_size(export_path)) {
          check(std::filesystem::file_size(export_path)==bytes.size(),"Existing destination is not this synthetic TownMap fixture");
          std::ifstream in(export_path,std::ios::binary);std::vector<std::uint8_t> existing(bytes.size());
          in.read(reinterpret_cast<char*>(existing.data()),existing.size());
          check(bool(in)&&std::equal(existing.begin(),existing.end(),bytes.begin()),
              "Existing destination is not this synthetic TownMap fixture");
        } else {
          std::ofstream out(export_path,std::ios::binary);
          out.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());check(bool(out),"Cannot export synthetic TownMap fixture");
        }
      }
      std::cout<<"PASS "<<assets.title<<" native Continue -> actual X inventory gate -> held-X map -> A close ->120 world calls; "
          <<"physical_frames="<<state.frames<<" CPU=0; canonical pixels, PCM and sampling identical\n";return;
    }
  }
  throw std::runtime_error("Actual X TownMap owner never completed");
}
}
int main(int argc,char **argv){if(argc<2)return 77;try {
  const char *export_path{};
  if(argc>2) {
    check(argc==4&&std::string_view(argv[2])=="--export-save","Usage: native_session_townmap_tests pack [--export-save fixture.srm]");
    check(std::filesystem::path(argv[3]).extension()==".srm","Synthetic fixture export requires an .srm destination");
    export_path=argv[3];
  }
  run(eb::load_game_assets(argv[1],eb::asset_profiles()),export_path);
}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}return 0;}
