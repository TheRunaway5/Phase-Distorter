// Complete original CREATE_ENTITY/INIT_ENTITY, both real allocators, and
// C09C35/C02140 retirement. No callee or allocation result is intercepted.
#include "eb/native/entities/graphics/lifecycle.hpp"
#include "eb/native/entities/graphics/object_maps.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/world_party_movement.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include <algorithm>
#include <iostream>
namespace {
using namespace eb::native;
namespace graphics=entities::graphics;
void check(bool value,const std::string &message){if(!value)throw std::runtime_error(message);}
void run(const eb::GameAssets &assets) {
  encounter_reference::Source source(assets);
  const bool jp=source.jp;
  auto sprites=std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
  auto scripts=import_action_scripts(assets.image,assets.version);
  ActorWorld actors(sprites,scripts,assets.version);
  graphics::State pool;graphics::LifecycleState records;
  battle::PsiScratch scratch;battle::PsiDisplayState video;
  WorldDisplayFade fade(WorldDisplayFadeState{0x80});
  graphics::Transport transport(assets.image,assets.version,pool,*sprites,video,scratch,fade);
  graphics::Lifecycle lifecycle(records,actors,*sprites,transport);
  graphics::ObjectMapState object_state;graphics::ObjectMaps object_maps(assets.image,assets.version,object_state,*sprites);lifecycle.bind_object_maps(object_maps);
  const auto compare_maps=[&](const std::string &context){check(std::equal(object_state.bytes.begin(),object_state.bytes.end(),source.bus->work_ram.begin()+object_maps.origin()),"Actual full896byte spritemap pool differs: "+context);};
  const unsigned cells=jp?0x4d86:0x4a00,delta=jp?0x3fe:0;
  unsigned cases{};
  for(unsigned group=0;group<sprites->size();++group)
    for(const bool automatic:{false,true})for(const unsigned prefix:{0u,7u}) {
      const std::string context=assets.title+" group="+std::to_string(group)+
          " automatic="+std::to_string(automatic)+" prefix="+std::to_string(prefix);
      actors.reset_scripts();lifecycle.reset_allocations();
      source.call(jp?0xc0925e:0xc0927c);source.call(jp?0xc01a9c:0xc01a86);
      source.call(jp?0xc01c27:0xc01c11,0x8000,0);
      const unsigned role=automatic?0:24;
      const auto moving_direction=std::uint16_t(group*113+prefix*17+3);
      WorldActorSpec prior;prior.sprite=group;prior.script=35;
      auto previous_creation=lifecycle.begin_create(prior,{role,role+1});check(previous_creation->advance(),"Prior raw creation did not complete");const auto previous=std::optional{previous_creation->actor()};previous_creation.reset();
      check(bool(previous),"Retained direction setup lost its actual prior role: "+context);
      actors.actor(*previous).behavior.moving_direction=moving_direction;actors.retire(*previous);
      source.call(jp?0xc01e5f:0xc01e49,group,35,role);
      source.put((jp?0x1a7c:0x1a86)+role*2,moving_direction);
      source.call(jp?0xc09c14:0xc09c35,role);
      source.call(jp?0xc01c27:0xc01c11,0x8000,0);transport.remap(0x8000,0);
      std::fill_n(pool.cells.begin(),prefix,0x91);
      std::copy(pool.cells.begin(),pool.cells.end(),source.bus->work_ram.begin()+cells);
      for(unsigned i=0;i<65536;++i) {
        const auto byte=std::uint8_t(i*73+group*19+91);
        source.bus->video_ram[i]=byte;video.set_vram_byte(std::uint16_t(i),byte);
      }
      PreparedActorState prepared;
      prepared.x=std::uint16_t(0xfff1+group*31);prepared.y=std::uint16_t(0x8123+group*73);
      prepared.height=std::uint16_t(group*113);prepared.direction=0;
      for(unsigned i=0;i<8;++i)prepared.variables[i]=std::uint16_t(group*29+i*0x2345);
      source.put(jp?0xa3e:0xa48,prepared.height);
      for(unsigned i=0;i<8;++i)source.put((jp?0xa2e:0xa38)+i*2,prepared.variables[i]);
      source.put(jp?0xa40:0xa4a,0xa55a);
      source.put(0x1e0e,prepared.x);source.put(0x1e10,prepared.y);
      const auto reference=std::uint16_t(0xa55a^group);
      records.roles[role].displayed_reference=reference;
      source.put((jp?0x1ab8:0x341a)+role*2,reference);
      const auto spec=actors.prepare_actor(group,35,prepared);
      auto operation=lifecycle.begin_create(spec,automatic?AuthoredActorRoles{}:AuthoredActorRoles{24,25});
      check(operation->advance()&&!operation->needs_publication(),"Forced-blank creation did not complete: "+context);
      source.call(jp?0xc01e5f:0xc01e49,group,35,automatic?0xffff:24);
      const auto id=operation->actor();operation.reset();
      check(lifecycle.owns(id),"Actual raw creation did not bind its real actor identity: "+context);
      check(*actors.actor(id).authored_role()==source.cpu.accumulator&&source.cpu.accumulator==role,
          "Actual INIT_ENTITY role differs: "+context);
      check(actors.actor(id).behavior.moving_direction==moving_direction&&
          actors.actor(id).behavior.moving_direction==source.word((jp?0x1a7c:0x1a86)+role*2),
          "CREATE_ENTITY lost actual prior retired moving direction: "+context);
      const auto &record=lifecycle.role(role);const unsigned offset=role*2;
      const auto &map_record=object_maps.role(role);compare_maps(context);
      check(map_record.allocated&&map_record.pointer==source.word(0x112e - (jp?10:0)+offset)&&
          map_record.size==source.word(0x2916+delta+offset),"Actual creation map pointer/size differs: "+context);
      check(record.allocated&&record.geometry_sprite==group&&
          record.allocation_cell==source.word(0x2952+delta+offset)&&
          record.destination==source.word(0x298e + delta+offset)&&
          record.displayed_reference==source.word((jp?0x1ab8:0x341a)+offset),
          "Actual retained raw creation metadata differs: "+context);
      check(sprites->definition(group).width*4==source.word(0x2a7e + delta+offset)&&
          sprites->definition(group).height/8==source.word(0x2aba+delta+offset),
          "Actual raw creation dimensions differ: "+context);
      check(std::equal(pool.cells.begin(),pool.cells.end(),source.bus->work_ram.begin()+cells),
          "Actual CREATE_ENTITY allocator/remap differs: "+context);
      check(video.vram()==source.bus->video_ram,"Complete CREATE_ENTITY raw VRAM differs: "+context);
      const auto retained=record;const auto occupied=pool.cells;const auto retained_maps=object_state.bytes;
      actors.retire(id);source.call(jp?0xc09c14:0xc09c35,role);
      check(records.roles[role]==retained&&pool.cells==occupied&&object_state.bytes==retained_maps,
          "Bare C09C35 released retained raw geometry: "+context);
      check(!lifecycle.owns(id),"Retired raw actor retained a live identity: "+context);
      const auto ordinary=actors.create_authored(spec,{role,role+1});
      check(ordinary&&!lifecycle.owns(*ordinary),"Ordinary creation borrowed another actor's retained allocation: "+context);
      actors.retire(*ordinary);
      lifecycle.release(role);actors.release_authored_appearance(role);
      source.call(jp?0xc0214e:0xc02140,role);compare_maps(context);
      check(!records.roles[role].allocated&&records.roles[role].destination==retained.destination&&
          records.roles[role].geometry_sprite==retained.geometry_sprite&&
          records.roles[role].displayed_reference==retained.displayed_reference,
          "C02140 erased retained raw role tables: "+context);
      check(std::equal(pool.cells.begin(),pool.cells.end(),source.bus->work_ram.begin()+cells)&&
          video.vram()==source.bus->video_ram,"Actual C02140 allocation/VRAM differs: "+context);
      ++cases;
    }
  check(source.nmis==0&&source.polls==0,"Forced-blank creation leaf acquired physical NMI/input work");
  party::State party(assets.version);WorldPartyState formation;story::RandomState random;
  const auto movement_data=import_party_movement_data(assets.image,assets.version);
  WorldPartyMovement movement(actors,party,formation,random,movement_data);
  party.party_count=2;formation.current_leader_role=24;
  const unsigned shift=jp?10:0,characters=jp?0x9c7f:0x99ce,stride=jp?94:95;
  unsigned startups{};
  for(unsigned member=0;member<6;++member)for(unsigned status:{0u,1u,2u,7u})
    for(unsigned direction=0;direction<8;++direction)for(unsigned phase:{0u,2u}) {
      actors.reset_scripts();lifecycle.reset_allocations();
      source.call(jp?0xc0925e:0xc0927c);source.call(jp?0xc01a9c:0xc01a86);
      source.call(jp?0xc01c27:0xc01c11,0x8000,0);
      unsigned group=1+(member*17+direction*3)%32;
      while(sprites->definition(group).frames<16)group=(group+1)%sprites->size();
      for(unsigned role:{24u,25u}) {
        PreparedActorState prepared;prepared.x=128;prepared.y=128;
        const auto spec=actors.prepare_actor(group,35,prepared);
        auto creation=lifecycle.begin_create(spec,{role,role+1});
        check(creation->advance(),"Forced-blank startup creation did not complete");creation.reset();
        source.put(0x1e0e,128);source.put(0x1e10,128);source.put(jp?0xa3e:0xa48,0);
        for(unsigned i=0;i<8;++i)source.put((jp?0xa2e:0xa38)+i*2,0);
        source.call(jp?0xc01e5f:0xc01e49,group,35,role);
      }
      const auto id=*actors.actor_for_role(25);auto &actor=actors.actor(id);
      actor.action().variables={std::uint16_t(member+2),std::uint16_t(member),0x4321,0x1234,0x8888,2,0xabcd,0xf00d};
      actor.behavior.direction=direction;actor.behavior.surface_flags=std::uint16_t((startups%3)*4);
      actor.action().animation=std::uint16_t(phase);
      for(unsigned i=0;i<8;++i)source.put(0xe5e - shift+i*60+50,actor.action().variables[i]);
      source.put(0x2af6+delta+50,direction);source.put(0x2baa+delta+50,actor.behavior.surface_flags);
      source.put(0x10f2-shift+50,phase);source.put(0x1a42-shift,25);source.put(0x1e88,50);
      source.put((jp?0x9aa9:0x97f5)+148-(jp?3:0),24);
      const unsigned character=characters+member*stride;
      source.bus->work_ram[character+14-(jp?1:0)]=std::uint8_t(status);
      party.character(member+1).afflictions[0]=std::uint8_t(status);
      random={std::uint16_t(startups*997),std::uint16_t(0xabcd-startups*131)};
      source.put(0x24,random.primary_word);source.put(0x26,random.secondary_word);
      formation.character_startup[member]={0x1234,0x5678,0x9abc,0xdef0};
      actors.appearance_scene().footstep_role=9;
      const auto retained=formation.character_startup[member];
      check(movement.prepare_startup(id)==48&&formation.character_startup[member]==retained&&
          actors.appearance_scene().footstep_role==9&&actor.action().variables[3]==8,
          "C03DAA committed post-upload state before actual raw transport");
      auto upload=lifecycle.begin_selected_upload(id,*actor.appearance.displayed(),actor.behavior.surface_flags);
      check(upload->advance()&&!upload->needs_publication(),"Forced-blank startup frame upload did not complete");
      upload.reset();movement.finish_startup(id);
      source.call(jp?0xc04009:0xc03daa);
      const std::string context=assets.title+" startup="+std::to_string(startups);
      check(source.cpu.accumulator==48&&random.primary_word==source.word(0x24)&&random.secondary_word==source.word(0x26),
          "C03DAA actual result/RNG differs: "+context);
      for(unsigned i=0;i<8;++i)check(actor.action().variables[i]==source.word(0xe5e - shift+i*60+50),
          "C03DAA actual script variables differ: "+context);
      const auto &binding=formation.character_startup[member];
      check(binding.member_index==source.word(character+53-(jp?1:0))&&binding.actor_role==source.word(character+59-(jp?1:0))&&
          binding.reserved57==source.word(character+57-(jp?1:0))&&binding.startup_marker==source.word(character+92-(jp?1:0)),
          "C03DAA actual post-upload character fields differ: "+context);
      check(actor.appearance.fingerprint()==source.word((jp?0x1af4:0x3456)+50)&&
          records.roles[25].displayed_reference==source.word((jp?0x1ab8:0x341a)+50)&&
          actors.appearance_scene().footstep_role==24&&source.word(jp?0x2c96:0x2898)==48,
          "C03DAA actual Eight reference/fingerprint/footstep owner differs: "+context);
      check(video.vram()==source.bus->video_ram&&std::equal(pool.cells.begin(),pool.cells.end(),source.bus->work_ram.begin()+cells),
          "Complete C03DAA raw VRAM/allocation differs: "+context);
      ++startups;
    }
  check(source.nmis==0&&source.polls==0,"Forced-blank startup leaf acquired physical NMI/input work");
  std::cout<<"PASS raw actor lifecycle "<<assets.title<<": "<<cases
      <<" complete original creations and bare/full retirements, "<<startups
      <<" complete original C03DAA startup/RNG/Eight uploads, all88cells/full65536VRAM/retainedgeometry/full896maps/pointer/size\n";
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try {for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));}
  catch(const std::exception &error){std::cerr<<"FAIL raw actor lifecycle: "<<error.what()<<'\n';return 1;}
}
