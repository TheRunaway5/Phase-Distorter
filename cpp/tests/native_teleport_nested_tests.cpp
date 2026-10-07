#include "native_world_map_load_fixture.hpp"
#include <iostream>
namespace {
using namespace eb::native;
unsigned checks;
void check(bool value,const char* message){++checks;if(!value)throw std::runtime_error(message);}
template<class F> void rejects(F f){bool caught{};try{f();}catch(const std::exception&){caught=true;}check(caught,"Invalid nested content owner accepted");}
std::shared_ptr<const dialogue::Program> program(eb::GameVersion version,std::uint8_t command=0x21){
  return std::make_shared<dialogue::Program>(version,std::vector<dialogue::ContentBlock>{{0,0,{0x1f,command,1,2}}},
                                          std::vector<dialogue::Location>{{0,0}});
}
void finish(WorldRuntime::Operation& op){for(unsigned i=0;i<1000;++i)if(op.advance(1)==dialogue::Progress::Finished)return;throw std::runtime_error("Runtime completion stalled");}
void scenario(eb::GameVersion version){
  startup_test::Resources resources(version);map_load_test::Fixture f(resources),other(resources);
  // Map palette setup reads the actual last controlled member. Declare a
  // valid incoming one-member world rather than an empty default party.
  f.party.party_count=f.party.controlled_count=1;
  f.party.party_order[0]=f.party.display_order[0]=1;
  f.party.controlled_order[0]=0;
  f.party.character(1).maximum_hp=f.party.character(1).current_hp=
      f.party.character(1).target_hp=100;
  auto &scene=f.runtime->coordinator_scene();
  dialogue::Conversation text(program(version),f.windows),foreign_text(program(version),other.windows);
  text.start(dialogue::EntryId{0});foreign_text.start(dialogue::EntryId{0});
  auto parent=f.runtime->begin(text),foreign=other.runtime->begin(foreign_text);
  check(parent->advance()==dialogue::Progress::Suspended&&foreign->advance()==dialogue::Progress::Suspended,
        "Teleport fixture did not reach its actual requests");
  const auto event=*parent->dialogue_event();const auto old=f.runtime->frame();
  const auto frame=f.clock.frame_counter;const auto polls=f.clock.input_polls;const auto publications=f.clock.publications;
  rejects([&]{f.runtime->require_idle();});
  rejects([&]{f.runtime->prepare_area({1110,1656});});
  rejects([&]{f.runtime->require_content_boundary(foreign.get());});
  rejects([&]{f.loader->begin_nested({1110,1656},*foreign);});
  rejects([&]{scene.refresh_world_capture(&other.runtime->scene_operation(*foreign));});
  check(f.runtime->frame()==old&&!f.runtime->failed()&&!f.loader->failed(),"Rejected content changed capture or poisoned its real owner");
  std::array<dialogue::WindowArtwork,1> prepared{};
  prepared.front().fill(2);
  const auto artwork_before=f.graphics->prepared_artwork().back();
  rejects([&]{f.graphics->retain_prepared_artwork(1183,prepared);});
  rejects([&]{f.graphics->retain_prepared_artwork(1183,prepared,foreign_text);});
  check(f.graphics->prepared_artwork().back()==artwork_before,
        "Rejected artwork parent changed shared staging");
  f.graphics->retain_prepared_artwork(1183,prepared,text);
  check(f.graphics->prepared_artwork().back()==prepared.front()&&*parent->dialogue_event()==event,
        "Nested artwork did not borrow the real suspended parent");
  auto invalid=prepared;invalid.front().back()=4;
  rejects([&]{f.graphics->retain_prepared_artwork(1183,invalid,text);});
  check(f.graphics->prepared_artwork().back()==prepared.front(),
        "Invalid nested artwork partially changed shared staging");
  f.runtime->require_content_boundary(parent.get());
  f.runtime->clear_world_capture(parent.get());
  auto load=f.loader->begin_nested({1110,1656},*parent);
  for(unsigned n=0;n<10000&&!load->complete();++n)load->advance(1);
  check(load->complete()&&!f.loader->failed()&&f.runtime->frame()&&f.runtime->frame()!=old,
        "Nested map loading did not capture the actual new world");
  check(*parent->dialogue_event()==event&&f.clock.frame_counter==frame&&f.clock.input_polls==polls&&
        f.clock.publications==publications,"Map content work resumed its parent or invented timing");
  f.load_state.wipe_palettes=true;
  auto wipe=f.loader->begin_nested({1110,1656},*parent);
  for(unsigned n=0;n<10000&&!wipe->complete();++n)wipe->advance(1);
  check(wipe->complete()&&!f.load_state.wipe_palettes,
        "Nested palette scratch production lost the actual conversation owner");
  for(const auto color:f.scene_colors)
    check(color==PaletteColor{31,31,31},"Nested palette wipe did not publish shared colors");
  check(*parent->dialogue_event()==event&&f.clock.frame_counter==frame&&f.clock.input_polls==polls&&
        f.clock.publications==publications,"Nested palette wipe consumed parent or invented timing");
  auto child=f.runtime->begin_nested_publication(*parent);
  check(child->service()==story::SceneService::Publication,"Nested publication invented a WAIT/input request");
  rejects([&]{f.runtime->require_content_boundary(parent.get());});
  rejects([&]{parent->respond_dialogue({});});
  child->complete_publication();finish(*child);child.reset();
  check(f.clock.frame_counter==std::uint8_t(frame+1)&&f.clock.input_polls==polls&&
        f.clock.publications==publications+1&&*parent->dialogue_event()==event,
        "Publication did not retain actual parent or consumed input");
  f.runtime->reload_camera({1110,1656},parent.get());f.runtime->refresh_world_capture(parent.get());
  f.runtime->begin_refresh({982,1544},parent.get());
  while(!f.runtime->advance_streaming(1,parent.get())){}
  f.runtime->refresh_world_capture(parent.get());
  parent->respond_dialogue({});finish(*parent);foreign->respond_dialogue({});finish(*foreign);
  rejects([&]{f.runtime->require_content_boundary(parent.get());});
  f.runtime->require_idle();
  dialogue::Conversation wrong(program(version,0x41),f.windows);wrong.start(dialogue::EntryId{0});
  auto wrong_parent=f.runtime->begin(wrong);
  check(wrong_parent->advance()==dialogue::Progress::Suspended,"Wrong-command fixture did not yield");
  const auto retained=f.graphics->prepared_artwork().back();
  rejects([&]{f.graphics->retain_prepared_artwork(1183,prepared,wrong);});
  check(f.graphics->prepared_artwork().back()==retained,"Wrong dialogue command changed map artwork");
  rejects([&]{f.runtime->require_content_boundary(wrong_parent.get());});
  rejects([&]{f.runtime->begin_nested_publication(*wrong_parent);});
  dialogue::Response response;response.special_event_result=1;wrong_parent->respond_dialogue(response);finish(*wrong_parent);
  check(!f.runtime->failed(),"Read-only nested admission failure poisoned later valid work");
}
}
int main(){try{for(auto region:{eb::GameVersion::US,eb::GameVersion::JP})scenario(region);
  std::cout<<"Native nested teleport content: "<<checks<<" checks passed\n";return 0;
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
