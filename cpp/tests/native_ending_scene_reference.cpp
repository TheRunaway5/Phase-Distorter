// Actual original PLAY_CREDITS execution and the CPU-free credits owner.
// --photo=N admits one real saved photograph; all strict gates remain active.
// Original CPUs, WRAM and scanout are confined to this reference executable.
#define NATIVE_WORLD_BATTLE_RETURN_REFERENCE_NO_MAIN
#include "native_world_battle_return_reference.cpp"
#include "eb/native/cutscenes/ending/scene.hpp"
#include "eb/native/cutscenes/ending/photograph.hpp"
#include "eb/native/cutscenes/ending/initializer_work.hpp"
#include "eb/native/entities/graphics/lifecycle.hpp"
#include "native_ending_text_oracle.hpp"
#include <map>

namespace ending_scene_reference {
using namespace world_battle_reference;
namespace ending=cutscenes::ending;
std::uint64_t digest(std::span<const std::uint8_t> bytes) {
  std::uint64_t hash=1469598103934665603ull;for(const auto byte:bytes){hash^=byte;hash*=1099511628211ull;}return hash;
}
bool selected(unsigned tick,unsigned end) {return tick&& (tick<5||tick%512==0||tick>=end-1);}
void play_credits(Source &source,const bool *prefix_complete=nullptr) {
  source.cpu.program_counter=0xc4ff00;source.cpu.accumulator=source.cpu.x_index=source.cpu.y_index=0;
  source.cpu.status_register=eb::MainCpu65816::InterruptDisable;
  const unsigned stack=source.cpu.stack_pointer;source.cpu.execute_instruction<0x22>(source.jp?0xc4c594:0xc4f554,4);
  for(unsigned step=0;step<1000000000;++step) {
    if(source.cpu.program_counter==0xc4ff04&&source.cpu.stack_pointer==stack)return;
    source.step();
    if(prefix_complete&&*prefix_complete)return;
    if(step==10000000||step==100000000)std::cout<<"SOURCE credits progress instructions="<<step
        <<" nmis="<<source.nmis<<" polls="<<source.polls<<" frames="<<source.bus->completed_frames
        <<" irq="<<source.word(0x20)<<" irqbusy="<<source.word(0x22)<<" nmitimen="<<unsigned(source.bus->work_ram[0x1e])
        <<" scroll="<<source.word(0x3b)<<std::endl;
  }
  throw std::runtime_error("Actual original PLAY_CREDITS exceeded billion-instruction budget "+source.cpu.describe_registers()+
      " nmis="+std::to_string(source.nmis)+" polls="+std::to_string(source.polls)+
      " frames="+std::to_string(source.bus->completed_frames)+" irq="+std::to_string(source.word(0x20))+
      " nmitimen="+std::to_string(source.bus->work_ram[0x1e])+" irqbusy="+std::to_string(source.word(0x22))+
      " scroll="+std::to_string(source.word(0x3b)));
}
struct Sample {
  cutscenes::CreditsTextState text;
  std::array<std::uint16_t,512> rows{};
  std::array<std::uint16_t,256> staged{},displayed{};
  std::array<std::uint8_t,24> converted{};
  std::uint64_t video{},buffer{};
  std::array<std::uint8_t,65536> video_bytes{},buffer_bytes{};
  unsigned pending{},nmis{},polls{},brightness{},step{},scroll{};
};
Sample sample(const Source &source,unsigned callback,unsigned first_nmi,unsigned first_poll) {
  const auto l=ending_text_reference::reference_layout(source.jp?eb::GameVersion::JP:eb::GameVersion::US);Sample s;
  const auto wide=[&](unsigned at){return source.word(at)|(source.word(at+2)<<16);};
  s.text={callback,std::size_t(wide(l.script)-l.staff),wide(l.scroll),std::uint16_t(source.word(l.next)),
      std::uint16_t(source.word(l.row)),std::uint16_t(source.word(l.wipe)),source.word(l.next)==65535};
  for(unsigned i=0;i<512;++i)s.rows[i]=std::uint16_t(source.word(l.rows+i*2));
  for(unsigned i=0;i<256;++i){s.staged[i]=std::uint16_t(source.word(0x200+i*2));s.displayed[i]=std::uint16_t(ending_text_reference::word(source.bus->palette_ram,i*2));}
  if(!source.jp)std::copy_n(source.bus->work_ram.begin()+0xb4f9,24,s.converted.begin());
  std::copy(source.bus->video_ram.begin(),source.bus->video_ram.end(),s.video_bytes.begin());
  std::copy_n(source.bus->work_ram.begin()+0x10000,65536,s.buffer_bytes.begin());
  s.video=digest(s.video_bytes);s.buffer=digest(s.buffer_bytes);
  s.pending=(source.word(l.head)-source.word(l.tail))&127;s.nmis=source.nmis-first_nmi;s.polls=source.polls-first_poll;
  s.brightness=source.bus->work_ram[0xd];s.step=source.bus->work_ram[0x28];s.scroll=source.bus->scene_read_view().background_scroll_y[2];return s;
}
void compare(const Sample &s,const ending::Scene::Operation &operation,const Rig &rig,unsigned first_native_nmi,unsigned first_native_poll) {
  check(operation.text(),"Credits callback sample lost actual text owner");const auto &text=*operation.text();
  const auto tick=text.state().ticks;const auto context="Credits callback"+std::to_string(tick);
  check(text.state()==s.text,context+" script/quarter-scroll/spacing/wipe differs");
  check(text.composition_rows()==s.rows&&text.pending_rows()==s.pending,context+" live composition/pending queue differs");
  if(rig.w.party.version()!=eb::GameVersion::JP)check(text.converted_player_name()==s.converted,context+" retained converted name differs");
  const auto video=rig.w.display.vram();
  if(tick==1) {
    unsigned video_differences{},buffer_differences{},palette_differences{};
    for(unsigned i=0;i<65536;++i){video_differences+=video[i]!=s.video_bytes[i];buffer_differences+=rig.w.scratch.bytes[i]!=s.buffer_bytes[i];}
    for(unsigned i=0;i<256;++i)palette_differences+=rig.w.palette.staged_color(i)!=s.staged[i]||rig.w.palette.displayed_palette(i/16)[i%16]!=s.displayed[i];
    std::cout<<"CALLBACK1 differences video="<<video_differences<<" buffer="<<buffer_differences<<" palette="<<palette_differences
        <<" nmis native="<<rig.w.clock.publications-first_native_nmi<<" source="<<s.nmis
        <<" polls native="<<rig.w.clock.input_polls-first_native_poll<<" source="<<s.polls<<std::endl;
  }
  for(unsigned i=0;i<65536;++i)check(video[i]==s.video_bytes[i],context+" VRAM differs byte="+
      std::to_string(i)+" native="+std::to_string(video[i])+" source="+std::to_string(s.video_bytes[i]));
  for(unsigned i=0;i<65536;++i)check(rig.w.scratch.bytes[i]==s.buffer_bytes[i],context+" BUFFER differs byte="+
      std::to_string(i)+" native="+std::to_string(rig.w.scratch.bytes[i])+" source="+std::to_string(s.buffer_bytes[i]));
  for(unsigned i=0;i<256;++i)check(rig.w.palette.staged_color(i)==s.staged[i]&&rig.w.palette.displayed_palette(i/16)[i%16]==s.displayed[i],context+" staged/displayed palette differs");
  check(rig.w.fade.state().brightness==s.brightness&&rig.w.fade.state().step==s.step,context+" actual fade differs");
  check(rig.w.display.scroll[2].y==s.scroll,context+" direct same-NMI BG3VOFS differs");
  check(rig.w.clock.publications-first_native_nmi==s.nmis,context+" physical NMI count differs native="+std::to_string(rig.w.clock.publications-first_native_nmi)+" source="+std::to_string(s.nmis));
  check(rig.w.clock.input_polls-first_native_poll==s.polls,context+" physical poll ordering differs");
}
void run(const eb::GameAssets &assets,bool named,bool matched_entry_video,bool matched_entry_buffer,int photograph=-1,bool first_callback=false,bool source_assets=false) {
  Rig rig(assets,true,source_assets);Source source(assets);source.original_object_anchor_comparisons=true;source.initialize();source.fixed_buttons=0;
  ending::Resources resources(assets.image,assets.version);
  auto snapshot=saved(rig,false);
  if(photograph>=0) {
    check(unsigned(photograph)<resources.photographs().size(),"Credits photograph fixture index exceeds its source table");
    const unsigned flag=resources.photographs()[unsigned(photograph)].event_flag-1;
    snapshot.state.event_flags[flag/8]|=std::uint8_t(1u<<(flag%8));
    snapshot.state.game.photos[unsigned(photograph)].party={1,0x21,0x41,0x81,0x11,0};
  }
  if(named) {
    if(source.jp)snapshot.state.game.earthbound_player_name={0x41,0x42,0x43,0x44};
    else snapshot.state.game.earthbound_player_name={0x71,0x72,0x73,0x74};
  }
  auto archive=saves::SaveArchive::empty(assets.version);archive.save(0,snapshot.state,0);
  cutscenes::DisplayState display_state;
  cutscenes::Display display(assets.version,display_state,{*rig.w.runtime,rig.w.interactions,rig.w.actors,*rig.w.map_load,rig.w.map_state,
      rig.w.windows,*rig.w.window_graphics,rig.w.party,rig.w.clock,rig.w.presentation,rig.w.visual,rig.w.music,rig.w.music_state,
      rig.w.palette,rig.w.scratch,rig.w.display,rig.w.frame_display,rig.w.fade,rig.b.background,rig.b.loader,rig.b.video,rig.b.blank,
      rig.b.frame,rig.b.frame_state,rig.content.layers,rig.w.layer,rig.audio});
  if(!rig.w.actor_graphics)rig.w.bind_actor_graphics(assets.image);
  auto &graphics=*rig.w.actor_graphics;
  auto startup=rig.w.startup->begin(snapshot);
  while(startup->stage()!=WorldStartupStage::ResetWorld){const auto p=startup->advance(1);if(p==dialogue::Progress::Suspended)rig.service(*startup->runtime_operation());}
  seed(source,rig,archive);
  // The reused encounter helper deliberately starts with recursive-action
  // suppression. This actual world bootstrap fixture admits the same initial
  // guard as the native GAME_INIT owner, before either C0B67F executes.
  source.put(source.jp?0xa56:0xa60,rig.w.clock.action_scripts_disabled);
  near_call(source,source.jp?0xc0b652:0xc0b67f);rig.drive(*startup);startup.reset();
  // The real story caller has completed OAM assembly before INITIALIZE's
  // UPDATE_SCREEN. A startup-only cold fixture leaves the source's partial
  // high-table sentinel at zero, which UPDATE_SCREEN cannot flush. Run the
  // actual ordinary actor/display/input helper on both hosts to establish
  // that admitted caller state; do not manufacture its OAM cursor byte.
  const unsigned entry_poll=source.raw_inputs.size();
  source.observer=[&](Source &s) {
    if(s.cpu.program_counter==0xc08496) {
      std::cout<<"SOURCE entry poll stack="<<s.cpu.stack_pointer<<" words=";
      for(unsigned offset=1;offset<30;offset+=2)std::cout<<std::hex<<s.word(std::uint16_t(s.cpu.stack_pointer+offset))<<',';
      std::cout<<std::dec<<" meter="<<s.word(s.jp?0x8d07:0x89c9)
          <<" actor_guard="<<s.word(s.jp?0xa56:0xa60)<<std::endl;
    }
  };
  source.call(source.jp?0xc100c4:0xc1004e);source.observer={};
  rig.inputs=&source.raw_inputs;rig.cursor=entry_poll;auto entry_frame=rig.w.runtime->begin(story::TickKind::WorldFrame);
  for(unsigned work=0;;++work) {
    check(work<1000000,"Credits entry actor frame exhausted its actual service budget");
    const auto progress=entry_frame->advance(1);
    if(progress==dialogue::Progress::Finished)break;
    if(progress==dialogue::Progress::Suspended)rig.service(*entry_frame);
  }
  entry_frame.reset();
  check(rig.cursor==source.raw_inputs.size(),"Credits entry actor frame input polls differ native="+
      std::to_string(rig.cursor-entry_poll)+" source="+std::to_string(source.raw_inputs.size()-entry_poll));
  {
    const auto video=rig.w.display.vram();unsigned count{},first=65536;
    for(unsigned i=0;i<65536;++i)if(video[i]!=source.bus->video_ram[i]){++count;first=std::min(first,i);}
    std::cout<<"ENTRY video differences="<<count<<" first="<<first;
    if(first<65536)std::cout<<" native="<<unsigned(video[first])<<" source="<<unsigned(source.bus->video_ram[first]);
    std::cout<<" source_guard="<<source.word(source.jp?0xa56:0xa60)
        <<" native_guard="<<rig.w.clock.action_scripts_disabled<<std::endl;
    const unsigned geometry=source.jp?0x3fe:0,shift=source.jp?10:0;
    for(unsigned role=0;role<30;++role) {
      const auto id=rig.w.actors.actor_for_role(role);
      const auto script=source.word(0xa62-shift+role*2);
      const auto &record=graphics.role(role);
      if(script==0xffff&&!id&&!record.allocated)continue;
      std::cout<<"ENTRY role="<<role<<" source_script="<<script<<" native_live="<<bool(id)
          <<" source_cell="<<source.word(0x2952+geometry+role*2)<<" native_cell="<<record.allocation_cell
          <<" source_dest="<<source.word(0x298e + geometry+role*2)<<" native_dest="<<record.destination
          <<" source_ref="<<source.word((source.jp?0x1ab8:0x341a)+role*2)<<" native_ref="<<record.displayed_reference
          <<" native_allocated="<<record.allocated;
      if(id)std::cout<<" native_sprite="<<rig.w.actors.actor(*id).appearance.sprite();
      std::cout<<std::endl;
    }
  }
  if(matched_entry_video) {
    // Explicit component input: both helpers admit the actual native retained
    // VRAM. The full bootstrap mode above retains its original raw-actor
    // discrepancy, and remains the separate end-to-end acceptance gate.
    const auto retained=rig.w.display.vram();
    std::copy(retained.begin(),retained.end(),source.bus->video_ram.begin());
    std::cout<<"ENTRY matched-video helper diagnostic (no bootstrap closure)"<<std::endl;
  }
  ending::PhotographState photograph_state;
  std::unique_ptr<ending::PhotographDisplay> photograph_display;
  if(photograph>=0) {
    photograph_display=std::make_unique<ending::PhotographDisplay>(resources,photograph_state,display,rig.w.startup_owners(),graphics);
    photograph_display->bind_object_display(*rig.w.actor_object_display);
  }
  ending::State state;ending::Scene scene(resources,state,display,rig.w.startup_owners());
  ending::DecodeWorkState decode_work_state;
  std::unique_ptr<ending::AssetWork> asset_work;
  ending::InitializerWorkState initializer_work_state;
  std::unique_ptr<ending::InitializerWork> initializer_work;
  if(source_assets) {
    asset_work=std::make_unique<ending::AssetWork>(assets.version,*rig.source_work,decode_work_state,rig.w.scratch,rig.w.display,rig.w.fade);
    scene.bind_asset_work(*asset_work,{true,0});
    initializer_work=std::make_unique<ending::InitializerWork>(resources,*rig.source_work,
        initializer_work_state,rig.w.palette,display_state.text_tiles,rig.w.actors,rig.w.display);
    scene.bind_initializer_work(*initializer_work,{0xd4,false});
    scene.bind_source_callbacks(*rig.source_callbacks);
  }
  scene.bind_actor_graphics(graphics);
  if(photograph_display)scene.bind_photographs(*photograph_display,rig.content.enemy_motion,&rig.w.peripherals);
  for(const auto &photo:resources.photographs())if(photo.event_flag) {
    const unsigned flag=photo.event_flag-1;rig.w.text.event_flags[flag/8]&=std::uint8_t(~(1u<<(flag%8)));
  }
  if(photograph>=0) {
    const unsigned flag=resources.photographs()[unsigned(photograph)].event_flag-1;
    rig.w.text.event_flags[flag/8]|=std::uint8_t(1u<<(flag%8));
  }
  std::copy(rig.w.text.event_flags.begin(),rig.w.text.event_flags.end(),source.bus->work_ram.begin()+(source.jp?0x9eb3:0x9c08));
  if(matched_entry_buffer) {
    // Explicit component input only. The default comparison retains each
    // complete startup owner's actual BUFFER, including every unwritten byte.
    std::copy_n(source.bus->work_ram.begin()+0x10000,65536,rig.w.scratch.bytes.begin());
    std::cout<<"ENTRY matched-buffer helper diagnostic (no bootstrap closure)"<<std::endl;
  }
  const unsigned first_poll=source.raw_inputs.size(),first_nmi=source.nmis;
  const unsigned first_native_poll=rig.w.clock.input_polls,first_native_nmi=rig.w.clock.publications;
  const auto layout=ending_text_reference::reference_layout(assets.version);const unsigned end=resources.credits()->scroll_length()*4;
  unsigned callbacks{},return_pc{},return_stack{},last_callbacks{};bool installed{};std::map<unsigned,Sample> samples;
  unsigned photo_return{},photo_stack{},photo_index{},slide_return{},slide_stack{},slide_first_poll{};
  std::vector<unsigned> attempted_photographs,rendered_photographs;
  std::vector<std::array<unsigned,6>> photograph_slides;
  std::map<unsigned,std::vector<std::uint32_t>> pixels;
  bool prefix_complete{};
  source.observer=[&](Source &s) {
    if(first_callback&&(s.cpu.program_counter==0xc08616||s.cpu.program_counter==(s.jp?0xc419eau:0xc41a9eu)))
      std::cout<<"SOURCE asset entry pc="<<std::hex<<s.cpu.program_counter<<" direct_page="<<s.cpu.direct_page<<std::dec<<std::endl;
    if(photograph>=0) {
      const auto far_return=[&] {
        const auto stack=s.cpu.stack_pointer;
        return (s.bus->work_ram[std::uint16_t(stack+3)]<<16)|std::uint16_t(s.word(std::uint16_t(stack+1))+1);
      };
      if(s.cpu.program_counter==(s.jp?0xc4c2a0u:0xc4f264u)) {
        photo_index=s.cpu.accumulator;attempted_photographs.push_back(photo_index);
        photo_return=far_return();photo_stack=std::uint16_t(s.cpu.stack_pointer+3);
      }
      if(photo_return&&s.cpu.program_counter==photo_return&&s.cpu.stack_pointer==photo_stack) {
        if(s.cpu.accumulator)rendered_photographs.push_back(photo_index);
        photo_return=0;
      }
      if(s.cpu.program_counter==(s.jp?0xc4c4afu:0xc4f46fu)) {
        slide_return=far_return();slide_stack=std::uint16_t(s.cpu.stack_pointer+3);slide_first_poll=s.polls;
      }
      if(slide_return&&s.cpu.program_counter==slide_return&&s.cpu.stack_pointer==slide_stack) {
        photograph_slides.push_back({photo_index,s.polls-slide_first_poll,s.word(0x31),s.word(0x33),s.word(0x35),s.word(0x37)});slide_return=0;
      }
    }
    if(s.cpu.program_counter==layout.callback) {
      installed=true;return_stack=std::uint16_t(s.cpu.stack_pointer+2);
      return_pc=0xc00000u|std::uint16_t(s.word(std::uint16_t(s.cpu.stack_pointer+1))+1);
    }
    if(return_pc&&s.cpu.program_counter==return_pc&&s.cpu.stack_pointer==return_stack) {
      ++callbacks;if(selected(callbacks,end))samples.emplace(callbacks,sample(s,callbacks,first_nmi,first_poll));return_pc=0;
    }
    if(installed&&s.cpu.program_counter==0xc08522)installed=false;
    if(s.cpu.program_counter==0xc08496)if(const auto it=samples.find(callbacks);it!=samples.end()) {
      it->second.polls=s.polls-first_poll+1;
      if(first_callback&&callbacks==1)prefix_complete=true;
    }
  };
  source.bus->on_presentation_frame=[&](std::span<const std::uint32_t> picture,unsigned width,std::uint64_t) {
    if(selected(last_callbacks,end)&&!pixels.contains(last_callbacks)) {
      check(width==256&&picture.size()==256*224,"Credits source scanout extent differs");pixels.emplace(last_callbacks,std::vector<std::uint32_t>(picture.begin(),picture.end()));
    }
    if(installed)last_callbacks=callbacks;
  };
  play_credits(source,first_callback?&prefix_complete:nullptr);source.observer={};source.bus->on_presentation_frame={};
  if(first_callback)check(prefix_complete&&callbacks==1&&samples.size()==1,
      "Credits startup prefix did not reach the actual first callback/input boundary");
  std::cout<<"SOURCE credits "<<assets.title<<" named="<<named<<" matched_entry_video="<<matched_entry_video<<" matched_entry_buffer="<<matched_entry_buffer<<" callbacks="<<callbacks<<" nmis="<<source.nmis-first_nmi<<" polls="<<source.raw_inputs.size()-first_poll<<" samples="<<samples.size()<<" instructions="<<source.cpu.instruction_count<<std::endl;
  std::vector<std::string> strict_failures;
  const auto verify=[&](bool value,const std::string &message) {
    if(value)return;
    if(photograph<0)check(false,message);
    strict_failures.push_back(message);
  };
  if(photograph>=0) {
    check(attempted_photographs.size()==32,"Actual saved-photo credits did not attempt all32 source slots");
    for(unsigned i=0;i<32;++i)check(attempted_photographs[i]==i,"Actual saved-photo caller changed source slot order");
    check(rendered_photographs==std::vector<unsigned>{unsigned(photograph)}&&photograph_slides.size()==1,
        "Actual saved-photo credits did not render and slide the admitted source record");
    const auto &slide=photograph_slides.front();
    std::cout<<"SOURCE saved-photo index="<<slide[0]<<" slide_polls="<<slide[1]<<" BG1="<<slide[2]<<','<<slide[3]<<" BG2="<<slide[4]<<','<<slide[5]
        <<" attempted="<<attempted_photographs.size()<<" rendered="<<rendered_photographs.size()<<std::endl;
  }
  std::vector<std::array<std::uint16_t,2>> photo_input;
  if(photograph>=0||first_callback) {
    // Both callers use the same constant released-button host schedule.
    // Original loading work can advance text without polling, so retain the
    // original capture and extend that known schedule for the native caller.
    // Strict final poll counts still compare against the unmodified capture.
    check(std::all_of(source.raw_inputs.begin()+first_poll,source.raw_inputs.end(),
        [](const auto &input){return input==std::array<std::uint16_t,2>{};}),
        "Saved-photo original caller departed from its released-button host schedule");
    photo_input=source.raw_inputs;photo_input.resize(photo_input.size()+65536);
  }
  rig.inputs=photograph>=0||first_callback?&photo_input:&source.raw_inputs;rig.cursor=first_poll;rig.phase="credits";
  auto operation=scene.begin();unsigned compared{},seen{};
  for(unsigned work=0;!operation->complete()&&work<2000000;++work) {
    const auto progress=operation->advance(1);
    if(progress==dialogue::Progress::Suspended) {
      if(operation->bicycle_dismount_pending()) {
        auto dismount=rig.bicycle.begin(operation->runtime_operation());rig.drive(*dismount);dismount.reset();operation->respond_bicycle_dismount();
      } else {auto *child=operation->runtime_operation();check(child,"Credits suspension lacks actual runtime child");rig.service(*child);}
    }
    if(operation->text()&&state.callbacks!=seen) {
      seen=unsigned(state.callbacks);
      if(const auto sample_it=samples.find(seen);sample_it!=samples.end()) {
        if(photograph<0)compare(sample_it->second,*operation,rig,first_native_nmi,first_native_poll);
        else try {compare(sample_it->second,*operation,rig,first_native_nmi,first_native_poll);}
          catch(const std::exception &error){strict_failures.push_back(error.what());}
        ++compared;
        if(first_callback) {
          check(compared==1&&seen==1,"Credits startup prefix compared an unexpected callback");
          std::cout<<"PASS actual first credits callback/input prefix "<<assets.title<<" named="<<named<<std::endl;
          return;
        }
        if(const auto expected=pixels.find(seen);expected!=pixels.end()) {
          const auto frame=rig.w.runtime->published_frame();check(bool(frame),"Credits NMI did not publish its actual display");
          const auto actual=eb::rasterize_direct_scene({frame,{}});verify(actual==expected->second,"Credits physical scanout differs callback="+std::to_string(seen));
        }
      }
    }
  }
  check(operation->complete(),"Complete credits exhausted actual caller budget");check(operation->result()==0,"Credits return differs");operation.reset();
  verify(state.callbacks==callbacks&&state.hold_frames==2000&&compared==samples.size(),"Credits complete text/hold/sample counts differ");
  verify(rig.cursor==source.raw_inputs.size(),"Credits complete input polls differ");
  verify(rig.w.clock.publications-first_native_nmi==source.nmis-first_nmi,"Credits complete physical NMI count differs");
  compare_party(source,rig);
  const auto video=rig.w.display.vram();unsigned returned_video_differences{},first_returned_video=65536;
  for(unsigned i=0;i<65536;++i)if(video[i]!=source.bus->video_ram[i]){++returned_video_differences;first_returned_video=std::min(first_returned_video,i);}
  verify(!returned_video_differences,"Credits restored VRAM differs bytes="+std::to_string(returned_video_differences)+" first="+std::to_string(first_returned_video));
  for(unsigned i=0;i<256;++i)verify(rig.w.palette.staged_color(i)==source.word(0x200+i*2),"Credits restored staged palette differs color="+std::to_string(i));
  check(rig.w.random.primary_word==source.word(0x24)&&rig.w.random.secondary_word==source.word(0x26),"Credits RNG differs");
  check(!scene.failed()&&!scene.busy()&&!display.failed()&&!display.busy(),"Credits completion poisoned its actual owners");
  if(photograph>=0) {
    const auto &playback=state.photographs;const auto &slide=photograph_slides.front();
    verify(playback.index==32&&playback.attempted==32&&playback.displayed==1&&playback.stage==ending::PhotoPlaybackStage::Complete,
        "Credits saved-photo slot/return sequence differs");
    verify(playback.fade_in_frames==64&&playback.fade_out_frames==64&&playback.slide_frames==slide[1],
        "Credits saved-photo fade/slide authored frame counts differ");
    verify(playback.last_slide_scroll==std::array<std::uint16_t,4>{std::uint16_t(slide[2]),std::uint16_t(slide[3]),std::uint16_t(slide[4]),std::uint16_t(slide[5])},
        "Credits saved-photo complete slide staged registers differ");
    verify(photograph_state.current_photo==unsigned(photograph)&&!rig.w.spawn.photograph&&rig.w.clock.disabled_transitions==0,
        "Credits saved-photo lifecycle restoration differs");
    std::cout<<"SAVED_PHOTO authored attempted="<<playback.attempted<<" displayed="<<playback.displayed
        <<" fade_in="<<playback.fade_in_frames<<" fade_out="<<playback.fade_out_frames<<" slide="<<playback.slide_frames
        <<" BG1="<<playback.last_slide_scroll[0]<<','<<playback.last_slide_scroll[1]
        <<" BG2="<<playback.last_slide_scroll[2]<<','<<playback.last_slide_scroll[3]<<std::endl;
    std::cout<<"SAVED_PHOTO complete index="<<photograph<<" callbacks native="<<state.callbacks<<" source="<<callbacks
        <<" nmis native="<<rig.w.clock.publications-first_native_nmi<<" source="<<source.nmis-first_nmi
        <<" polls native="<<rig.cursor-first_poll<<" source="<<source.raw_inputs.size()-first_poll
        <<" strict_failures="<<strict_failures.size()<<std::endl;
    for(const auto &failure:strict_failures)std::cout<<"STRICT saved-photo: "<<failure<<'\n';
    check(strict_failures.empty(),"Complete saved-photo credits retained strict physical/state mismatches");
  }
  std::cout<<"PASS complete credits "<<assets.title<<" named="<<named<<" matched_entry_video="<<matched_entry_video<<" matched_entry_buffer="<<matched_entry_buffer<<" callbacks="<<state.callbacks<<" actual_hold="<<state.hold_frames<<" nmis="<<source.nmis-first_nmi<<" polls="<<rig.cursor-first_poll<<" source_scanouts="<<pixels.size()<<std::endl;
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try {
    bool matched_entry_video{},matched_entry_buffer{},first_callback{},source_assets{};int photograph=-1;std::vector<std::string> packs;
    for(int i=1;i<argc;++i) {
      const std::string argument=argv[i];
      if(argument=="--matched-entry-video")matched_entry_video=true;
      else if(argument=="--matched-entry-buffer")matched_entry_buffer=true;
      else if(argument=="--first-callback")first_callback=true;
      else if(argument=="--source-assets")source_assets=true;
      else if(argument.starts_with("--photo=")) {
        const auto value=argument.substr(8);std::size_t used{};photograph=std::stoi(value,&used);
        if(used!=value.size()||photograph<0||photograph>=32)throw std::invalid_argument("Credits photo fixture requires index0..31");
      }
      else if(argument.starts_with("--"))throw std::invalid_argument("Unknown ending reference option");
      else packs.push_back(argument);
    }
    if(packs.empty())return 77;
    if(first_callback&&(photograph>=0||matched_entry_video||matched_entry_buffer))
      throw std::invalid_argument("Credits first-callback prefix requires actual no-photo startup inputs");
    if(source_assets&&!first_callback)
      throw std::invalid_argument("Credits source-asset fixture is limited to its actual first callback frontier");
    for(const auto &pack:packs) {
      const auto assets=eb::load_game_assets(pack,eb::asset_profiles());
      ending_scene_reference::run(assets,false,matched_entry_video,matched_entry_buffer,photograph,first_callback,source_assets);
      if(photograph<0)ending_scene_reference::run(assets,true,matched_entry_video,matched_entry_buffer,-1,first_callback,source_assets);
    }
    return 0;
  }
  catch(const std::exception &error){std::cerr<<"FAIL complete credits: "<<error.what()<<'\n';return 1;}
}
