// Actual native Continue prefix against the complete original startup program.
#include "native_world_startup_oracle.hpp"
namespace {
using namespace startup_oracle;
void run(const eb::GameAssets &assets,startup_test::Resources &resources,unsigned count,unsigned flavor,unsigned condition){
 context=std::to_string(count)+" members flavor"+std::to_string(flavor)+" condition"+std::to_string(condition);
 startup_test::Fixture f(resources);auto snapshot=f.snapshot(count);
 snapshot.state.game.text_flavour=flavor;
 snapshot.state.game.reserved_92=count==6?0:3;
 for(unsigned i=0;i<count;++i)snapshot.state.characters[i].values.afflictions[0]=condition;
 auto archive=saves::SaveArchive::empty(assets.version);archive.save(0,snapshot.state,snapshot.state.game.elapsed_timer);
 const auto bytes=std::vector<std::uint8_t>(archive.bytes().begin(),archive.bytes().end());
 saves::Session session(archive,std::make_shared<saves::ContinueResources>(*resources.continuing));
 auto operation=f.startup->begin(session.continue_slot(0));
 for(unsigned n=0;operation->stage()!=WorldStartupStage::ResetWorld && n<100000;++n){auto p=operation->advance(1);
  if(p==dialogue::Progress::Suspended){check(operation->service()==WorldStartupService::Runtime,"Imported pre-game escaped Runtime");auto *r=operation->runtime_operation();check(r->service()==story::SceneService::Frame,"Imported pre-game needs unavailable service");r->complete_frame({0,0});}}
 check(operation->stage()==WorldStartupStage::ResetWorld,"Imported PRE_GAMESTART never finished");
 const auto before_flags=snapshot.state.event_flags;
 const auto key=resources.continuing->dialogue().pre_game_start;const unsigned at=(unsigned(key[2])<<16|unsigned(key[1])<<8|key[0])-0xc00000;
 check(assets.image.at(at)==5&&assets.image.at(at+3)==2,"PRE_GAMESTART source content changed");
 const unsigned flag=assets.image[at+1]|unsigned(assets.image[at+2])<<8;
 auto expected_flags=before_flags;expected_flags[(flag-1)/8]&=~(1u<<((flag-1)%8));
 check(std::equal(expected_flags.begin(),expected_flags.end(),f.text.event_flags.begin()),"Imported dialogue did not execute its actual clear flag");
 Oracle oracle(assets);oracle.seed(f,archive);oracle.start(oracle.l.boot);oracle.run(0xc0004b);
 f.drive(*operation,1);oracle.compare(f);
 check(std::equal(bytes.begin(),bytes.end(),session.archive().bytes().begin()),"Startup mutated persistence archive");
 const auto ticks=f.actors.ticks();const auto frames=f.runtime->completed_frames();
 f.actors.scene().camera_x=0xfff0;f.actors.scene().camera_y=0x8001;
 oracle.put(0x31,0xfff0);oracle.put(0x33,0x8001);
 f.startup->position_and_project_party();oracle.start(oracle.l.position);oracle.run(0xc0ff04);oracle.compare(f);
 check(f.actors.ticks()==ticks&&f.runtime->completed_frames()==frames,"Position helper advanced time");++cases;
}
}
int main(int argc,char **argv){using namespace startup_oracle;try{if(argc<2)throw std::runtime_error("Expected imported asset packs");
 for(int arg=1;arg<argc;++arg) {
 const auto before_checks=checks,before_instructions=instructions,before_cases=cases;
 auto assets=eb::load_game_assets(argv[arg], eb::asset_profiles());startup_test::Resources resources(assets.version,assets.image);
 for(unsigned count:{1u,4u,6u})for(unsigned flavor:{1u,3u,5u})for(unsigned condition:{0u,1u,2u})run(assets,resources,count,flavor,condition);
 std::cout<<"PASS startup "<<(assets.version==eb::GameVersion::US?"US":"JP")<<": "<<cases-before_cases<<" real Continue/Runtime chains and original complete C0B67F prefixes, "<<checks-before_checks<<" checks, "<<instructions-before_instructions<<" source instructions; map setup remains pending\n";
 }
 }catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
