// Complete PROCESS_QUEUED_INTERACTIONS -> DOOR_TRANSITION, retaining every
// original dialogue/fade/map/party/audio callee. The original test machine is
// reference-only; the tested gameplay owner remains CPU-free.
#define main retained_battle_return_reference_main
#include "native_world_battle_return_reference.cpp"
#undef main
#include "eb/native/world/doors/entry.hpp"
#include <map>
#include <optional>
#include <set>
namespace door_entry_reference {
using namespace world_battle_reference;
bool phase_trace{};
bool semantic_timing{};
using Checkpoint=ScreenTransitionCheckpoint;
const char *checkpoint_name(Checkpoint kind) {
  static constexpr std::array names{"InitializeMotion","PauseActors","ClearObjects","MoveCamera",
      "ProjectActors","RunActors","UpdateScreen","AdvanceEffects","WaitFrame","ConfigureSwirl",
      "PrepareBrightness","PreparePalette","PaletteWait","AdvancePalette","ForceBlank","FillWhite",
      "WhitePalette","WhiteWait","ResumeActors","BeginFadeIn","FinishPalette","ClearWindow"};
  return names.at(unsigned(kind));
}
std::optional<Checkpoint> source_checkpoint(const Source &source,unsigned caller) {
  const unsigned pc=source.cpu.program_counter;
  const std::array<std::pair<unsigned,Checkpoint>,20> calls{{
    {source.jp?0xc4256f:0xc42631,Checkpoint::InitializeMotion},
    {source.jp?0xc0941b:0xc0943c,Checkpoint::PauseActors},
    {source.jp?0xc088a3:0xc088b1,Checkpoint::ClearObjects},
    {source.jp?0xc425c8:0xc4268a,Checkpoint::MoveCamera},
    {source.jp?0xc42605:0xc426c7,Checkpoint::ProjectActors},
    {source.jp?0xc09445:0xc09466,Checkpoint::RunActors},
    {source.jp?0xc08b17:0xc08b26,Checkpoint::UpdateScreen},
    {source.jp?0xc47c19:0xc4a7b0,Checkpoint::AdvanceEffects},
    {source.jp?0xc47ae7:0xc4a67e,Checkpoint::ConfigureSwirl},
    {source.jp?0xc46b96:0xc4954c,Checkpoint::PrepareBrightness},
    {source.jp?0xc46d31:0xc496e7,Checkpoint::PreparePalette},
    {source.jp?0xc4262b:0xc426ed,Checkpoint::AdvancePalette},
    {source.jp?0xc0871f:0xc08726,Checkpoint::ForceBlank},
    {source.jp?0xc08eed:0xc08efc,Checkpoint::FillWhite},
    {0xc0856b,Checkpoint::WhitePalette},
    {source.jp?0xc09430:0xc09451,Checkpoint::ResumeActors},
    {source.jp?0xc0885e:0xc0886c,Checkpoint::BeginFadeIn},
    {source.jp?0xc46d8a:0xc49740,Checkpoint::FinishPalette},
    {source.jp?0xc2e9c3:0xc2eaaa,Checkpoint::ClearWindow},
    {source.jp?0xc0874c:0xc08756,Checkpoint::WaitFrame}
  }};
  for(const auto &[address,kind]:calls)if(pc==address) {
    if(kind!=Checkpoint::WaitFrame)return kind;
    if(caller==(source.jp?0xc0698bu:0xc0675du)||caller==(source.jp?0xc06a81u:0xc06853u))
      return Checkpoint::PaletteWait;
    if(caller==(source.jp?0xc069f3u:0xc067c5u))return Checkpoint::WhiteWait;
    return Checkpoint::WaitFrame;
  }
  return {};
}
struct Candidates {
  std::map<unsigned,dialogue::ReferenceKey> styles;
  std::optional<dialogue::ReferenceKey> gated, text;
  std::set<dialogue::ReferenceKey> invalid_text_records;
};
Candidates candidates(const eb::GameAssets &a) {
  auto map=npcs::MapTextResources::import(a.image,a.version);
  auto resources=WorldDoorResources::import(a.image,a.version);
  Candidates result;
  npcs::MapTextState state;
  for(unsigned y=0;y<1280;++y)for(unsigned x=0;x<1024;++x) {
    if(map->lookup(x,y,state)!=2)continue;
    const auto key=WorldDoorResources::door_key(state.door_found);
    const auto record=resources->entry(key);
    // A directory placeholder may point into non-payload bytes. Authored
    // text long keys have a zero fourth byte; retain and prove the explicit
    // admission rejection instead of counting random bytes as a door style.
    if(record.text[3]) {result.invalid_text_records.insert(key);continue;}
    if(record.screen_transition<WorldTeleportResources::transition_count) {
      if(!result.styles.contains(record.screen_transition))result.styles.emplace(record.screen_transition,key);
      else if(record.text==dialogue::ReferenceKey{}&&!record.event_word) {
        const auto selected=resources->entry(result.styles.at(record.screen_transition));
        if(selected.text!=dialogue::ReferenceKey{}||selected.event_word)result.styles[record.screen_transition]=key;
      }
      if(!result.gated && record.text==dialogue::ReferenceKey{} && (record.event_word&0x7fff)>10)
        result.gated=key;
      if(!result.text && record.text!=dialogue::ReferenceKey{} && !record.event_word)
        result.text=key;
    }
  }
  return result;
}
void run(const eb::GameAssets &a,unsigned style,dialogue::ReferenceKey key,
         bool matching_condition=true,bool disabled_transitions=false) {
  Rig r(a);Source s(a);s.initialize();
  auto snap=saved(r,false);auto archive=saves::SaveArchive::empty(a.version);archive.save(0,snap.state,0);
  auto startup=r.w.startup->begin(snap);
  while(startup->stage()!=WorldStartupStage::ResetWorld) {
    const auto p=startup->advance(1);if(p==dialogue::Progress::Suspended)r.service(*startup->runtime_operation());
  }
  seed(s,r,archive);near_call(s,s.jp?0xc0b652:0xc0b67f);r.drive(*startup);startup.reset();
  if(style==11||style==16) {
    // This comparison starts from an actual retained LOAD_BATTLE_BG record.
    // A cold zero pointer clears only the NMI mirror, tested separately below.
    const BattleBackgroundPair pair{0,0,4};
    r.w.fade.force_blank();s.bus->work_ram[0xd]=0x80;
    s.bus->write_byte(0x2100,0x80);
    s.call(s.jp?0xc2d0d5:0xc2d121,pair.primary,pair.secondary,pair.style);
    r.b.loader.load(pair);
    r.w.fade.write_brightness(15);s.bus->work_ram[0xd]=15;
    s.bus->write_byte(0x2100,15);
    check(r.b.background.has_loaded_record(),"Animated door omitted its actual retained background load");
  }
  // Native world/bootstrap has independently produced every starting owner.
  // Suppression is a named original caller input shared by both sides, so this
  // full door comparison isolates transitions/map/party from unrelated NPC AI.
  r.w.clock.action_scripts_disabled=1;s.put(s.jp?0xa56:0xa60,1);
  r.w.clock.disabled_transitions=disabled_transitions;
  s.put(s.jp?0xb68a:0xb4b6,disabled_transitions);
  r.w.navigation.using_door=1;s.put(s.jp?0x6148:0x5dc2,1);
  r.w.navigation.ladder_stairs={17,31};s.put(s.jp?0x612e:0x5da8,17);s.put((s.jp?0x612e:0x5da8)+2,31);
  check(s.word(0x24)==r.w.random.primary_word&&s.word(0x26)==r.w.random.secondary_word,
        "Door starting owner random words differ before the tested caller");
  const auto payload=r.content.doors->entry(key);
  if(payload.event_word) {
    const unsigned flag=payload.event_word&0x7fff;
    r.w.text.set_flag(flag,(payload.event_word>0x8000)==matching_condition);
    std::copy(r.w.text.event_flags.begin(),r.w.text.event_flags.end(),s.bus->work_ram.begin()+(s.jp?0x9eb3:0x9c08));
  }
  const unsigned records=s.jp?0x6170:0x5dea,current=s.jp?0x6188:0x5e02,next=s.jp?0x618a:0x5e04;
  r.w.queue.queue().enqueue(2,key);s.put(current,0);s.put(next,1);s.put(records,2);
  std::copy(key.begin(),key.end(),s.bus->work_ram.begin()+records+2);
  s.put(s.jp?0x6120:0x5d9a,1);s.put(s.jp?0x6146:0x5dc0,0xffff);
  const auto first_poll=s.raw_inputs.size(),first_sound=s.sound_requests.size();
  std::cout<<"RUN complete door "<<a.title<<" style="<<style<<" text="<<(payload.text!=dialogue::ReferenceKey{})
      <<" condition="<<matching_condition<<" disabled="<<disabled_transitions
      <<" key="<<(unsigned(key[0])|unsigned(key[1])<<8)<<" x="<<payload.tile_x<<" packed_y="<<payload.packed_y
      <<" flag="<<payload.event_word<<std::endl;
  unsigned restoration_return{};
  unsigned screen_return{},screen_half{},screen_polls{};
  std::array<std::vector<Checkpoint>,2> source_work,native_work;
  std::array<unsigned,2> source_palette_waits{},native_palette_waits{};
  std::array<unsigned,2> source_half_polls{},native_half_polls{};
  std::array<std::size_t,2> native_half_first{};
  bool source_white_pending_upload{},native_white_without_pending{};
  bool source_jp_swirl_interrupted_palette{},source_jp_swirl_pending_upload{};
  bool source_us33_pre_wait_fade_interrupt{},native_us33_initial_fade_delay{};
  bool source_jp16_secondary_upload_consumed{},native_jp16_secondary_upload_pending{};
  unsigned source_jp16_secondary_transport_pc{};
  std::map<unsigned,unsigned> random_callers;
  s.observer=[&](Source &v) {
      if(v.cpu.program_counter==(v.jp?0xc08e8bu:0xc08e9au)) {
        const auto stack=v.cpu.stack_pointer;
        ++random_callers[std::uint16_t(v.word(stack+1)+1)|(unsigned(v.bus->work_ram[stack+3])<<16)];
      }
      if(v.cpu.program_counter==(v.jp?0xc06890u:0xc06662u)) {
        const auto stack=v.cpu.stack_pointer;
        screen_return=std::uint16_t(v.word(stack+1)+1)|(unsigned(v.bus->work_ram[stack+3])<<16);
        screen_half=v.cpu.x_index;screen_polls=v.polls;
        std::cout<<"SOURCE SCREEN_TRANSITION half="<<v.cpu.x_index<<" pending="
            <<unsigned(v.bus->work_ram[0x2b])<<" brightness="<<unsigned(v.bus->work_ram[0xd])
            <<" source_nmis="<<v.nmis<<std::endl;
      } else if(screen_return&&v.cpu.program_counter==screen_return) {
        source_half_polls[screen_half]=v.polls-screen_polls;
        std::cout<<"SOURCE completed screen half="<<screen_half<<" polls="<<v.polls-screen_polls
            <<" pending="<<unsigned(v.bus->work_ram[0x2b])<<" brightness="<<unsigned(v.bus->work_ram[0xd])<<std::endl;
        screen_return=0;
      }
      if(screen_return) {
        const unsigned stack=v.cpu.stack_pointer;
        const unsigned caller=(v.word(stack+1)+1)|(unsigned(v.bus->work_ram[stack+3])<<16);
        const unsigned start=v.jp?0xc06890:0xc06662,warmup=v.jp?0xc0dcf4:0xc0dd2c;
        // Compare this owner's orchestration, including its real two-frame
        // helper. Nested palette/effect callees have their own source oracles;
        // counting their internal calls again would duplicate owner work.
        if(const auto kind=source_checkpoint(v,caller);kind&&
            ((caller>=start&&caller<start+0x250)||
             (caller>=warmup&&caller<warmup+0x40&&
              (*kind==Checkpoint::ClearObjects||*kind==Checkpoint::RunActors||
               *kind==Checkpoint::UpdateScreen||*kind==Checkpoint::WaitFrame)))) {
          if(*kind==Checkpoint::PaletteWait)++source_palette_waits[screen_half];
          else source_work[screen_half].push_back(*kind);
          const auto palette_steps=std::count(source_work[screen_half].begin(),source_work[screen_half].end(),Checkpoint::AdvancePalette);
          if(*kind==Checkpoint::WaitFrame&&screen_half==1&&style==14&&palette_steps==1)
            source_white_pending_upload=v.bus->work_ram[0x2b]>0&&v.bus->work_ram[0x30]==24;
          if(*kind==Checkpoint::WaitFrame&&screen_half==1&&v.jp&&style==11&&palette_steps==2)
            source_jp_swirl_pending_upload=v.bus->work_ram[0x2b]==1&&v.bus->work_ram[0x30]==24;
          if(*kind==Checkpoint::WaitFrame&&screen_half==1&&v.jp&&style==16&&palette_steps==2)
            source_jp_swirl_pending_upload=v.bus->work_ram[0x2b]==1&&v.bus->work_ram[0x30]==24;
          if(*kind==Checkpoint::WaitFrame&&screen_half==0&&v.jp&&style==16&&palette_steps==1)
            source_jp16_secondary_upload_consumed=v.bus->work_ram[0x2b]>0&&!v.bus->work_ram[0x30];
        }
        if(v.cpu.program_counter==0xc08170) {
          const unsigned interrupted=v.word(stack+2)|(unsigned(v.bus->work_ram[stack+4])<<16);
          if(v.jp&&screen_half==1&&((style==11&&interrupted==0xc426c1)||(style==16&&interrupted==0xc426a4))&&
              std::count(source_work[1].begin(),source_work[1].end(),Checkpoint::AdvancePalette)==2)
            source_jp_swirl_interrupted_palette=v.bus->work_ram[0x2b]==0&&v.bus->work_ram[0x30]==0;
          if(!v.jp&&style==33&&screen_half==0&&interrupted==0xc06845&&v.polls==screen_polls)
            source_us33_pre_wait_fade_interrupt=v.bus->work_ram[0x28]==1&&v.bus->work_ram[0x2a]==1;
          if(v.jp&&style==16&&screen_half==0&&v.polls==screen_polls&&v.bus->work_ram[0x30]==24&&
              std::count(source_work[0].begin(),source_work[0].end(),Checkpoint::AdvancePalette)==1)
            source_jp16_secondary_transport_pc=interrupted;
        }
      }
      if(phase_trace&&screen_return) {
        const unsigned pc=v.cpu.program_counter,stack=v.cpu.stack_pointer;
        const auto start=v.jp?0xc06890u:0xc06662u;
        if(pc>=start&&pc<start+0x400&&v.bus->read_byte(pc)==0x22) {
          unsigned target{};for(unsigned byte=0;byte<3;++byte)
            target|=unsigned(v.bus->read_byte(pc+byte+1))<<(byte*8);
          std::cout<<"SOURCE direct screen call half="<<screen_half<<" pc="<<std::hex<<pc
              <<" target="<<target<<std::dec;
        } else if(pc==(v.jp?0xc0874cu:0xc08756u)) {
          const unsigned caller=(v.word(stack+1)+1)|(unsigned(v.bus->work_ram[stack+3])<<16);
          std::cout<<"SOURCE WAIT half="<<screen_half<<" caller="<<std::hex<<caller<<std::dec;
        } else if(pc==0xc08170) {
          const unsigned interrupted=v.word(stack+2)|(unsigned(v.bus->work_ram[stack+4])<<16);
          std::cout<<"SOURCE NMI half="<<screen_half<<" interrupted="<<std::hex<<interrupted<<std::dec;
        } else return;
        std::cout<<" polls="<<v.polls-screen_polls<<" nmis="<<v.nmis<<" pending="
            <<unsigned(v.bus->work_ram[0x2b])<<" upload="<<unsigned(v.bus->work_ram[0x30])
            <<" brightness="<<unsigned(v.bus->work_ram[0xd])<<" fade_step="<<int(std::int8_t(v.bus->work_ram[0x28]))
            <<" fade_left="<<int(std::int8_t(v.bus->work_ram[0x2a]))<<'\n';
      }
      if(style==11||style==16) {
      if(v.cpu.program_counter==(v.jp?0xc2de0bu:0xc2de96u)) {
        const unsigned record=v.jp?0xafa9:0xadd4;
        const unsigned stack=v.cpu.stack_pointer;
        restoration_return=std::uint16_t(v.word(stack+1)+1)|(unsigned(v.bus->work_ram[stack+3])<<16);
        std::cout<<"SOURCE swirl palette restore primary_destination="<<v.word(record+76)
            <<" secondary_destination="<<v.word(record+119+76)<<std::endl;
      } else if(restoration_return&&v.cpu.program_counter==restoration_return) {
        std::cout<<"SOURCE post restore low mirrors";
        for(unsigned i=0;i<32;++i)std::cout<<' '<<unsigned(v.bus->work_ram[i]);
        std::cout<<std::endl;restoration_return=0;
      }
      }
    };
  s.call(s.jp?0xc0781c:0xc075dd);
  std::cout<<"SOURCE door random callers";
  for(const auto &[caller,count]:random_callers)std::cout<<' '<<std::hex<<caller<<std::dec<<':'<<count;
  std::cout<<std::endl;
  r.inputs=&s.raw_inputs;r.cursor=first_poll;r.phase="door";
  r.screen_transition.observe([&](Checkpoint kind,bool entering,unsigned iteration) {
    const unsigned half=entering?1:0;
    if(kind==Checkpoint::InitializeMotion)native_half_first[half]=r.cursor;
    if(kind==Checkpoint::PaletteWait)++native_palette_waits[half];
    else native_work[half].push_back(kind);
    if(kind==Checkpoint::ResumeActors)native_half_polls[half]=unsigned(r.cursor-native_half_first[half]);
    if(kind==Checkpoint::WaitFrame&&entering&&style==14&&
        std::count(native_work[1].begin(),native_work[1].end(),Checkpoint::AdvancePalette)==1)
      native_white_without_pending=!r.w.clock.new_frame_started&&r.w.palette.upload_mode==24;
    if(kind==Checkpoint::WaitFrame&&!entering&&style==33&&native_work[0].size()==7)
      native_us33_initial_fade_delay=r.w.fade.state().step==1&&r.w.fade.state().remaining==1;
    if(kind==Checkpoint::WaitFrame&&!entering&&style==16&&
        std::count(native_work[0].begin(),native_work[0].end(),Checkpoint::AdvancePalette)==1)
      native_jp16_secondary_upload_pending=r.w.clock.new_frame_started>0&&r.w.palette.upload_mode==24;
    if(phase_trace)std::cout<<"NATIVE screen work half="<<half<<" iteration="<<iteration
        <<" checkpoint="<<checkpoint_name(kind)<<" polls="<<r.cursor-first_poll
        <<" publications="<<r.w.clock.publications<<" pending="<<unsigned(r.w.clock.new_frame_started)
        <<" upload="<<unsigned(r.w.palette.upload_mode)<<" brightness="<<unsigned(r.w.fade.state().brightness)
        <<" fade_step="<<int(std::int8_t(r.w.fade.state().step))
        <<" fade_left="<<int(std::int8_t(r.w.fade.state().remaining))<<'\n';
  });
  WorldDoorEntry entry({r.w.startup_owners(),r.script_teleport_state,*r.content.doors,
      r.content.teleport_resources,r.content.startup,r.content.program,r.w.menus,*r.w.map_load,
      *r.w.relocation,r.w.npc_commands,r.screen_transition,r.fade,r.w.fade,r.w.navigation,
      r.w.input,r.w.music,r.w.sprite_fade,[&](std::uint16_t sound){r.audio.play_sound(sound);}});
  auto queue=r.w.queue.queue().begin();
  while(queue->advance()!=npcs::InteractionQueueProgress::Suspended){}
  check(queue->service()->kind==npcs::InteractionQueueServiceKind::ClearPartySpriteBlink,"Actual door queue lost blink prefix");
  clear_party_sprite_blink(r.w.actors);queue->respond();
  check(queue->advance()==npcs::InteractionQueueProgress::Suspended&&
        queue->service()->kind==npcs::InteractionQueueServiceKind::Door,"Actual queue failed to select the door consumer");
  auto operation=entry.begin(queue->service()->key);r.drive(*operation);
  const bool entered=operation->entered();operation.reset();queue->respond();
  while(queue->advance()!=npcs::InteractionQueueProgress::Finished){}
  for(unsigned half:{1u,0u}) {
    const auto &original=source_work[half],&actual=native_work[half];
    const auto mismatch=std::mismatch(original.begin(),original.end(),actual.begin(),actual.end());
    check(mismatch.first==original.end()&&mismatch.second==actual.end(),
        "Screen authored work order differs half="+std::to_string(half)+" index="+
        std::to_string(mismatch.first-original.begin())+" source_events="+
        std::to_string(original.size())+" native_events="+std::to_string(actual.size()));
    if(!original.empty())std::cout<<"PASS screen authored work half="<<half<<" ordered_events="<<original.size()
        <<" conditional_palette_waits source="<<source_palette_waits[half]<<" native="<<native_palette_waits[half]
        <<" input_polls source="<<source_half_polls[half]<<" native="<<native_half_polls[half]<<'\n';
  }
  check(entered==matching_condition,"Door condition selected the wrong completion");
  check(!entry.busy()&&!entry.failed()&&r.w.queue.pending()==s.word(s.jp?0x6120:0x5d9a),
        "Door continuation lost its completion or actual remaining queue work");
  check(s.word(current)==r.w.queued.current&&s.word(next)==r.w.queued.next&&
        s.word(s.jp?0x6146:0x5dc0)==r.w.queued.current_type,
        "Door caller lost the actual queued-text continuation indices or type");
  for(unsigned i=0;i<4;++i)check(s.word(records+i*6)==r.w.queued.records[i].type&&
      std::equal(r.w.queued.records[i].key.begin(),r.w.queued.records[i].key.end(),s.bus->work_ram.begin()+records+i*6+2),
      "Door caller queue record or full text key differs");
  compare_party(s,r);
  const unsigned game=s.jp?0x9aa9:0x97f5,delta=s.jp?3:0;
  check(s.word(game+130-delta)==r.w.interactions.state().leader_x&&
        s.word(game+134-delta)==r.w.interactions.state().leader_y&&
        s.word(game+138-delta)==r.w.interactions.state().leader_direction&&
        s.word(game+142-delta)==r.w.interactions.state().walking_style,"Door destination/leader style differs source="+
        std::to_string(s.word(game+130-delta))+","+std::to_string(s.word(game+134-delta))+","+
        std::to_string(s.word(game+138-delta))+","+std::to_string(s.word(game+142-delta))+" native="+
        std::to_string(r.w.interactions.state().leader_x)+","+std::to_string(r.w.interactions.state().leader_y)+","+
        std::to_string(r.w.interactions.state().leader_direction)+","+std::to_string(r.w.interactions.state().walking_style));
  check(s.word(s.jp?0x6148:0x5dc2)==r.w.navigation.using_door&&
        s.word(s.jp?0x614a:0x5dc4)==r.w.navigation.stairs_direction,"Door final navigation differs");
  check(std::equal(r.w.text.event_flags.begin(),r.w.text.event_flags.end(),s.bus->work_ram.begin()+(s.jp?0x9eb3:0x9c08)),
        "Door dialogue/event flags differ");
  check(s.word(0x24)==r.w.random.primary_word&&s.word(0x26)==r.w.random.secondary_word,"Door consumed different random words source="+
      std::to_string(s.word(0x24))+","+std::to_string(s.word(0x26))+" native="+
      std::to_string(r.w.random.primary_word)+","+std::to_string(r.w.random.secondary_word));
  check(s.word(s.jp?0x2c8e:0x2890)==r.script_teleport_state.moved_since_map_load,"Door did not reset actual moved counter");
  for(unsigned i=0;i<256;++i)check(s.word(0x200+i*2)==r.w.palette.staged_color(i),"Door final full raw palette differs");
  check(s.word(s.jp?0x46f4:0x436e)==r.w.map_state.loaded_combination&&
        s.word(s.jp?0x46f6:0x4370)==r.w.map_state.loaded_palette,"Door map selection differs");
  check(s.word(0x31)==r.w.actors.scene().camera_x&&s.word(0x33)==r.w.actors.scene().camera_y,"Door final actual camera differs");
  check(r.audio.instructions()>0,"Door never used its actual audio owner");
  const auto source_polls=s.raw_inputs.size()-first_poll,native_polls=r.cursor-first_poll;
  const unsigned key_word=unsigned(key[0])|unsigned(key[1])<<8;
  bool accepted_timing{};
  if(semantic_timing&&!disabled_transitions&&matching_condition) {
    if(style==14&&key_word==(s.jp?9556u:9496u)) {
      check(source_polls==45&&native_polls==44&&source_palette_waits==std::array<unsigned,2>{1,1}&&
          native_palette_waits==std::array<unsigned,2>{1,0}&&source_white_pending_upload&&native_white_without_pending&&
          source_half_polls==std::array<unsigned,2>{21,24}&&native_half_polls==std::array<unsigned,2>{21,23}&&
          s.bus->work_ram[0xd]==0x80&&r.w.fade.state().brightness==0x80,
          "White transition escaped its proven pending-palette NMI timing case");
      accepted_timing=true;
    } else if(s.jp&&style==11&&key_word==8499) {
      check(source_polls==203&&native_polls==202&&source_palette_waits==std::array<unsigned,2>{0,1}&&
          native_palette_waits==std::array<unsigned,2>{0,0}&&source_jp_swirl_interrupted_palette&&source_jp_swirl_pending_upload&&
          source_half_polls==std::array<unsigned,2>{100,103}&&native_half_polls==std::array<unsigned,2>{100,102}&&
          s.bus->work_ram[0xd]==15&&r.w.fade.state().brightness==15,
          "JP swirl escaped its proven interrupted-palette NMI timing case");
      accepted_timing=true;
    } else if(!s.jp&&style==33&&key_word==9066) {
      check(source_polls==53&&native_polls==53&&source_palette_waits==std::array<unsigned,2>{0,0}&&
          native_palette_waits==std::array<unsigned,2>{0,0}&&source_us33_pre_wait_fade_interrupt&&native_us33_initial_fade_delay&&
          source_half_polls==std::array<unsigned,2>{20,32}&&native_half_polls==std::array<unsigned,2>{20,32}&&
          s.bus->work_ram[0xd]==10&&r.w.fade.state().brightness==9&&
          s.bus->work_ram[0x28]==1&&s.bus->work_ram[0x29]==1&&s.bus->work_ram[0x2a]==1&&
          r.w.fade.state().step==1&&r.w.fade.state().delay==1&&r.w.fade.state().remaining==0,
          "US33 escaped its proven pre-WAIT fade NMI timing case");
      accepted_timing=true;
    } else if(s.jp&&style==16&&key_word==8499) {
      check(source_polls==964&&native_polls==964&&source_palette_waits==std::array<unsigned,2>{0,1}&&
          native_palette_waits==std::array<unsigned,2>{1,0}&&
          source_half_polls==std::array<unsigned,2>{60,904}&&native_half_polls==std::array<unsigned,2>{61,903}&&
          source_work[1].size()==7219&&source_work[0].size()==367&&
          source_jp_swirl_interrupted_palette&&source_jp_swirl_pending_upload&&
          source_jp16_secondary_transport_pc==0xc08b34&&source_jp16_secondary_upload_consumed&&
          native_jp16_secondary_upload_pending&&s.bus->work_ram[0xd]==15&&r.w.fade.state().brightness==15,
          "JP16 escaped its proven cancelling palette NMI phase case");
      accepted_timing=true;
    }
  }
  if(!accepted_timing)check(source_half_polls==native_half_polls&&source_palette_waits==native_palette_waits,
      "Door physical phases differ after authored work/party/RNG/palette/map/camera agreement source_polls(out/in)="+
      std::to_string(source_half_polls[1])+"/"+std::to_string(source_half_polls[0])+" native_polls(out/in)="+
      std::to_string(native_half_polls[1])+"/"+std::to_string(native_half_polls[0])+" source_palette_waits(out/in)="+
      std::to_string(source_palette_waits[1])+"/"+std::to_string(source_palette_waits[0])+" native_palette_waits(out/in)="+
      std::to_string(native_palette_waits[1])+"/"+std::to_string(native_palette_waits[0]));
  check(accepted_timing||s.bus->work_ram[0xd]==r.w.fade.state().brightness,"Door final brightness differs after authored work/party/RNG/palette/map/camera agreement source="+
      std::to_string(s.bus->work_ram[0xd])+" native="+std::to_string(r.w.fade.state().brightness)+
      " source_nmis="+std::to_string(s.nmis)+" native_publications="+std::to_string(r.w.clock.publications));
  check(accepted_timing||r.cursor==s.raw_inputs.size(),"Full door input poll count differs after final party/RNG/palette/map/camera agreement native="+
      std::to_string(r.cursor-first_poll)+" source="+std::to_string(s.raw_inputs.size()-first_poll));
  if(accepted_timing)std::cout<<"ACCEPT explicit semantic timing "<<a.title<<" style="<<style
      <<" source_polls="<<source_polls<<" native_polls="<<native_polls<<" source_brightness="
      <<unsigned(s.bus->work_ram[0xd])<<" native_brightness="<<unsigned(r.w.fade.state().brightness)
      <<"; ordered source work and final owners match, physical CPU/NMI coincidence excluded\n";
  std::cout<<"PASS complete door "<<a.title<<" style="<<style<<" entered="<<entered<<" disabled="<<disabled_transitions<<" source_instructions="<<s.cpu.instruction_count
      <<" native_polls="<<native_polls<<" source_polls="<<source_polls<<" source_sounds="<<s.sound_requests.size()-first_sound<<'\n';
}
void cold_palette_reset(const eb::GameAssets &a) {
  Rig r(a);Source s(a);s.initialize();
  check(!r.b.background.has_loaded_record(),"Persistent session invented a loaded battle record");
  const auto palettes=r.w.palette.staged;
  r.w.clock.frame_counter=0xa7;r.w.clock.interrupt_mask=0x81;
  r.w.fade.begin_out(1,3);r.w.fade.write_brightness(15);
  r.w.display.queue_clear();const auto bytes=r.w.display.pending_bytes();
  r.w.frame_display.hdma_enable=0xf8;r.w.frame_display.mosaic=0x63;
  r.b.video={7,{0x58,0x5c,0x60,0x0c},{0x10,0x63}};
  for(unsigned i=0;i<32;++i)s.bus->work_ram[i]=std::uint8_t(i+1);
  s.call(s.jp?0xc2de0b:0xc2de96);
  r.w.presentation.restore_battle_palettes();
  for(unsigned i=0;i<32;++i)check(s.bus->work_ram[i]==0,"Cold source palette destination failed to clear its32 low mirrors");
  check(r.w.clock.frame_counter==0&&r.w.clock.interrupt_mask==0&&r.w.clock.effective_interrupt_mask()==0x81&&r.w.fade.state().brightness==0&&
        r.w.fade.state().step==0xff&&r.w.fade.state().delay==3&&r.w.fade.state().remaining==3,
        "Cold native reset lost exact clock/mirror range or cleared adjacent fade state");
  check(r.w.display.producer_index()==0&&r.w.display.consumer_index()==0&&
        r.w.display.pending_bytes()==bytes&&r.w.frame_display.hdma_enable==0&&r.w.frame_display.mosaic==0&&
        r.b.video==battle::BackgroundDisplayState{}&&r.w.palette.staged==palettes,
        "Cold native reset invented palette publication or cleared retained DMA credit");
  std::cout<<"PASS cold palette restore "<<a.title<<" actual unset destination clears32 mirrors; NMI mirror cleared, palette banks retained\n";
}
void shared_palette_reset(const eb::GameAssets &a) {
  Rig r(a);Source s(a);s.initialize();
  const auto &catalog=r.battle_content.backgrounds;
  std::array<unsigned,2> layers{};unsigned found{};
  for(unsigned i=1;i<catalog.layers().size()&&found<2;++i)
    if(catalog.layers().definition(i).bitdepth==4)layers[found++]=i;
  check(found==2,"Shared palette proof lacks real four-bit layers");
  const BattleBackgroundPair pair{layers[0],layers[1],0};
  r.w.fade.force_blank();s.bus->work_ram[0xd]=0x80;s.bus->write_byte(0x2100,0x80);
  s.call(s.jp?0xc2d0d5:0xc2d121,pair.primary,pair.secondary,pair.style);
  r.b.loader.load(pair);
  for(unsigned i=0;i<256;++i) {
    const auto color=std::uint16_t(0x8000|((i*71)&0x7fff));
    r.w.palette.staged_color(i)=color;s.put(0x200+i*2,color);
  }
  s.call(s.jp?0xc2de0b:0xc2de96);
  r.w.presentation.restore_battle_palettes();
  for(unsigned i=0;i<256;++i)check(s.word(0x200+i*2)==r.w.palette.staged_color(i),
      "Shared artwork reset changed a different raw palette slot");
  for(unsigned i=0;i<32;++i)check(s.bus->work_ram[i]==0,"Shared source reset omitted low scene state");
  check(r.w.clock.frame_counter==0&&r.w.clock.interrupt_mask==0&&r.w.fade.state().brightness==0&&
        r.w.frame_display.hdma_enable==0&&r.b.video==battle::BackgroundDisplayState{},
        "Shared artwork restoration bypassed its actual reset owner");
  std::cout<<"PASS shared artwork palette restore "<<a.title<<" original/native real LOAD, primary raw palette and unset secondary reset\n";
}
void invalid_payload(const eb::GameAssets &a,dialogue::ReferenceKey key) {
  Rig r(a);
  WorldDoorEntry entry({r.w.startup_owners(),r.script_teleport_state,*r.content.doors,
      r.content.teleport_resources,r.content.startup,r.content.program,r.w.menus,*r.w.map_load,
      *r.w.relocation,r.w.npc_commands,r.screen_transition,r.fade,r.w.fade,r.w.navigation,
      r.w.input,r.w.music,r.w.sprite_fade,[&](std::uint16_t sound){r.audio.play_sound(sound);}});
  const auto brightness=r.w.fade.state().brightness;const auto flags=r.w.text.event_flags;
  bool rejected{};try{auto operation=entry.begin(key);}catch(const std::logic_error&){rejected=true;}
  check(rejected&&!entry.busy()&&!entry.failed()&&r.w.fade.state().brightness==brightness&&r.w.text.event_flags==flags,
        "Malformed directory placeholder changed live door owners before rejection");
  std::cout<<"PASS invalid directory placeholder "<<a.title<<" key="<<(unsigned(key[0])|unsigned(key[1])<<8)
      <<" rejects absent authored text before mutation\n";
}
void interaction_wrappers(const eb::GameAssets &a) {
  Rig r(a);Source s(a);s.initialize();
  auto snap=saved(r,false);auto archive=saves::SaveArchive::empty(a.version);archive.save(0,snap.state,0);
  auto startup=r.w.startup->begin(snap);
  while(startup->stage()!=WorldStartupStage::ResetWorld) {
    if(startup->advance(1)==dialogue::Progress::Suspended)r.service(*startup->runtime_operation());
  }
  seed(s,r,archive);near_call(s,s.jp?0xc0b652:0xc0b67f);r.drive(*startup);startup.reset();
  const auto queue_base=s.jp?0x6170:0x5dea,current=s.jp?0x6188:0x5e02,next=s.jp?0x618a:0x5e04;
  const auto counter=s.jp?0x9a7e:0x97ca;
  const auto game=s.jp?0x9aa9:0x97f5,delta=s.jp?3:0;
  // The exact actor helper returns the actual word, including values beyond
  // boolean1. Its regional binding consumes no operand or random/frame work.
  ActionBindings bindings(a.version);
  for(unsigned value:{0u,1u,0x8000u,0xffffu}) {
    s.put(game+144-delta,value);s.call(s.jp?0xc0c33f:0xc0c35d);
    const auto bound=bindings.compile({ActionRequestKind::CallEngine,0,s.jp?0xc0c33fu:0xc0c35du,0,0,0,0},*r.content.scripts);
    check(s.cpu.accumulator==value&&bound.operation==NativeAction::ReadMovedThisTick&&!bound.parameter_bytes,
          "ReadMovedThisTick lost its actual regional word or consumed script operands");
  }
  for(unsigned selector:{0x63u,0x66u})for(unsigned seed_value:{0u,1u,2u}) {
    const std::uint32_t key=seed_value==0?0u:seed_value==1?0x00c7d33eu:0xff123456u;
    r.w.queue.reset_after_restore();r.w.queued.pending=0;
    s.put(current,0);s.put(next,0);s.put(s.jp?0x6146:0x5dc0,0xffff);s.put(s.jp?0x6120:0x5d9a,0);
    for(unsigned i=0;i<4;++i) {
      s.put(queue_base+i*6,r.w.queued.records[i].type);
      std::copy(r.w.queued.records[i].key.begin(),r.w.queued.records[i].key.end(),s.bus->work_ram.begin()+queue_base+i*6+2);
    }
    r.w.text.window().active.argument=0x76540002;r.w.text.window().active.working=0xabcd0003;
    near_call(s,s.jp?0xc10504:0xc10301);const auto window=s.cpu.accumulator;
    s.put(window+27,2);s.put(window+29,0x7654);s.put(window+23,3);s.put(window+25,0xabcd);
    std::vector<std::uint8_t> operands;
    if(selector==0x66)operands={std::uint8_t(seed_value==0?0:1),std::uint8_t(seed_value==0?0:seed_value+1)};
    for(unsigned i=0;i<4;++i)operands.push_back(std::uint8_t(key>>(i*8)));
    s.put(counter,0);
    const auto entry=selector==0x63?(s.jp?0xc17067:0xc16de8):(s.jp?0xc1739c:0xc1711c);
    for(unsigned i=0;i<operands.size();++i) {
      s.cpu.x_index=operands[i];near_call(s,entry);
      check(s.cpu.accumulator==(i+1<operands.size()?entry&0xffff:0),
            "Actual interaction command operand gathering returned at the wrong byte");
      if(i+1<operands.size())check(s.word(next)==0&&s.word(s.jp?0x6120:0x5d9a)==0,
          "Partial interaction command changed the actual queue");
    }
    std::vector<std::uint8_t> code{0x1f,std::uint8_t(selector)};code.insert(code.end(),operands.begin(),operands.end());code.push_back(2);
    auto program=std::make_shared<dialogue::Program>(a.version,std::vector<dialogue::ContentBlock>{{0,0,code}},std::vector<dialogue::Location>{{0,0}});
    dialogue::Conversation text(program,r.w.menus);text.start(dialogue::EntryId{0});auto native=r.w.runtime->begin(text);r.runtime(*native);native.reset();
    check(s.word(current)==r.w.queued.current&&s.word(next)==r.w.queued.next&&s.word(s.jp?0x6120:0x5d9a)==r.w.queued.pending,
          "Interaction wrapper queue indices or pending state differ");
    for(unsigned i=0;i<4;++i)check(s.word(queue_base+i*6)==r.w.queued.records[i].type&&
        std::equal(r.w.queued.records[i].key.begin(),r.w.queued.records[i].key.end(),s.bus->work_ram.begin()+queue_base+i*6+2),
        "Interaction wrapper changed a different queue key or type");
    for(unsigned i=0;i<2;++i) {
      const auto &h=r.w.hotspot_state.live[i];const auto at=(s.jp?0x61c2:0x5e3c)+i*14;
      check(h==saves::Hotspot{std::uint16_t(s.word(at)),std::uint16_t(s.word(at+2)),std::uint16_t(s.word(at+4)),
          std::uint16_t(s.word(at+6)),std::uint16_t(s.word(at+8)),std::uint32_t(s.word(at+10)|s.word(at+12)<<16)},
          "Interaction wrapper live hotspot differs");
      check(s.bus->work_ram[game+200-delta+i]==r.w.hotspot_state.saved_modes[i]&&
          s.bus->work_ram[game+202-delta+i]==r.w.hotspot_state.saved_ids[i]&&
          std::uint32_t(s.word(game+204-delta+i*4)|s.word(game+206-delta+i*4)<<16)==r.w.hotspot_state.saved_references[i],
          "Interaction wrapper persisted hotspot selectors or raw reference differ");
    }
    if(s.jp&&selector==0x63&&seed_value==1) {
      r.w.windows.menu_state().skip_adding_command_text=0xbd;
      r.w.windows.output().policy().character_padding=0x9a;
      s.bus->work_ram[0x61e4]=0xbd;s.bus->work_ram[0x61e5]=0x9a;
      s.call(0xc06d6b);r.w.queue.retain_doors();
      check(s.bus->work_ram[0x61e4]==r.w.windows.menu_state().skip_adding_command_text&&
            s.bus->work_ram[0x61e5]==r.w.windows.output().policy().character_padding&&
            !r.w.windows.menu_state().skip_adding_command_text&&!r.w.windows.output().policy().character_padding&&
            s.word(current)==r.w.queued.current&&s.word(next)==r.w.queued.next,
            "JP one-key terminal null did not write its two actual adjacent dialogue owners");
      for(unsigned i=0;i<6;++i)check(s.bus->work_ram[0x61de + i]==r.w.queue.door_scratch()[i],
          "JP six-byte door scratch differs from actual retention");
      r.w.queue.queue().enqueue(10,{1,2,3,4});
      const auto queued=r.w.queued;const auto skip=r.w.windows.menu_state().skip_adding_command_text;
      const auto padding=r.w.windows.output().policy().character_padding;
      bool rejected{};try{r.w.queue.retain_doors();}catch(const std::logic_error&){rejected=true;}
      check(rejected&&r.w.queued==queued&&r.w.windows.menu_state().skip_adding_command_text==skip&&
          r.w.windows.output().policy().character_padding==padding,
          "Unsupported JP multi-key text-policy aliases changed live owners before rejection");
    }
  }
  std::cout<<"PASS interaction wrappers "<<a.title<<" actualCC1F63/66 complete4/6 operands, zero-selector low-byte defaults, full raw keys, moved-word helper\n";
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  bool animations_only{};int first_pack=1;
  while(first_pack<argc) {
    const std::string argument=argv[first_pack];
    if(argument=="--animations-only")animations_only=true;
    else if(argument=="--phase-trace")door_entry_reference::phase_trace=true;
    else if(argument=="--semantic-timing")door_entry_reference::semantic_timing=true;
    else break;
    ++first_pack;
  }
  if(first_pack==argc)return 77;
  if(door_entry_reference::semantic_timing)
    std::cout<<"EXPLICIT semantic-timing mode: five source-proven CPU/NMI phase cases are checked separately; no physical timing parity claim\n";
  unsigned failed_cases{};
  const auto run_case=[&](const auto &assets,unsigned style,auto key,bool matching=true,bool disabled=false) {
    try {door_entry_reference::run(assets,style,key,matching,disabled);}
    catch(const std::exception &e){++failed_cases;std::cerr<<"FAIL complete door "<<assets.title<<" style="<<style<<": "<<e.what()<<'\n';}
  };
  try {for(int i=first_pack;i<argc;++i) {
    auto a=eb::load_game_assets(argv[i],eb::asset_profiles());
    const auto keys=door_entry_reference::candidates(a);
    door_entry_reference::interaction_wrappers(a);
    door_entry_reference::cold_palette_reset(a);
    door_entry_reference::shared_palette_reset(a);
    for(const auto key:keys.invalid_text_records)door_entry_reference::invalid_payload(a,key);
    if(!animations_only&&!door_entry_reference::phase_trace) {
    for(const auto &[style,key]:keys.styles)run_case(a,style,key);
    for(unsigned style:{0,1,4,5,6,7,10,12,13,14,15,33})
      if(!keys.styles.contains(style))throw std::runtime_error("Door reference omitted authored stationary/white/slide variants");
    if(!keys.gated||!keys.text)throw std::runtime_error("Door reference omitted real gated/text records");
    const auto doors=WorldDoorResources::import(a.image,a.version);
    const auto gate_style=doors->entry(*keys.gated).screen_transition;
    run_case(a,gate_style,*keys.gated,true);
    run_case(a,gate_style,*keys.gated,false);
    run_case(a,doors->entry(*keys.text).screen_transition,*keys.text);
    run_case(a,1,keys.styles.at(1),true,true);
    }
    if(door_entry_reference::phase_trace)for(unsigned style:{14,33})run_case(a,style,keys.styles.at(style));
    // Both authored animation configurations are exercised through the
    // complete original caller with a controlled one-byte payload selector.
    // The destination, map/party owners and animation definitions stay real;
    // these are configured transition fixtures, not extra authored map doors.
    for(unsigned style:{11,16}) {
      auto configured=a;
      const auto key=keys.styles.at(1);
      const unsigned offset=unsigned(key[0])|unsigned(key[1])<<8;
      configured.image.at(0xf0000+offset+10)=std::uint8_t(style);
      run_case(configured,style,key);
    }
  }}catch(const std::exception &e){std::cerr<<e.what()<<'\n';return 1;}
  if(failed_cases){std::cerr<<failed_cases<<" door comparison cases failed\n";return 1;}
  return 0;
}
