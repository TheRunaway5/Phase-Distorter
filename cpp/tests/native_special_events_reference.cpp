// Complete original C1BEFC helper executions against the native owner. The
// native parent is a real suspended Conversation containing a synthetic CC;
// source calls execute every helper and frame child without interception.
#define NATIVE_BATTLE_SESSION_REFERENCE_NO_MAIN
#include "native_battle_session_reference.cpp"
#undef NATIVE_BATTLE_SESSION_REFERENCE_NO_MAIN
#include "native_battle_party_context.hpp"

namespace {
std::array<story::RandomState,256> random_seeds() {
  std::array<story::RandomState,256> result{};
  std::array<bool,256> found{};
  for(unsigned seed=0;seed<65536;++seed) {
    story::RandomState current{std::uint16_t(seed&255),std::uint16_t(0xab00|(seed>>8))};auto next=current;
    const auto value=story::next_random(next);
    if(!found[value]){found[value]=true;result[value]=current;}
  }
  require(std::all_of(found.begin(),found.end(),[](bool v){return v;}),"RAND seed matrix lacks a byte");
  return result;
}
void special_case(Source &source,SessionRig &rig,std::uint8_t event) {
  const auto before_polls=source.polls;const auto native_before=rig.n.clock.input_polls;
  source.call(source.jp?0xc1bd62:0xc1befc,event);
  const auto returned=source.cpu.accumulator;
  auto program=std::make_shared<dialogue::Program>(rig.n.r.assets.version,
      std::vector<dialogue::ContentBlock>{{0,0,{0x1f,0x41,event,0x02}}});
  dialogue::Conversation conversation(program,rig.n.prompts);
  conversation.start(dialogue::Location{0,0});
  auto parent=rig.n.scene.begin(conversation);
  while(parent->advance(1)!=dialogue::Progress::Suspended){}
  const auto &request=std::get<dialogue::Request>(*parent->dialogue_event());
  require(request.kind==dialogue::RequestKind::SpecialEvent&&request.special_event==event,
          "Synthetic real parent did not reach its actual special-event request");
  auto operation=rig.special_events.begin(event,*parent);
  for(unsigned i=0;i<1000000&&!operation->complete();++i) {
    const auto progress=operation->advance(1);
    if(progress==dialogue::Progress::Suspended) {
      if(auto *child=operation->scene())rig.service(*child);
      else throw std::runtime_error("Special-event proof lacks actual bicycle lifecycle");
    }
  }
  require(operation->complete(),"Native complete special event did not return");
  check_equal(returned,operation->result(),"Special event return id="+std::to_string(event));
  dialogue::Response response;response.special_event_result=operation->result();
  operation.reset();parent->respond_dialogue(response);
  while(parent->advance(1)!=dialogue::Progress::Finished) {
    if(parent->service())rig.service(*parent);
  }
  parent.reset();
  check_equal(source.polls-before_polls,rig.n.clock.input_polls-native_before,"Special-event real input polls");
  check_equal(source.word(0x24),rig.n.random.primary_word,"Special-event primary RAND");
  check_equal(source.word(0x26),rig.n.random.secondary_word,"Special-event secondary RAND");
  compare_party(source,rig.n);
  const unsigned flags=source.jp?0x9eb3:0x9c08;
  for(unsigned i=0;i<128;++i)check_equal(source.bus->work_ram[flags+i],rig.n.text.event_flags[i],"Special-event flags");
  check_equal(source.word(source.jp?0x611e:0x5d98),rig.maintenance.overworld_status_suppression,
              "Special-event overworld status suppression word");
  const unsigned callbacks=source.jp?0x10ac:0x10b6;
  for(unsigned role=24;role<30;++role) {
    const auto pause=rig.n.actors.authored_pause(role);
    const auto value=source.word(callbacks+2*role);
    check_equal((value&0x8000)==0,pause.tick_callback_enabled,"Special-event callback pause");
    check_equal((value&0x4000)==0,pause.scripts_and_physics_enabled,"Special-event motion pause");
  }
}
void suppression_helpers(Source &source,SessionRig &rig,unsigned &calls) {
  auto &n=rig.n;
  const unsigned flags=source.jp?0x9eb3:0x9c08;
  const unsigned suppression=source.jp?0x611e:0x5d98;
  for(unsigned event:{5u,6u})for(unsigned victory:{0u,1u})for(unsigned initial:{0u,1u,0xa55au,0xffffu}) {
    n.text.set_flag(73,victory!=0);
    source.bus->work_ram[flags+9]=std::uint8_t((source.bus->work_ram[flags+9]&~1u)|victory);
    rig.maintenance.overworld_status_suppression=std::uint16_t(initial);
    source.put(suppression,initial);
    const auto before_frame=n.clock.frame_counter;
    const auto before_publication=n.clock.publications;
    std::array<std::array<std::uint16_t,16>,16> before_palette{};
    for(unsigned i=0;i<16;++i)before_palette[i]=n.colors.staged_palette(i);
    const auto before_palette_mode=n.colors.upload_mode;
    const auto before_video=n.display.vram();
    const auto before_scratch=n.scratch.bytes;
    special_case(source,rig,std::uint8_t(event));++calls;
    check_equal(event==5?1u:victory,rig.maintenance.overworld_status_suppression,
                "Suppression branch must consume the live victory flag");
    check_equal(before_frame,n.clock.frame_counter,"Suppression event creates no logical frame");
    check_equal(before_publication,n.clock.publications,"Suppression event creates no publication");
    for(unsigned i=0;i<16;++i)require(n.colors.staged_palette(i)==before_palette[i],
                                    "Suppression event changed unrelated palette content");
    require(n.colors.upload_mode==before_palette_mode&&n.display.vram()==before_video&&n.scratch.bytes==before_scratch,
            "Suppression event changed unrelated palette mode, video or scratch owners");
  }
}
void flipout_helpers(Source &source, SessionRig &rig, unsigned &calls) {
  auto &n = rig.n;
  const unsigned chars = source.jp ? 0x9c7f : 0x99ce;
  const unsigned stride = source.jp ? 94 : 95, shift = source.jp ? 1 : 0;
  const unsigned mode = source.jp ? 0x994c : 0x9698;
  const unsigned half = source.jp ? 0x9949 : 0x9695;
  const unsigned disabled = source.jp ? 0x994b : 0x9697;
  const unsigned hp = source.jp ? 0x994e : 0x969a;
  const unsigned pp = source.jp ? 0x9956 : 0x96a2;
  require(n.clock.flipout == 0 && source.word(mode) == 0,
          "Flipout sequence needs its ordinary inactive entry");
  // Distinct genuine records include both unchosen player records and guests;
  // the helper always edits four fixed player records, independent of selection.
  for (unsigned i = 0; i < 6; ++i) {
    auto &c = n.party.character(i + 1);
    c.current_hp = std::uint16_t(23 + i * 173);
    c.target_hp = std::uint16_t(113 + i * 137);
    c.current_pp = std::uint16_t(31 + i * 71);
    c.target_pp = std::uint16_t(17 + i * 43);
    c.hp_fraction = std::uint16_t(0x1234 + i * 0x1011);
    c.pp_fraction = std::uint16_t(0xfe00 - i * 0x201);
    for (auto [offset, value] : std::array<std::pair<unsigned, unsigned>, 6>{
             {{67,c.hp_fraction},{69,c.current_hp},{71,c.target_hp},
              {73,c.pp_fraction},{75,c.current_pp},{77,c.target_pp}}})
      source.put(chars + stride * i + offset - shift, value);
  }
  auto compare = [&] {
    compare_party(source,n);
    check_equal(source.word(mode),n.clock.flipout,"Flipout full mode word");
    check_equal(source.bus->work_ram[half],n.windows.prompt_state().half_meter_speed,"Flipout half-speed byte");
    check_equal(source.bus->work_ram[disabled],n.windows.prompt_state().rolling_disabled,"Flipout rolling-disable byte");
    for (unsigned i=0;i<4;++i) {
      check_equal(source.word(hp+2*i),rig.meter_flipout.hp_backups()[i],"Flipout retained HP backup");
      check_equal(source.word(pp+2*i),rig.meter_flipout.pp_backups()[i],"Flipout retained PP backup");
    }
  };
  unsigned sequence=0;
  for (unsigned event : {13u,13u,14u,14u,13u,14u}) {
    n.windows.prompt_state().half_meter_speed = 0xa5;
    n.windows.prompt_state().rolling_disabled = 0x5a;
    source.bus->work_ram[half]=0xa5; source.bus->work_ram[disabled]=0x5a;
    if (sequence++ == 1) {
      // Actual live rolling progress and rewritten targets between calls must
      // survive repeated enable, while the first backups remain retained.
      for (unsigned i=0;i<4;++i) {
        auto &c=n.party.character(i+1);
        c.current_hp=std::uint16_t(800-i*111);c.target_hp=std::uint16_t(444+i*31);
        c.current_pp=std::uint16_t(200+i*21);c.target_pp=std::uint16_t(333-i*17);
        for(auto [offset,value]:std::array<std::pair<unsigned,unsigned>,4>{
            {{69,c.current_hp},{71,c.target_hp},{75,c.current_pp},{77,c.target_pp}}})
          source.put(chars+stride*i+offset-shift,value);
      }
    }
    const auto polls=source.polls; const auto inputs=n.clock.input_polls;
    special_case(source,rig,std::uint8_t(event)); ++calls; compare();
    check_equal(source.polls,polls,"Flipout event must not poll input");
    check_equal(n.clock.input_polls,inputs,"Native flipout event must not poll input");
  }
  for(unsigned enabled : {2u,0xffffu,1u,0u,0u}) {
    const auto polls=source.polls; const auto inputs=n.clock.input_polls;
    const auto rng=n.random;
    source.cpu.program_counter=0xc1ff00;
    source.cpu.accumulator=std::uint16_t(enabled);
    source.cpu.status_register=eb::MainCpu65816::InterruptDisable;
    const unsigned stack=source.cpu.stack_pointer;
    source.cpu.execute_instruction<0x20>(source.jp?0x3444:0x2d17,3);
    unsigned work=0;
    while((source.cpu.program_counter!=0xc1ff03 || source.cpu.stack_pointer!=stack) && work++<100000)
      source.step();
    require(work<100000,"Complete near flipout helper did not return");
    rig.meter_flipout.apply(std::uint16_t(enabled));++calls;compare();
    check_equal(source.polls,polls,"Raw flipout helper must not poll input");
    check_equal(n.clock.input_polls,inputs,"Native raw flipout helper must not poll input");
    check_equal(source.word(0x24),rng.primary_word,"Flipout retains primary RAND");
    check_equal(source.word(0x26),rng.secondary_word,"Flipout retains secondary RAND");
  }
}

void special_helpers(const eb::GameAssets &assets) {
  counts={};Resources resources(assets);Source source(assets);source.initialize();SessionRig rig(resources);
  battle_party_reference::prepare_party_context(source,rig);
  auto &n=rig.n;n.host_input=&source.raw_inputs;
  // The helper enters after normal map placement. This battle-only rig ran
  // real allocation/party creation, but not INITIALIZE_MAP/C03A94. Supply its
  // legal visible-pose input explicitly, rather than claim that initializer.
  for(unsigned role=24;role<30;++role)if(const auto id=n.actors.actor_for_role(role)) {
    n.actors.actor(*id).action().animation=0;
    source.put((source.jp?0x10e8:0x10f2)+role*2,0);
  }
  source.start_main();source.until(source.jp?0xc24f02:0xc24fcf);
  auto startup=n.startup->begin();n.drive(*startup);startup.reset();compare_roster(source,n,"Special prerequisite");
  source.call(source.jp?0xc1db24:0xc1dd47,14);
  auto window=n.windows.begin({dialogue::WindowAction::Open,dialogue::WindowId{14},{},0});
  while(window->advance()==dialogue::OutputProgress::Suspended) {
    auto child=n.scene.begin(*window->effect());
    while(child->advance()!=dialogue::Progress::Finished)if(child->service())rig.service(*child);
    child.reset();window->respond();
  }
  window.reset();
  const unsigned character=source.jp?0x9c7f:0x99ce,shift=source.jp?1:0;
  const auto seeds=random_seeds();unsigned calls=0,successes=0;
  suppression_helpers(source,rig,calls);
  for(unsigned level:{0u,15u,16u,30u,31u,45u,46u,60u,61u,75u,76u,90u,91u,255u}) {
    for(unsigned byte=0;byte<256;++byte) {
      n.party.character(1).level=std::uint8_t(level);source.bus->work_ram[character+5-shift]=level;
      n.party.character(1).afflictions[5]=0;source.bus->work_ram[character+14-shift+5]=0;
      n.random=seeds[byte];source.put(0x24,n.random.primary_word);source.put(0x26,n.random.secondary_word);
      try {special_case(source,rig,17);}catch(const std::exception &e) {
        throw std::runtime_error("Homesickness level="+std::to_string(level)+" byte="+std::to_string(byte)+
          " source_polls="+std::to_string(source.polls)+" native_polls="+std::to_string(n.clock.input_polls)+": "+e.what());
      }++calls;successes+=n.party.character(1).afflictions[5]==1;
    }
  }
  require(successes>0,"No successful homesickness branch executed");
  // Gates inspect genuine live membership/status independently of the RNG.
  for(unsigned gate=0;gate<3;++gate) {
    n.party.character(1).level=16;source.bus->work_ram[character+5-shift]=16;
    n.party.character(1).afflictions[0]=gate==0?1:0;source.bus->work_ram[character+14-shift]=gate==0?1:0;
    n.party.character(1).afflictions[5]=gate==2?1:0;source.bus->work_ram[character+19-shift]=gate==2?1:0;
    const unsigned game=source.jp?0x9aa9:0x97f5,delta=source.jp?3:0;
    n.party.party_order[0]=gate==1?2:1;source.bus->work_ram[game+122-delta]=gate==1?2:1;
    if(gate==2) {
      rig.session.fading_actor=AuthoredRoleRef(24);
      source.put(source.jp?0xb67c:0xb4a8,24);
    }
    n.random=seeds[0];source.put(0x24,n.random.primary_word);source.put(0x26,n.random.secondary_word);
    special_case(source,rig,17);++calls;
    n.party.party_order[0]=1;source.bus->work_ram[game+122-delta]=1;
  }
  for(unsigned side:{0u,1u,255u}) {
    n.action.attacker=8;n.roster.at(8).side=std::uint8_t(side);
    source.put(source.jp?0xab72:0xa970,(source.jp?0xa1ae:0x9fac)+8*78);
    source.bus->work_ram[(source.jp?0xa1ae:0x9fac)+8*78+14]=side;
    special_case(source,rig,8);++calls;
  }
  for(unsigned event:{0u,19u,255u,18u,15u}) {special_case(source,rig,std::uint8_t(event));++calls;}
  flipout_helpers(source,rig,calls);
  std::cout<<"PASS complete special events "<<(source.jp?"JP":"US")<<": "<<calls
           <<" helpers, "<<successes<<" successful homesickness calls, "<<counts.words
           <<" comparisons, "<<source.cpu.instruction_count<<" original instructions\n";
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try{for(int i=1;i<argc;++i)special_helpers(eb::load_game_assets(argv[i],eb::asset_profiles()));}
  catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}
}
