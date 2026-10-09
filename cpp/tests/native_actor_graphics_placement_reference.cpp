// Complete C07B52 against the real per-role placement/transport continuation.
// Deferred cases use genuine Runtime publications; their final helper image
// is compared separately with the original forced-blank leaf, not its phase.
#define NATIVE_WORLD_BATTLE_RETURN_REFERENCE_NO_MAIN
#include "native_world_battle_return_reference.cpp"
#include "eb/native/cutscenes/display.hpp"
#include "eb/native/entities/graphics/lifecycle.hpp"
#include "eb/native/world/party/placement.hpp"
namespace graphics_placement_reference {
using namespace world_battle_reference;
namespace graphics=entities::graphics;
void seed_world(Source &source,const Rig &rig) {
  const auto &w=rig.w;const bool jp=source.jp;
  const unsigned game=jp?0x9aa9:0x97f5,characters=jp?0x9c7f:0x99ce,
      stride=jp?94:95,gs=jp?3:0,cs=jp?1:0,trail=jp?0x54dc:0x5156;
  const auto &leader=w.interactions.state();
  for(const auto [offset,value]:std::array<std::pair<unsigned,unsigned>,9>{{
      {130,leader.leader_x},{134,leader.leader_y},{138,leader.leader_direction},
      {142,leader.walking_style},{144,w.control.moved_this_tick},{146,leader.area_character_style},
      {148,w.formation.current_leader_role},{176,w.control.automatic_mode},{75,w.party.party_status}}})
    source.put(game+offset-gs,value);
  source.bus->work_ram[game+174-gs]=w.party.party_count;
  for(unsigned record=0;record<6;++record) {
    const unsigned character=characters+record*stride;
    source.put((jp?0x514e:0x4dc8)+record*2,character);
    for(const auto [offset,value]:std::array<std::pair<unsigned,unsigned>,4>{{
        {53,w.formation.character_startup[record].member_index},{55,w.formation.selected_styles[record]},
        {61,w.formation.trail_cursors[record]},{65,w.formation.last_trail_styles[record]}}})
      source.put(character+offset-cs,value);
    for(unsigned n=0;n<7;++n)source.bus->work_ram[character+14-cs+n]=w.party.character(record+1).afflictions[n];
    source.bus->work_ram[game+150-gs+record]=w.party.display_order[record];
    source.put(game+162-gs+record*2,w.formation.roles[record]);
  }
  for(unsigned i=0;i<256;++i) {
    const auto &point=w.trail.points[i];const unsigned at=trail+i*12;
    const std::array<unsigned,6> values{point.x,point.y,point.surface_flags,point.walking_style,point.direction,point.reserved};
    for(unsigned n=0;n<6;++n)source.put(at+n*2,values[n]);
  }
  source.put(jp?0xa171:0x9f6f,w.maintenance.possessed_players);
  source.put(jp?0xa173:0x9f71,w.following_state.pajamas);
  source.put(jp?0xb68a:0xb4b6,w.actors.appearance_scene().transitions_disabled);
  source.put(0x31,w.actors.scene().camera_x);source.put(0x33,w.actors.scene().camera_y);
  const unsigned shift=jp?10:0,geometry=jp?0x3fe:0;
  for(unsigned role=0;role<30;++role) {
    const auto id=w.actors.actor_for_role(role);const unsigned offset=role*2;
    source.put(0xa62-shift+offset,id?0:0xffff);
    if(!id)continue;
    const auto &actor=w.actors.actor(*id);const auto &action=actor.action();
    for(unsigned axis=0;axis<3;++axis) {
      source.put(0xb8e - shift+axis*60+offset,action.position[axis]>>16);
      source.put(0xc42-shift+axis*60+offset,action.position[axis]);
      source.put(0xcf6-shift+axis*60+offset,action.velocity[axis]>>16);
      source.put(0xdaa-shift+axis*60+offset,action.velocity[axis]);
    }
    for(unsigned n=0;n<8;++n)source.put(0xe5e - shift+n*60+offset,action.variables[n]);
    source.put(0x10f2-shift+offset,action.animation);
    source.put(0xb16-shift+offset,std::uint16_t(actor.behavior.projected_x));
    source.put(0xb52-shift+offset,std::uint16_t(actor.behavior.projected_y));
    source.put(0x2af6+geometry+offset,actor.behavior.direction);source.put(0x2baa+geometry+offset,actor.behavior.surface_flags);
    source.put((jp?0x1af4:0x3456)+offset,actor.appearance.fingerprint());
    source.put((jp?0x3278:0x2e7a)+offset,actor.appearance_context.overlay_flags);
    source.put((jp?0x3020:0x2c22)+offset,actor.appearance_context.walking_style);
    const auto table=rig.content.sprites->frame_table_identity(actor.appearance.sprite());
    source.put(0x29ca+geometry+offset,table);source.put(0x2a06+geometry+offset,table>>16);
    source.put(0x2a42+geometry+offset,rig.content.sprites->raw_header(actor.appearance.sprite())[8]);
    const auto &record=w.actor_graphics->role(role);const auto &definition=rig.content.sprites->definition(record.geometry_sprite);
    source.put(0x298e + geometry+offset,record.destination);source.put(0x2a7e + geometry+offset,definition.width*4);
    source.put(0x2aba+geometry+offset,definition.height/8);source.put(0x2952+geometry+offset,record.allocation_cell);
    source.put((jp?0x1ab8:0x341a)+offset,record.displayed_reference);
    source.put(0x10b6-shift+offset,0xc0);
  }
  std::copy(w.actor_graphics_state.cells.begin(),w.actor_graphics_state.cells.end(),source.bus->work_ram.begin()+(jp?0x4d86:0x4a00));
  const auto video=w.display.vram();std::copy(video.begin(),video.end(),source.bus->video_ram.begin());
}
void prepare(Rig &rig,unsigned count,unsigned direction,unsigned style,unsigned trial) {
  auto &w=rig.w;w.runtime->require_idle();w.actors.reset_scripts();w.actor_graphics->reset_allocations();
  w.fade.write_brightness(0x80);w.party.party_count=std::uint8_t(count);w.party.party_status=0;
  w.party.display_order={};w.formation.current_leader_role=std::uint16_t(24+trial%count);
  w.actors.scene().camera_x=0xfff0;w.actors.scene().camera_y=0x7ffc;
  auto &leader=w.interactions.state();leader.leader_x=0xfff8;leader.leader_y=0x8004;
  leader.leader_direction=std::uint16_t(direction);leader.walking_style=std::uint16_t(style);leader.area_character_style=0;
  w.control.moved_this_tick=false;w.control.automatic_mode=0;
  w.actors.appearance_scene().transitions_disabled=false;w.following_state.pajamas=0;
  w.maintenance.possessed_players=7;
  for(unsigned record=0;record<6;++record) {
    w.formation.trail_cursors[record]=std::uint16_t(record==0||record==2?255:record*31);
    w.formation.selected_styles[record]=0xabcd;w.formation.last_trail_styles[record]=0x1234;
    w.formation.character_startup[record].member_index=std::uint16_t(record);
    w.party.character(record+1).afflictions={};
    w.party.character(record+1).afflictions[0]=std::uint8_t(trial%3);
    w.party.character(record+1).afflictions[1]=std::uint8_t((trial+record)%3);
    if(record>=count)continue;
    w.party.display_order[record]=std::uint8_t(record+1);w.formation.roles[record]=std::uint16_t(24+record);
    // C03A94 has already created the current walking artwork's geometry.
    // Admit that authored geometry; this helper does not create a new one.
    const unsigned status=trial%3,pose=status==1||style==4?1:0;
    WorldActorSpec spec;spec.sprite=status==2?12:rig.content.party_following.graphics[record][pose];spec.script=35;
    spec.action.variables={std::uint16_t(record),std::uint16_t(record),0x4321,0x1234,0x8888,2,0xabcd,0x5a5a};
    spec.action.position={0x00801234,0x00905678,0x34567890};spec.action.velocity={0x00018000,0xffffc000,0x56781234};
    spec.action.animation=2;auto creation=w.actor_graphics->begin_create(spec,{24+record,25+record});
    check(creation->advance(),"Forced-blank placement creation requested fabricated work");
    auto &actor=w.actors.actor(creation->actor());creation.reset();actor.behavior.direction=std::uint16_t((direction+record+3)%8);
    actor.behavior.surface_flags=std::uint16_t((record%3)*4);
  }
  for(unsigned i=0;i<256;++i)w.trail.points[i]={std::uint16_t(0xffef+i*7),std::uint16_t(0x800f-i*3),
      std::uint16_t((i%3)*4),std::uint16_t(style),std::uint16_t((direction+i)%8),0x4567};
}
void compare(const Source &source,const Rig &rig,unsigned count) {
  const auto &w=rig.w;const bool jp=source.jp;const unsigned shift=jp?10:0,geometry=jp?0x3fe:0,
      characters=jp?0x9c7f:0x99ce,stride=jp?94:95,cs=jp?1:0;
  for(unsigned record=0;record<count;++record) {
    const unsigned role=24+record,offset=role*2;const auto &actor=w.actors.actor(*w.actors.actor_for_role(role));
    for(unsigned axis=0;axis<3;++axis) {
      check(actor.action().position[axis]==(source.word(0xb8e - shift+axis*60+offset)<<16|source.word(0xc42-shift+axis*60+offset)),"C07B52 position/fraction differs");
      check(actor.action().velocity[axis]==(source.word(0xcf6-shift+axis*60+offset)<<16|source.word(0xdaa-shift+axis*60+offset)),"C07B52 velocity/fraction differs");
    }
    for(unsigned n=0;n<8;++n)check(actor.action().variables[n]==source.word(0xe5e - shift+n*60+offset),"C07B52 script variables differ");
    check(actor.behavior.direction==source.word(0x2af6+geometry+offset)&&actor.behavior.surface_flags==source.word(0x2baa+geometry+offset)&&
        std::uint16_t(actor.behavior.projected_x)==source.word(0xb16-shift+offset)&&std::uint16_t(actor.behavior.projected_y)==source.word(0xb52-shift+offset),"C07B52 direction/surface/projection differs");
    check(actor.appearance_context.overlay_flags==source.word((jp?0x3278:0x2e7a)+offset)&&
        actor.appearance_context.walking_style==source.word((jp?0x3020:0x2c22)+offset),"C07B52 overlay/walking style differs");
    check(w.actor_graphics->role(role).displayed_reference==source.word((jp?0x1ab8:0x341a)+offset),"C07B52 actual current reference differs");
    const unsigned at=characters+record*stride;
    check(w.formation.selected_styles[record]==source.word(at+55-cs)&&w.formation.trail_cursors[record]==source.word(at+61-cs)&&
        w.formation.last_trail_styles[record]==source.word(at+65-cs),"C07B52 retained character/trail styles differ");
    check(!actor.scripts_and_physics_enabled&&!actor.tick_callback_enabled,"C07B52 real pause bits differ");
  }
  check(w.maintenance.possessed_players==source.word(jp?0xa171:0x9f6f),"C07B52 possession count differs");
  check(w.display.vram()==source.bus->video_ram,"C07B52 complete raw VRAM differs");
  check(std::equal(w.actor_graphics_state.cells.begin(),w.actor_graphics_state.cells.end(),source.bus->work_ram.begin()+(jp?0x4d86:0x4a00)),"C07B52 retained allocation cells differ");
}
void run(const eb::GameAssets &assets) {
  Rig rig(assets,true);rig.w.bind_actor_graphics(assets.image);
  auto snapshot=saved(rig,false);auto startup=rig.w.startup->begin(snapshot);rig.drive(*startup);startup.reset();
  rig.w.runtime->reset_interrupt_callback();
  Source source(assets);unsigned cases{};
  for(unsigned count:{1u,4u,6u})for(unsigned direction=0;direction<8;++direction)
    for(unsigned style:{0u,4u,12u,13u})for(unsigned budget:{1u,4096u}) {
      prepare(rig,count,direction,style,cases/2);seed_world(source,rig);
      const auto ticks=rig.w.actors.ticks(),nmis=rig.w.clock.publications,polls=rig.w.clock.input_polls;
      const auto random=rig.w.random;const auto trail=rig.w.trail.points;
      source.call(source.jp?0xc07da2:0xc07b52);
      world::PartyPlacement placement(rig.w.following,rig.w.actors,*rig.w.runtime);
      for(unsigned work=0;;++work) {
        check(work<10000,"C07B52 source placement work budget exhausted");
        const auto progress=placement.advance(budget);
        if(progress==dialogue::Progress::Finished)break;
        check(progress==dialogue::Progress::BudgetExhausted&&!placement.runtime_operation(),"Forced-blank placement fabricated a publication");
      }
      compare(source,rig,count);
      check(rig.w.actors.ticks()==ticks&&rig.w.clock.publications==nmis&&rig.w.clock.input_polls==polls&&
          rig.w.random==random&&rig.w.trail.points==trail,"C07B52 fabricated actor/RNG/trail/input/NMI work");
      ++cases;
    }
  check(source.nmis==0&&source.polls==0,"Forced-blank C07B52 leaf acquired original physical work");
  // Saturate the actual descriptor budget, suspend repeatedly, and publish
  // through the real Runtime before selecting later members.
  for(unsigned budget:{1u,4096u}) {
    prepare(rig,6,3,12,1);seed_world(source,rig);source.call(source.jp?0xc07da2:0xc07b52);
    const auto ticks=rig.w.actors.ticks(),polls=rig.w.clock.input_polls,nmis=rig.w.clock.publications;
    const auto random=rig.w.random;rig.w.fade.write_brightness(15);
    const auto initial_second=rig.w.actors.actor(*rig.w.actors.actor_for_role(25)).action();
    auto earlier=rig.w.display.begin_transfer({battle::PsiTransferKind::Vram,0,0x1200,0x6000,0},rig.w.scratch,rig.w.fade);
    check(earlier->advance()&&earlier->complete(),"Placement could not admit the preceding actual DMA");earlier.reset();
    std::copy_n(rig.w.scratch.bytes.begin(),0x1200,source.bus->video_ram.begin()+0xc000);
    world::PartyPlacement placement(rig.w.following,rig.w.actors,*rig.w.runtime);unsigned publications{};
    for(unsigned work=0;;++work) {
      check(work<10000,"Deferred placement exhausted actual service budget");
      const auto progress=placement.advance(budget);
      if(progress==dialogue::Progress::Finished)break;
      if(progress!=dialogue::Progress::Suspended)continue;
      auto *child=placement.runtime_operation();check(child&&child->service()==story::SceneService::Publication,"Deferred placement replaced its real NMI owner");
      const auto before=rig.w.actors.actor(*rig.w.actors.actor_for_role(25)).action();
      if(publications==0)check(before.position==initial_second.position&&before.variables==initial_second.variables&&
          before.animation==initial_second.animation,"Party placement advanced the second member before the first actual upload publication");
      check(placement.advance(budget)==dialogue::Progress::Suspended&&placement.runtime_operation()==child&&
          rig.w.actors.actor(*rig.w.actors.actor_for_role(25)).action().position==before.position&&
          rig.w.actors.actor(*rig.w.actors.actor_for_role(25)).action().variables==before.variables&&
          rig.w.actors.actor(*rig.w.actors.actor_for_role(25)).action().animation==before.animation,
          "Repeated suspension advanced a later role or replaced its publication");
      rig.service(*child);++publications;
    }
    check(publications>0,"Saturated placement omitted its mandatory real publication");
    auto flush=rig.w.runtime->begin_publication();rig.runtime(*flush);flush.reset();compare(source,rig,6);
    check(rig.w.actors.ticks()==ticks&&rig.w.clock.input_polls==polls&&rig.w.random==random&&rig.w.clock.publications==nmis+publications+1,
        "Deferred placement fabricated actor/input/RNG work or omitted actual NMI receipts");
  }
  const auto before=rig.w.clock.publications;
  auto abandoned=std::make_unique<world::PartyPlacement>(rig.w.following,rig.w.actors,*rig.w.runtime);
  abandoned.reset();
  check(rig.w.following.failed()&&rig.w.runtime->failed(),"Unstarted abandoned placement falsely retained healthy Runtime admission");
  bool rejected{};
  try{auto frame=rig.w.runtime->begin(story::TickKind::WorldFrame);}
  catch(const std::logic_error &){rejected=true;}
  check(rejected&&rig.w.clock.publications==before,"Abandoned placement admitted unrelated actor/NMI work");
  std::cout<<"PASS raw C07B52 placement "<<assets.title<<": "<<cases
      <<" complete original leaf cases/fullVRAM+88cells, two real saturated Runtime continuations\n";
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try{for(int i=1;i<argc;++i)graphics_placement_reference::run(eb::load_game_assets(argv[i],eb::asset_profiles()));}
  catch(const std::exception &error){std::cerr<<"FAIL raw party placement: "<<error.what()<<'\n';return 1;}
}
