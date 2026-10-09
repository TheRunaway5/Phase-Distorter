// Complete original PLAY_CAST_SCENE, direct and authored SpecialEvent11.
// No original callee is intercepted or acknowledged without its work.
#define main retained_world_battle_return_reference_main
#include "native_world_battle_return_reference.cpp"
#undef main
#include "eb/native/cutscenes/cast/scene.hpp"
#include "eb/native/cutscenes/services.hpp"
#include "eb/native/entities/graphics/lifecycle.hpp"
#include <map>
#include <set>
namespace cast_scene_reference {
using namespace world_battle_reference;
namespace cast=cutscenes::cast;
unsigned cases{};bool sample_pixels{};
struct Checkpoint {
  std::array<std::array<std::uint16_t,27>,30> actors{};
  std::array<std::array<std::uint16_t,5>,30> raw_graphics{};
  std::array<std::uint8_t,88> allocation_tags{};
  std::array<std::uint8_t,896> maps{};
  std::array<std::uint8_t,1036> working{};
  std::array<std::uint8_t,544> objects{};
  std::uint8_t display_id{};
  std::array<std::uint64_t,7> work{};
};
Checkpoint capture(Source &source,unsigned frames,unsigned names,unsigned creates,unsigned clears,unsigned palettes) {
  Checkpoint result;const unsigned shift=source.jp?10:0,geometry=source.jp?0x3fe:0;
  for(unsigned role=0;role<30;++role){auto &out=result.actors[role];const unsigned offset=role*2;
    out[0]=std::uint16_t(source.word(0xa62-shift+offset));
    out[1]=std::uint16_t(source.word(0x2af6+geometry+offset));
    out[2]=std::uint16_t(source.word(0x1a86-shift+offset));
    out[3]=std::uint16_t(source.word(0x2b32+geometry+offset));
    out[4]=std::uint16_t(source.word(0x10f2-shift+offset));
    for(unsigned axis=0;axis<3;++axis){
      out[5+axis*2]=std::uint16_t(source.word(0xb8e - shift+axis*60+offset));
      out[6+axis*2]=std::uint16_t(source.word(0xc42-shift+axis*60+offset));
      out[11+axis*2]=std::uint16_t(source.word(0xcf6-shift+axis*60+offset));
      out[12+axis*2]=std::uint16_t(source.word(0xdaa-shift+axis*60+offset));}
    for(unsigned variable=0;variable<8;++variable)out[17+variable]=std::uint16_t(source.word(0xe5e - shift+variable*60+offset));
    out[25]=std::uint16_t(source.word(0xb16 - shift+offset));out[26]=std::uint16_t(source.word(0xb52 - shift+offset));
    result.raw_graphics[role]={std::uint16_t(source.word(0x2952+geometry+offset)),
      std::uint16_t(source.word(0x298e + geometry+offset)),std::uint16_t(source.word((source.jp?0x1ab8:0x341a)+offset)),
      std::uint16_t(source.word(0x2a7e + geometry+offset)),std::uint16_t(source.word(0x2aba+geometry+offset))};
  }
  for(unsigned cell=0;cell<88;++cell)result.allocation_tags[cell]=source.bus->work_ram[(source.jp?0x4d86:0x4a00)+cell];
  std::copy_n(source.bus->work_ram.begin()+(source.jp?0x4a04:0x467e),896,result.maps.begin());
  std::copy_n(source.bus->work_ram.begin()+(source.jp?0x2800:0x2400),1036,result.working.begin());
  result.display_id=source.bus->work_ram[0x2e]^3;check(result.display_id==1||result.display_id==2,"Cast UPDATE_SCREEN lost its actual buffer");
  std::copy_n(source.bus->work_ram.begin()+(result.display_id==1?0x500:0x800),544,result.objects.begin());
  result.work={frames,names,creates,clears,palettes,source.word(0x3b),source.word(source.jp?0x9939:0x9641)};
  return result;
}
void compare_checkpoint(const Checkpoint &source,const Rig &rig,const cast::State &state,
    const entities::graphics::Lifecycle &graphics,const entities::graphics::State &pool) {
  check(source.work==std::array<std::uint64_t,7>{state.actor_frames,state.names,state.created_actors,state.scroll_clears,
    state.palette_uploads,rig.w.display.staged_scroll[2].y,rig.w.actors.scene().action_script_state},
    "Cast ordered authored work/scroll/state differs frame="+std::to_string(state.actor_frames));
  for(unsigned role=0;role<30;++role){const auto id=rig.w.actors.actor_for_role(role);const auto &expected=source.actors[role];
    check(id.has_value()==(expected[0]!=0xffff),"Cast ordered actor occupancy differs frame="+std::to_string(state.actor_frames)+" role="+std::to_string(role));
    if(!id)continue;
    const auto &actor=rig.w.actors.actor(*id);const auto &action=actor.action();std::array<std::uint16_t,27> actual{};
    actual[0]=std::uint16_t(actor.script_style());actual[1]=actor.behavior.direction;actual[2]=actor.behavior.moving_direction;
    actual[3]=actor.behavior.movement_speed;actual[4]=action.animation;
    for(unsigned axis=0;axis<3;++axis){actual[5+axis*2]=std::uint16_t(action.position[axis]>>16);actual[6+axis*2]=std::uint16_t(action.position[axis]);
      actual[11+axis*2]=std::uint16_t(action.velocity[axis]>>16);actual[12+axis*2]=std::uint16_t(action.velocity[axis]);}
    for(unsigned variable=0;variable<8;++variable)actual[17+variable]=action.variables[variable];
    actual[25]=std::uint16_t(actor.behavior.projected_x);actual[26]=std::uint16_t(actor.behavior.projected_y);
    for(unsigned field=0;field<actual.size();++field)check(actual[field]==expected[field],
      "Cast ordered actor state differs frame="+std::to_string(state.actor_frames)+" role="+std::to_string(role)+" field="+
      std::to_string(field)+" native="+std::to_string(actual[field])+" source="+std::to_string(expected[field]));
    if(graphics.owns(*id)){const auto &record=graphics.role(role);const auto &definition=rig.content.sprites->definition(record.geometry_sprite);
      const std::array<std::uint16_t,5> retained{record.allocation_cell,record.destination,record.displayed_reference,
        std::uint16_t(definition.width*4),std::uint16_t(definition.height/8)};
      for(unsigned field=0;field<retained.size();++field)check(retained[field]==source.raw_graphics[role][field],
        "Cast ordered retained graphics differs frame="+std::to_string(state.actor_frames)+" role="+std::to_string(role)+
        " field="+std::to_string(field)+" native="+std::to_string(retained[field])+" source="+std::to_string(source.raw_graphics[role][field])+
        " script="+std::to_string(actor.script_style())+" sprite="+std::to_string(actor.appearance.sprite())+
        " pose="+std::to_string(actor.appearance.displayed()?actor.appearance.displayed()->pose:0xffff));}
  }
  check(rig.w.actor_object_maps&&rig.w.actor_object_display,"Cast did not bind the actual object producer");
  for(unsigned i=0;i<source.maps.size();++i)check(rig.w.actor_object_map_state.bytes[i]==source.maps[i],
    "Cast completed creation-map byte differs frame="+std::to_string(state.actor_frames)+" byte="+std::to_string(i));
  for(unsigned i=0;i<source.working.size();++i)check(rig.w.actor_object_display_state.working[i]==source.working[i],
    "Cast completed drawing-queue byte differs frame="+std::to_string(state.actor_frames)+" byte="+std::to_string(i));
  const auto selected=rig.w.frame_display.preview_screen();check(selected.display_id==source.display_id&&bool(selected.raw_objects),"Cast actual selected OAM owner differs frame="+std::to_string(state.actor_frames)+" native="+std::to_string(selected.display_id)+" source="+std::to_string(source.display_id)+" raw="+std::to_string(bool(selected.raw_objects)));
  for(unsigned i=0;i<source.objects.size();++i)check(selected.raw_objects->bytes[i]==source.objects[i],
    "Cast completed OAM byte differs frame="+std::to_string(state.actor_frames)+" byte="+std::to_string(i)+
    " native="+std::to_string(selected.raw_objects->bytes[i])+" source="+std::to_string(source.objects[i]));
  for(unsigned cell=0;cell<pool.cells.size();++cell)check(pool.cells[cell]==source.allocation_tags[cell],
    "Cast ordered raw allocation tag differs frame="+std::to_string(state.actor_frames)+" cell="+std::to_string(cell)+
    " native="+std::to_string(pool.cells[cell])+" source="+std::to_string(source.allocation_tags[cell]));
}
struct ActorFrame final:story::ActorFrameService {
  const story::Scene &scene;explicit ActorFrame(const story::Scene &s):scene(s){}
  bool uses(const story::Scene &s) const noexcept override{return &s==&scene;}
  void apply(story::ActorFramePhase) override{}
};
void play_cast(Source &source,bool nested) {
  const unsigned target=nested?(source.jp?0xc1bd62:0xc1befc):(source.jp?0xc4bf69:0xc4ed0e);
  source.cpu.program_counter=(target&0xff0000)|0xff00;source.cpu.accumulator=nested?11:0;
  source.cpu.x_index=source.cpu.y_index=0;source.cpu.status_register=eb::MainCpu65816::InterruptDisable;
  const unsigned end=source.cpu.program_counter+4,stack=source.cpu.stack_pointer;source.cpu.execute_instruction<0x22>(target,4);
  // EVENT801's130 scroll thresholds total624*8 pixels at102/256 pixels
  // per actor frame. Its12529-frame minimum exceeds the generic fixture's
  // 100M-instruction helper limit. The observer separately bounds actual
  // actor frames to13000; this cap only stops malformed original execution.
  for(unsigned work=0;work<300000000;++work){if(source.cpu.program_counter==end&&source.cpu.stack_pointer==stack)return;
    if(source.cpu.stack_pointer<0x1f00||source.cpu.stack_pointer>stack)throw std::runtime_error("Cast original stack escaped actual entry: "+source.cpu.describe_registers());
    source.step();}
  throw std::runtime_error("Cast original instruction safety cap: "+source.cpu.describe_registers());
}
void complete(const eb::GameAssets &assets,bool nested) {
  Rig rig(assets);Source source(assets);source.original_object_anchor_comparisons=true;source.initialize();source.fixed_buttons=0;
  auto snapshot=saved(rig,false);
  // Cast is an ending caller: every authored party and pet name is populated.
  // The reused battle fixture initializes only Ness; JP's empty Paula name
  // otherwise requests a literal zero-count (65536-byte) source DMA.
  auto &game=snapshot.state.game;game.party_count=game.controlled_count=4;
  for(unsigned member=0;member<4;++member){game.party_order[member]=game.display_order[member]=std::uint8_t(member+1);game.controlled_order[member]=std::uint8_t(member);
    auto &character=snapshot.state.characters[member];character.values=snapshot.state.characters[0].values;
    for(unsigned i=0;i<4;++i){character.name[i]=std::uint8_t((source.jp?0x41:0x71)+member+i);}character.name[4]=0;}
  for(unsigned i=0;i<5;++i)game.pet_name[i]=std::uint8_t((source.jp?0x61:0x81)+i);
  snapshot.handoff=saves::prepare_continue(snapshot.state,*rig.content.continuing);
  auto archive=saves::SaveArchive::empty(assets.version);archive.save(0,snapshot.state,0);
  cutscenes::DisplayState display_state;cutscenes::Display display(assets.version,display_state,{*rig.w.runtime,rig.w.interactions,rig.w.actors,*rig.w.map_load,rig.w.map_state,
    rig.w.windows,*rig.w.window_graphics,rig.w.party,rig.w.clock,rig.w.presentation,rig.w.visual,rig.w.music,rig.w.music_state,rig.w.palette,rig.w.scratch,
    rig.w.display,rig.w.frame_display,rig.w.fade,rig.b.background,rig.b.loader,rig.b.video,rig.b.blank,rig.b.frame,rig.b.frame_state,rig.content.layers,rig.w.layer,rig.audio});
  // Match NativeSession's actual producer binding: raw actor startup and
  // physical WindowGraphics share this one session-owned lifecycle.
  rig.w.bind_actor_graphics(assets.image);
  const auto &graphics_state=rig.w.actor_graphics_state;
  const auto &graphics=*rig.w.actor_graphics;
  auto startup=rig.w.startup->begin(snapshot);
  check(startup->advance(1)==dialogue::Progress::BudgetExhausted&&startup->stage()==WorldStartupStage::CloseWindows,
    "Cast fixture did not reach the actual restored CloseWindows entry");
  // FILE_MENU_LOOP's Continue arm calls UNKNOWN_C1008E before C0B67F.
  // Match that original close against Startup's restored empty window owner:
  // US executes WINDOW_TICK -> C1004E -> UPDATE_SCREEN even with no windows;
  // JP closes synchronously. Omitting it leaves only US one OAM buffer behind.
  // Seed restored owners before this real helper; never rebase the buffer ID.
  seed(source,rig,archive);
  check(rig.w.frame_display.next_buffer_id()==source.bus->work_ram[0x2e],
    "Cast restored screen owners start at different buffer phases");
  const auto close_native_polls=rig.w.clock.input_polls,close_source_polls=source.raw_inputs.size();
  near_call(source,source.jp?0xc102af:0xc1008e);
  while(startup->stage()!=WorldStartupStage::ResetWorld){if(startup->advance(1)==dialogue::Progress::Suspended)rig.service(*startup->runtime_operation());}
  const unsigned close_polls=source.jp?0:1;
  check(rig.w.clock.input_polls-close_native_polls==close_polls&&source.raw_inputs.size()-close_source_polls==close_polls,
    "Cast actual CloseAll input receipt differs");
  check(rig.w.random.primary_word==source.word(0x24)&&rig.w.random.secondary_word==source.word(0x26),
    "Cast actual CloseAll RNG differs before the later source seed");
  check(rig.w.frame_display.next_buffer_id()==source.bus->work_ram[0x2e],
    "Cast actual CloseAll screen phase differs before the later source seed");
  seed(source,rig,archive);near_call(source,source.jp?0xc0b652:0xc0b67f);rig.drive(*startup);startup.reset();
  // Establish the real preceding actor screen/OAM assembly on both sides.
  // Guarded scripts are an identical original caller input; Cast clears that
  // guard below so all801..858 actor programs execute normally in the scene.
  rig.w.clock.action_scripts_disabled=1;source.put(source.jp?0xa56:0xa60,1);
  source.call(source.jp?0xc100c4:0xc1004e);ActorFrame frame(rig.w.runtime->scene());auto preceding=rig.w.runtime->begin_actor_frame(frame);rig.runtime(*preceding);preceding.reset();
  rig.w.clock.action_scripts_disabled=0;source.put(source.jp?0xa56:0xa60,0);
  cast::Resources resources(assets.image,assets.version);cast::State state;cast::Scene scene(resources,state,display,rig.w.startup_owners());
  const unsigned initial_polls=source.raw_inputs.size(),initial_nmis=source.nmis;unsigned actor_frames{},names{},creates{},clears{},special_palettes{},first_visible{},visible_before_first_update{};
  std::array<std::uint8_t,65536> prepared_vram{},prepared_buffer{};
  unsigned prepared_nmis{},last_actor_nmis{};
  bool playback{},first_updated{},controller_checked{},actor_frame_pending{};std::vector<Checkpoint> checkpoints;
  std::map<unsigned,std::vector<std::uint32_t>> scanouts;
  std::set<unsigned> selected_frames{4941,6828,10482};
  std::array<unsigned,2> frame_buffers{};unsigned published_actor_frame{},visible_actor_frame{},compared_scanouts{},pixel_failures{};
  if(sample_pixels)source.bus->on_presentation_frame=[&](std::span<const std::uint32_t> picture,unsigned width,std::uint64_t){
    if(!playback||!selected_frames.contains(visible_actor_frame)||scanouts.contains(visible_actor_frame))return;
    check(width==256&&picture.size()==256*224,"Cast source physical scanout extent differs");
    scanouts.emplace(visible_actor_frame,std::vector<std::uint32_t>(picture.begin(),picture.end()));
  };
  source.observer=[&](Source &s){const unsigned pc=s.cpu.program_counter;
    if(pc==(s.jp?0xc4bf7d:0xc4ed22)){playback=true;prepared_nmis=s.nmis-initial_nmis;
      std::copy_n(s.bus->video_ram.begin(),65536,prepared_vram.begin());
      std::copy_n(s.bus->work_ram.begin()+0x10000,65536,prepared_buffer.begin());}
    if(pc==(s.jp?0xc4bf88:0xc4ed2d)){check(s.cpu.accumulator==resources.controller_script(),"Cast regional controller script differs");controller_checked=true;}
    if(pc==(s.jp?0xc4bf91:0xc4ed36)){++actor_frames;if(actor_frames<=16||actor_frames%1000==0)selected_frames.insert(actor_frames);check(actor_frames<=13000,"Cast original exceeded authored scroll-frame guard");actor_frame_pending=true;}
    if(pc==(s.jp?0xc0a992:0xc0a9b3)||pc==(s.jp?0xc0a9ae:0xc0a9cf)||pc==(s.jp?0xc0a9ca:0xc0a9eb)){++names;selected_frames.insert(actor_frames);}
    if(pc==(s.jp?0xc4bf08:0xc4ecad)){++creates;selected_frames.insert(actor_frames);}
    if(pc==(s.jp?0xc4bec9:0xc4ec6e)){++special_palettes;selected_frames.insert(actor_frames);}
    if(pc==0xc08616&&s.cpu.x_index==64&&s.word(s.cpu.direct_page+14)==0x7ffe)++clears;
    if(playback&&pc==(s.jp?0xc08b7e:0xc08b8d)){first_updated=true;const unsigned id=s.bus->work_ram[0x2e]^3;
      check(id==1||id==2,"Cast completed source UPDATE_SCREEN lost its buffer");frame_buffers[id-1]=actor_frames;
      if(actor_frame_pending){checkpoints.push_back(capture(s,actor_frames,names,creates,clears,special_palettes));actor_frame_pending=false;last_actor_nmis=s.nmis-initial_nmis;}}
    if(pc==0xc08170){
      // Visible rows precede this VBlank. The callback at line262 occurs after
      // the next DMA, so tag the finished picture with the prior published ID.
      visible_actor_frame=published_actor_frame;const unsigned id=s.bus->work_ram[0x2c];
      if(playback&&id){check(id<=2,"Cast NMI selected an invalid buffer");published_actor_frame=frame_buffers[id-1];}}

    if(playback&&pc==0xc08170&&!(s.bus->ppu_registers()[0]&0x80)&&(s.bus->ppu_registers()[0]&15)){if(!first_visible)first_visible=s.nmis+1;if(!first_updated)++visible_before_first_update;}
  };
  try{play_cast(source,nested);}
  catch(...){std::cerr<<"SOURCE Cast failed frontier "<<assets.title<<" nested="<<nested<<" actor_frames="<<actor_frames<<" names="<<names<<" creates="<<creates<<" clears="<<clears<<" palettes="<<special_palettes
    <<" polls="<<source.raw_inputs.size()-initial_polls<<" nmis="<<source.nmis-initial_nmis<<" scroll="<<source.word(0x3b)<<" state="<<source.word(source.jp?0x9939:0x9641)<<std::endl;throw;}
  source.observer={};source.bus->on_presentation_frame={};std::cout<<"SOURCE original object instruction reaches "<<assets.title;for(auto count:source.original_object_instruction_reaches)std::cout<<' '<<count;std::cout<<'\n';
  check(!source.original_object_instruction_reaches[2]&&!source.original_object_instruction_reaches[5]&&!source.original_object_instruction_reaches[8],"Cast reached an overlapping widened instruction");
  std::cout<<"SOURCE Cast complete "<<assets.title<<" nested="<<nested<<" actor_frames="<<actor_frames<<" names="<<names<<" creates="<<creates<<" clears="<<clears<<" palettes="<<special_palettes
    <<" polls="<<source.raw_inputs.size()-initial_polls<<" nmis="<<source.nmis-initial_nmis<<" visible_before_first_update="<<visible_before_first_update<<" first_visible="<<first_visible<<std::endl;
  check(controller_checked&&first_updated&&first_visible&&!visible_before_first_update,
    "Cast source exposed visible inherited OAM before its first actual screen publication");
  rig.inputs=&source.raw_inputs;rig.cursor=initial_polls;rig.phase="cast";const auto native_polls=rig.w.clock.input_polls,native_nmis=rig.w.clock.publications;std::uint16_t result{};
  const cast::State *progress_state=&state;unsigned verified_frames{};bool prepared_checked{};std::uint64_t native_prepared_nmis{},native_last_actor_nmis{};
  const auto inspect_prepared=[&]{if(prepared_checked||progress_state->actor_frames)return;
    bool controller{};for(unsigned role=0;role<30;++role)if(const auto id=rig.w.actors.actor_for_role(role))
      controller|=rig.w.actors.actor(*id).script_style()==resources.controller_script();
    if(!controller)return;
    prepared_checked=true;native_prepared_nmis=rig.w.clock.publications-native_nmis;
    unsigned vram_diff{},buffer_diff{},vram_first=65536,buffer_first=65536;const auto vram=rig.w.display.vram();
    for(unsigned i=0;i<65536;++i){if(vram[i]!=prepared_vram[i]){++vram_diff;vram_first=std::min(vram_first,i);}
      if(rig.w.scratch.bytes[i]!=prepared_buffer[i]){++buffer_diff;buffer_first=std::min(buffer_first,i);}}
    std::cout<<"Cast prepared phase "<<assets.title<<" nested="<<nested<<" vram_diff="<<vram_diff<<" vram_first="<<vram_first
      <<" buffer_diff="<<buffer_diff<<" buffer_first="<<buffer_first<<" nmis_native="<<native_prepared_nmis<<" nmis_source="<<prepared_nmis<<std::endl;
  };
  const auto serve=[&](WorldRuntime::Operation &child){
    try{
      if(child.service()==story::SceneService::Frame&&progress_state->actor_frames>verified_frames){
        check(progress_state->actor_frames==verified_frames+1&&verified_frames<checkpoints.size(),"Cast skipped an actual actor-frame checkpoint");
        compare_checkpoint(checkpoints[verified_frames],rig,*progress_state,graphics,graphics_state);++verified_frames;
        native_last_actor_nmis=rig.w.clock.publications-native_nmis;
      }
      const bool actual_frame=child.service()==story::SceneService::Frame&&progress_state->actor_frames;
      rig.service(child);
      if(sample_pixels&&actual_frame)if(const auto expected=scanouts.find(unsigned(progress_state->actor_frames));expected!=scanouts.end()){
        const auto published=rig.w.runtime->published_frame();check(bool(published),"Cast WAIT lost the actual published picture");
        const auto actual=eb::rasterize_direct_scene({published,{}});check(actual.size()==expected->second.size(),"Cast published canvas extent differs");
        unsigned differences{},first=unsigned(actual.size());for(unsigned i=0;i<actual.size();++i)if(actual[i]!=expected->second[i]){++differences;first=std::min(first,i);}
        ++compared_scanouts;if(differences){++pixel_failures;std::cerr<<"Cast physical picture differs frame="<<progress_state->actor_frames<<" pixels="<<differences<<" first="<<first<<'\n';}
      }
    }catch(...){
      if(child.service()==story::SceneService::ActorEngine)if(const auto &request=child.actor_request();request){
        const auto &actor=rig.w.actors.actor(request->actor);
        std::cerr<<"NATIVE Cast actual pending owner actor="<<request->actor
          <<" role="<<actor.authored_role().value_or(0xffff)
          <<" discard="<<request->binding.discard_result
          <<" has_appearance="<<actor.has_appearance()
          <<" available="<<actor.appearance.available()
          <<" frames="<<rig.w.actors.ticks()<<" verified_cast_frames="<<verified_frames
          <<" animation="<<actor.action().animation
          <<" direction="<<actor.behavior.direction<<std::endl;
      }
      throw;
    }
  };
  if(nested){cutscenes::Services services(assets.image,assets.version,display,rig.w.input);services.bind_cast(assets.image,assets.version,rig.w.startup_owners());rig.special_events.bind_cinematics(services);
    progress_state=services.cast_state();
    auto program=std::make_shared<dialogue::Program>(assets.version,std::vector<dialogue::ContentBlock>{{0,0,{0x1f,0x41,11,0x02}}});dialogue::Conversation conversation(program,rig.w.prompts);conversation.start(dialogue::Location{0,0});
    auto parent=rig.w.runtime->begin(conversation);while(parent->advance(1)!=dialogue::Progress::Suspended){}
    auto operation=rig.special_events.begin(11,rig.w.runtime->scene_operation(*parent),parent.get());
    for(unsigned work=0;!operation->complete()&&work<2000000;++work){const auto progress=operation->advance(1);inspect_prepared();if(progress==dialogue::Progress::Suspended){if(operation->cinematic()&&operation->cinematic()->runtime_operation())serve(*operation->cinematic()->runtime_operation());else throw std::runtime_error("Cast suspended without runtime or bicycle child");}}
    check(operation->complete(),"Actual nested Cast did not complete");result=operation->result();state=*services.cast_state();operation.reset();dialogue::Response response;response.special_event_result=result;parent->respond_dialogue(response);rig.runtime(*parent);parent.reset();
    check(!services.busy()&&!services.failed()&&!rig.special_events.busy()&&!rig.special_events.failed(),"Cast poisoned the actual authored caller");
  }else{auto operation=scene.begin();for(unsigned work=0;!operation->complete()&&work<2000000;++work){const auto progress=operation->advance(1);inspect_prepared();if(progress==dialogue::Progress::Suspended){if(auto child=operation->runtime_operation())serve(*child);else if(operation->bicycle_dismount_pending())operation->respond_bicycle_dismount();else throw std::runtime_error("Cast suspended without its actual child");}}
    check(operation->complete(),"Actual direct Cast did not complete");result=operation->result();operation.reset();}
  std::cout<<"NATIVE Cast complete "<<assets.title<<" nested="<<nested<<" actor_frames="<<state.actor_frames<<" names="<<state.names<<" creates="<<state.created_actors<<" clears="<<state.scroll_clears<<" palettes="<<state.palette_uploads
    <<" polls="<<rig.w.clock.input_polls-native_polls<<" nmis="<<rig.w.clock.publications-native_nmis<<std::endl;
  check(result==0&&!scene.busy()&&!scene.failed()&&!display.busy()&&!display.failed(),"Cast result or owner completion differs");
  check(state.actor_frames==actor_frames&&state.names==names&&state.created_actors==creates&&state.palette_uploads==special_palettes&&state.scroll_clears==clears,"Cast authored work counts differ");
  check(verified_frames==actor_frames&&checkpoints.size()==actor_frames,"Cast omitted ordered actor-frame proof");
  check(rig.cursor==source.raw_inputs.size()&&rig.w.clock.input_polls-native_polls==source.raw_inputs.size()-initial_polls,"Cast ordered input receipt differs");
  check(state.text_cursor==source.word(source.jp?0xb6a2:0xb4cf)&&state.tile_offset==source.word(source.jp?0xb6a4:0xb4d1)&&state.initial_sleep==source.word(source.jp?0xb6a6:0xb4d3),"Cast retained regional words differ");
  check(rig.w.random.primary_word==source.word(0x24)&&rig.w.random.secondary_word==source.word(0x26),"Cast final RNG differs");compare_party(source,rig);
  for(unsigned color=0;color<256;++color){check(rig.w.palette.staged_color(color)==source.word(0x200+color*2),"Cast staged palette differs color="+std::to_string(color));check(rig.w.palette.displayed_palette(color/16)[color%16]==(source.bus->palette_ram[color*2]|unsigned(source.bus->palette_ram[color*2+1])<<8),"Cast displayed palette differs color="+std::to_string(color));}
  const auto video=rig.w.display.vram();unsigned differences{},first=65536;for(unsigned i=0;i<65536;++i)if(video[i]!=source.bus->video_ram[i]){++differences;first=std::min(first,i);}
  std::cout<<"Cast complete frontier "<<assets.title<<" nested="<<nested<<" vram_diff="<<differences<<" vram_first="<<first
    <<" nmi_phases_native="<<native_prepared_nmis<<','<<native_last_actor_nmis-native_prepared_nmis<<','<<rig.w.clock.publications-native_nmis-native_last_actor_nmis
    <<" nmi_phases_source="<<prepared_nmis<<','<<last_actor_nmis-prepared_nmis<<','<<source.nmis-initial_nmis-last_actor_nmis<<std::endl;
  check(prepared_checked,"Cast omitted its real initialization phase capture");
  std::cout<<"Cast selected physical pictures compared="<<compared_scanouts<<" source="<<scanouts.size()<<" failures="<<pixel_failures<<'\n';
  if(sample_pixels)for(unsigned frame:{4941u,6828u,10482u})check(scanouts.contains(frame),"Cast omitted a previously failing physical picture");
  const bool pictures=!sample_pixels||(compared_scanouts==scanouts.size()&&!pixel_failures);
  const bool physical=rig.w.clock.publications-native_nmis==source.nmis-initial_nmis;
  check(!differences&&physical&&pictures,"Cast restored VRAM/physical NMI parity failed: VRAMdiff="+std::to_string(differences)+" first="+
    std::to_string(first)+" nativeNMI="+std::to_string(rig.w.clock.publications-native_nmis)+" sourceNMI="+std::to_string(source.nmis-initial_nmis)+" pictureFailures="+std::to_string(pixel_failures));++cases;
}
}
int main(int argc,char **argv){unsigned failures{};try{if(argc<2)return 77;for(int i=1;i<argc;++i){if(std::string_view(argv[i])=="--sample-pixels"){cast_scene_reference::sample_pixels=true;continue;}auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());for(bool nested:{false,true})try{cast_scene_reference::complete(assets,nested);}catch(const std::exception &e){++failures;std::cerr<<"FAIL Cast complete "<<assets.title<<" nested="<<nested<<": "<<e.what()<<std::endl;}}std::cout<<(failures?"FAIL":"PASS")<<" Cast complete cases="<<cast_scene_reference::cases<<" failures="<<failures<<'\n';return failures?1:0;}catch(const std::exception &e){std::cerr<<"FAIL Cast complete: "<<e.what()<<'\n';return 1;}}
