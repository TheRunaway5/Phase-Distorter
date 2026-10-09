// Actual original TRY_RENDERING_PHOTOGRAPH: complete false branches and
// explicitly selected true helper fixtures. Full PLAY_CREDITS is separate.
#define NATIVE_WORLD_BATTLE_RETURN_REFERENCE_NO_MAIN
#include "native_world_battle_return_reference.cpp"
#include "eb/native/cutscenes/ending/photograph.hpp"
#include "native_ending_text_oracle.hpp"
namespace {
using namespace world_battle_reference;
namespace ending=cutscenes::ending;
void false_photos(const eb::GameAssets &assets) {
  Rig rig(assets);
  cutscenes::DisplayState display_state;
  cutscenes::Display display(assets.version,display_state,{*rig.w.runtime,rig.w.interactions,rig.w.actors,
      *rig.w.map_load,rig.w.map_state,rig.w.windows,*rig.w.window_graphics,rig.w.party,rig.w.clock,
      rig.w.presentation,rig.w.visual,rig.w.music,rig.w.music_state,rig.w.palette,rig.w.scratch,
      rig.w.display,rig.w.frame_display,rig.w.fade,rig.b.background,rig.b.loader,rig.b.video,
      rig.b.blank,rig.b.frame,rig.b.frame_state,rig.content.layers,rig.w.layer,rig.audio});
  rig.w.bind_actor_graphics(assets.image);
  ending::Resources resources(assets.image,assets.version);ending::PhotographState state{19};
  ending::PhotographDisplay photos(resources,state,display,rig.w.startup_owners(),*rig.w.actor_graphics);
  photos.bind_object_display(*rig.w.actor_object_display);
  std::fill(rig.w.text.event_flags.begin(),rig.w.text.event_flags.end(),0);
  rig.w.display.transient_memory().after_interrupt();
  check(bool(rig.w.display.transient_memory().allocate(43)),"False-photo fixture lost actual SBRK allocation");
  for(unsigned i=0;i<65536;++i)rig.w.scratch.bytes[i]=std::uint8_t(i*37+(i>>8)+11);
  for(unsigned bank=0;bank<2;++bank)for(auto &byte:rig.w.display.transient_memory().bank(bank))byte=0xa7;
  const auto scratch=rig.w.scratch.bytes,video=rig.w.display.vram();const auto staged=rig.w.palette.staged,displayed=rig.w.palette.displayed;const auto upload=rig.w.palette.upload_mode;
  const auto scroll=rig.w.display.staged_scroll;const auto loaded=rig.w.map_state.loaded_combination;
  const auto cache=rig.w.map_state.collision_window.cells();const auto blocks=rig.w.map_state.collision_window.blocks();
  const auto prepared=rig.w.spawn.prepared;const auto actors=rig.w.actors.actors();
  const auto roles=rig.w.actor_lifecycle_state.roles;const auto publications=rig.w.clock.publications;
  const auto polls=rig.w.clock.input_polls,ticks=rig.w.actors.ticks();const auto random=rig.w.random;
  for(unsigned index=0;index<32;++index) {
    ending_text_reference::Oracle oracle(assets.image,assets.version,ending_text_reference::reference_layout(assets.version).staff);
    const bool jp=assets.version==eb::GameVersion::JP;
    for(unsigned i=0x2000;i<0x2800;++i)oracle.bus->work_ram[i]=0xa7;
    for(unsigned i=0xe000;i<0x20000;++i)oracle.bus->work_ram[i]=std::uint8_t(i*37+(i>>8)+11);
    std::fill_n(oracle.bus->work_ram.begin()+(jp?0x9eb3:0x9c08),128,0);
    oracle.put(jp?0xb6b8:0xb4ef,0x1234);oracle.put(jp?0xb6ba:0xb4f1,19);
    oracle.put(jp?0x4de0:0x4a5a,0x4567);oracle.bus->work_ram[0x30]=0x5a;
    const auto source_before=oracle.bus->work_ram;
    oracle.call(jp?0xc4c2a0:0xc4f264,true,index);
    check(oracle.cpu.accumulator==0,"False photograph original result differs");
    check(std::equal(source_before.begin()+0x2000,source_before.begin()+0x2800,oracle.bus->work_ram.begin()+0x2000)&&
        std::equal(source_before.begin()+0xe000,source_before.end(),oracle.bus->work_ram.begin()+0xe000),
        "False photograph original changed heap/map/path/BUFFER retained contents");
    check(ending_text_reference::word(oracle.bus->work_ram,jp?0xb6b8:0xb4ef)==0x1234&&ending_text_reference::word(oracle.bus->work_ram,jp?0xb6ba:0xb4f1)==19&&
        ending_text_reference::word(oracle.bus->work_ram,jp?0x4de0:0x4a5a)==0x4567&&oracle.bus->work_ram[0x30]==0x5a,
        "False photograph original changed photograph/enemy/palette publication controls");
    auto operation=photos.begin(index);
    check(operation->advance(0)==dialogue::Progress::BudgetExhausted&&!operation->runtime_operation(),
        "False photograph introduced an actual runtime request before its source branch");
    check(operation->advance(1)==dialogue::Progress::Finished&&operation->result()==0,
        "False photograph native branch did not return immediately");
    for(const auto &id:operation->created())check(!id,"False photograph manufactured an actor");
    operation.reset();
    check(state.current_photo==19&&rig.w.scratch.bytes==scratch&&rig.w.display.vram()==video&&
        rig.w.display.staged_scroll==scroll&&rig.w.map_state.loaded_combination==loaded&&
        rig.w.map_state.collision_window.cells()==cache&&rig.w.map_state.collision_window.blocks()==blocks&&
        rig.w.clock.publications==publications&&rig.w.clock.input_polls==polls&&
        rig.w.actors.ticks()==ticks&&rig.w.random==random&&rig.w.actors.actors()==actors&&
        rig.w.actor_lifecycle_state.roles==roles,
        "False native photograph mutated actual display/map/RNG/actor time");
    check(rig.w.palette.staged==staged&&rig.w.palette.displayed==displayed&&
        rig.w.palette.upload_mode==upload&&rig.w.spawn.prepared.variables==prepared.variables&&
        rig.w.spawn.prepared.priority==prepared.priority&&rig.w.spawn.prepared.x==prepared.x&&
        rig.w.spawn.prepared.y==prepared.y&&rig.w.spawn.prepared.height==prepared.height&&
        rig.w.spawn.prepared.direction==prepared.direction,
        "False native photograph mutated actual palettes/prepared globals");
    check(rig.w.display.transient_memory().selected_bank()==1&&rig.w.display.transient_memory().cursor()==43,
        "False native photograph changed real SBRK bank/cursor");
    for(unsigned bank=0;bank<2;++bank)for(const auto byte:rig.w.display.transient_memory().bank(bank))
      check(byte==0xa7,"False native photograph cleared retained heap bytes");
  }
  std::cout<<"PASS actual TRY false branch "<<assets.title<<" original_native_cases=32 real_runtime_requests=0 actor_creations=0 NMI=0 polls=0 retained_native_BUFFER_bytes=2097152 source_heap_cache_BUFFER_bytes=2424832\n";
}
void true_photo(const eb::GameAssets &assets,std::uint16_t retained_enemy,unsigned index) {
  const bool jp=assets.version==eb::GameVersion::JP;
  Rig rig(assets,true);Source source(assets);source.original_object_anchor_comparisons=true;source.initialize();source.fixed_buttons=0;
  cutscenes::DisplayState display_state;
  cutscenes::Display display(assets.version,display_state,{*rig.w.runtime,rig.w.interactions,rig.w.actors,
      *rig.w.map_load,rig.w.map_state,rig.w.windows,*rig.w.window_graphics,rig.w.party,rig.w.clock,
      rig.w.presentation,rig.w.visual,rig.w.music,rig.w.music_state,rig.w.palette,rig.w.scratch,
      rig.w.display,rig.w.frame_display,rig.w.fade,rig.b.background,rig.b.loader,rig.b.video,
      rig.b.blank,rig.b.frame,rig.b.frame_state,rig.content.layers,rig.w.layer,rig.audio});
  rig.w.bind_actor_graphics(assets.image);
  ending::Resources resources(assets.image,assets.version);ending::PhotographState state{};
  ending::PhotographDisplay photos(resources,state,display,rig.w.startup_owners(),*rig.w.actor_graphics);
  photos.bind_object_display(*rig.w.actor_object_display);
  auto snapshot=saved(rig,false);
  const unsigned flag=resources.photographs().at(index).event_flag-1;
  snapshot.state.event_flags[flag/8]|=std::uint8_t(1u<<(flag%8));
  snapshot.state.game.photos[index].party={1,0x21,0x41,0x81,0x11,0};
  auto archive=saves::SaveArchive::empty(assets.version);archive.save(0,snapshot.state,0);
  auto startup=rig.w.startup->begin(snapshot);
  while(startup->stage()!=WorldStartupStage::ResetWorld) {
    if(startup->advance(1)==dialogue::Progress::Suspended)rig.service(*startup->runtime_operation());
  }
  seed(source,rig,archive);source.put(jp?0xa56:0xa60,rig.w.clock.action_scripts_disabled);
  near_call(source,jp?0xc0b652:0xc0b67f);rig.drive(*startup);startup.reset();
  source.call(jp?0xc100c4:0xc1004e);auto preceding=rig.w.runtime->begin(story::TickKind::WorldFrame);
  rig.runtime(*preceding);preceding.reset();
  rig.w.clock.disabled_transitions=1;source.put(jp?0xb68a:0xb4b6,1);
  check(rig.w.spawn.enemies==0xffff&&source.word(jp?0x4de0:0x4a5a)==0xffff,
      "Actual full startup did not retain the source enemy-enable word");
  rig.w.spawn.enemies=retained_enemy;source.put(jp?0x4de0:0x4a5a,retained_enemy);
  const unsigned first_poll=source.raw_inputs.size(),first_nmi=source.nmis;
  const auto native_nmi=rig.w.clock.publications,native_poll=rig.w.clock.input_polls;
  std::cout<<"TRUE photo entry "+assets.title+" enemy native="<<unsigned(rig.w.spawn.enemies)<<" source="<<source.word(jp?0x4de0:0x4a5a)<<std::endl;
  source.call(jp?0xc4c2a0:0xc4f264,index);
  check(source.cpu.accumulator==1,"True original photograph did not return success");
  rig.inputs=&source.raw_inputs;rig.cursor=first_poll;rig.phase="photograph";
  auto operation=photos.begin(index);rig.drive(*operation);
  check(operation->result()==1,"True native photograph did not return success");
  unsigned created{};for(const auto &id:operation->created())created+=bool(id);
  std::cout<<"TRUE photograph "+assets.title+" index="<<index<<" completed real_native_creations="<<created
      <<" nmis native="<<rig.w.clock.publications-native_nmi<<" source="<<source.nmis-first_nmi
      <<" polls native="<<rig.w.clock.input_polls-native_poll<<" source="<<source.raw_inputs.size()-first_poll<<std::endl;
  for(unsigned i=0;i<65536;++i) {
    check(rig.w.display.vram()[i]==source.bus->video_ram[i],"True photograph VRAM differs byte="+std::to_string(i)+
        " native="+std::to_string(rig.w.display.vram()[i])+" source="+std::to_string(source.bus->video_ram[i]));
    check(rig.w.scratch.bytes[i]==source.bus->work_ram[0x10000+i],"True photograph BUFFER differs byte="+std::to_string(i));
  }
  for(unsigned i=0;i<256;++i)check(rig.w.palette.staged_color(i)==source.word(0x200+i*2),
      "True photograph staged palette differs");
  std::cout<<"TRUE photograph controls mode native="<<unsigned(rig.w.spawn.photograph)<<" source="<<source.word(jp?0xb6b8:0xb4ef)
      <<" index native="<<state.current_photo<<" source="<<source.word(jp?0xb6ba:0xb4f1)
      <<" enemy native="<<unsigned(rig.w.spawn.enemies)<<" source="<<source.word(jp?0x4de0:0x4a5a)<<std::endl;
  check(!rig.w.spawn.photograph&&source.word(jp?0xb6b8:0xb4ef)==0&&state.current_photo==source.word(jp?0xb6ba:0xb4f1)&&
      unsigned(rig.w.spawn.enemies)==source.word(jp?0x4de0:0x4a5a),"True photograph mode/index/enemy restore differs");
  check(rig.w.spawn.enemies==retained_enemy,"True photograph normalized its actual retained enemy-enable word");
  unsigned actor_fields{},raw_fields{};const unsigned shift=jp?10:0,geometry_shift=jp?0x3fe:0;
  for(const auto &id:operation->created())if(id) {
    const auto &actor=rig.w.actors.actor(*id);const unsigned role=*actor.authored_role(),offset=role*2;
    const auto &action=actor.action();
    const std::string context="True photograph created role="+std::to_string(role);
    const auto field=[&](std::uint16_t actual,unsigned at,const char *name) {
      check(actual==source.word(at+offset),context+" "+name+" differs native="+std::to_string(actual)+
          " source="+std::to_string(source.word(at+offset)));++actor_fields;
    };
    field(std::uint16_t(actor.script_style()),0xa62-shift,"script");
    field(std::uint16_t(actor.appearance.sprite()),0x2cd6+geometry_shift,"sprite");
    field(actor.behavior.direction,0x2af6+geometry_shift,"direction");
    field(actor.behavior.moving_direction,0x1a86-shift,"moving direction");
    field(actor.behavior.movement_speed,0x2b32+geometry_shift,"movement speed");
    field(action.animation,0x10f2-shift,"animation");
    for(unsigned axis=0;axis<3;++axis) {
      field(std::uint16_t(action.position[axis]>>16),0xb8e - shift+axis*60,"position whole");
      field(std::uint16_t(action.position[axis]),0xc42-shift+axis*60,"position fraction");
      field(std::uint16_t(action.velocity[axis]>>16),0xcf6-shift+axis*60,"velocity whole");
      field(std::uint16_t(action.velocity[axis]),0xdaa-shift+axis*60,"velocity fraction");
    }
    for(unsigned variable=0;variable<8;++variable)field(action.variables[variable],0xe5e - shift+variable*60,"script variable");
    field(actor.appearance_context.overlay_flags,0x2e7a+geometry_shift,"saved-member overlay flags");
    check(rig.w.actor_graphics->owns(*id),context+" lacks its actual raw allocation");
    const auto &record=rig.w.actor_graphics->role(role);const auto &geometry=rig.content.sprites->definition(record.geometry_sprite);
    const std::array<std::uint16_t,5> actual{record.allocation_cell,record.destination,record.displayed_reference,
        std::uint16_t(geometry.width*4),std::uint16_t(geometry.height/8)};
    const std::array<unsigned,5> at{0x2952+geometry_shift,0x298e + geometry_shift,jp?0x1ab8u:0x341au,
        0x2a7e + geometry_shift,0x2aba+geometry_shift};
    for(unsigned i=0;i<actual.size();++i) {
      check(actual[i]==source.word(at[i]+offset),context+" raw field="+std::to_string(i)+" differs native="+
          std::to_string(actual[i])+" source="+std::to_string(source.word(at[i]+offset)));++raw_fields;
    }
  }
  for(unsigned i=0;i<88;++i)check(rig.w.actor_graphics_state.cells[i]==source.bus->work_ram[(jp?0x4d86:0x4a00)+i],
      "True photograph raw allocation tag differs cell="+std::to_string(i));
  std::cout<<"TRUE photograph exact created_actor_fields="<<actor_fields<<" retained_raw_fields="<<raw_fields<<" allocation_tags=88"<<std::endl;
  check(rig.w.display.staged_scroll[1].x==source.word(0x35)&&rig.w.display.staged_scroll[1].y==source.word(0x37),
      "True photograph BG2 scroll reset differs");
  check(rig.w.clock.publications-native_nmi==source.nmis-first_nmi&&rig.cursor==source.raw_inputs.size(),
      "True photograph physicalNMI/input count differs");
  std::cout<<"PASS true photograph actual map/rawcreation caller\n";
}

}
int main(int argc,char **argv) {
  if(argc<2||argc>4)return 77;
  try{const auto assets=eb::load_game_assets(argv[1],eb::asset_profiles());
    if(argc>=3){
      const std::string option=argv[2];
      check(option=="--true-1234"||option=="--true-ffff","Unknown photograph reference option");
      const unsigned index=argc==4?unsigned(std::stoul(argv[3])):0;
      check(index<32,"Photograph index exceeds authored table");
      true_photo(assets,option=="--true-1234"?0x1234:0xffff,index);
    }
    else false_photos(assets);
    return 0;}
  catch(const std::exception &e){std::cerr<<"FAIL photograph child: "<<e.what()<<'\n';return 1;}
}
