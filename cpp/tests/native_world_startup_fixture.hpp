#pragma once
#include "eb/native/world_startup.hpp"
#include "eb/native/dialogue/import.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "native_world_walking_fixture.hpp"
#include "native_dialogue_substitution_test_assets.hpp"

namespace startup_test {
using namespace eb::native;
namespace d = dialogue;
namespace helpers = interaction_test_assets;
inline WorldMap empty_map() {
  std::vector<std::uint8_t> b(0x20000);
  WorldMapLayout l{{},0x1a000,0x1aa00,0x1c000,0x1c100,0x1c104,0x1c108,
                   0x1c400,0x1c430,0x1c600,0x1c10c,0x1c110,1};
  for(unsigned i=0;i<10;++i) l.block_chunks[i]=i*0x2800;
  helpers::pointer(b,l.graphics,0x1d000);
  helpers::pointer(b,l.arrangements,0x1d500);
  helpers::pointer(b,l.collision_pointers,0x1e000);
  helpers::pointer(b,l.animation_properties,0x1c800);
  helpers::put(b,l.event_pointers,0xc700);
  unsigned at=0x1d000;helpers::zero_run(b,at,0x7001);
  at=0x1d500;helpers::zero_run(b,at,32);
  return WorldMap(b,l);
}
inline WorldPalettes empty_palettes() {
  std::vector<std::uint8_t> b(0x6000);
  WorldPaletteLayout l{0x1000,0x200,0x4000+32*192,0x2000};
  for(unsigned i=0;i<32;++i) helpers::pointer(b,l.groups+i*4,0x4000+i*192);
  return WorldPalettes(b,l);
}
struct Resources {
  eb::GameVersion version;
  std::vector<std::uint8_t> bytes;
  std::shared_ptr<const d::Program> program;
  std::shared_ptr<const d::FontResources> fonts;
  std::shared_ptr<const d::WindowResources> windows;
  std::shared_ptr<const d::WindowInitializationResources> artwork;
  std::shared_ptr<const party::MeterWindowResources> meters;
  std::shared_ptr<const d::SubstitutionResources> items;
  std::shared_ptr<const party::ItemTransformationResources> transformations;
  std::shared_ptr<const npcs::InteractionResources> interactions;
  std::shared_ptr<const npcs::MapTextResources> map_text;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> actions;
  std::shared_ptr<NpcCatalog> npcs;
  std::shared_ptr<EnemySpawnData> enemies;
  std::unique_ptr<WorldMap> map;
  std::unique_ptr<WorldPalettes> palettes;
  std::unique_ptr<WorldPaletteAnimations> animations;
  std::unique_ptr<WorldCollision> collision;
  std::unique_ptr<WalkingData> walking;
  std::unique_ptr<WorldPartyData> party_data;
  std::unique_ptr<WorldBootstrapData> bootstrap_data;
  std::unique_ptr<saves::ContinueResources> continuing;
  Resources(eb::GameVersion v, std::span<const std::uint8_t> image = {}) : version(v) {
    if(!image.empty()) {
      bytes.assign(image.begin(),image.end());
      program=d::import_program(bytes,v).program;
      fonts=d::FontResources::import(bytes,v);
      windows=d::WindowResources::import(bytes,v);
      artwork=d::WindowInitializationResources::import(bytes,v);
      meters=party::MeterWindowResources::import(bytes,v);
      items=d::SubstitutionResources::import(bytes,v);
      sprites=std::make_shared<SpriteResources>(bytes,sprite_catalog_layout(v));
      actions=import_action_scripts(bytes,v);
      npcs=std::make_shared<NpcCatalog>(bytes,npc_catalog_layout(v));
      enemies=std::make_shared<EnemySpawnData>(import_enemy_spawn_data(bytes,v));
      map=std::make_unique<WorldMap>(bytes,world_map_layout(v));
      palettes=std::make_unique<WorldPalettes>(bytes,world_palette_layout(v));
      animations=std::make_unique<WorldPaletteAnimations>(bytes,world_palette_animation_layout(v));
      collision=std::make_unique<WorldCollision>(bytes,world_collision_layout(v));
    } else {
      bytes=walking_test::content(v);bytes.resize(0x160000);
      helpers::put(bytes,0x30186,749);
      for(unsigned i=0;i<17;++i) {
        const unsigned at=(v==eb::GameVersion::US?0x3e012:0x3dffc)+8*i;
        helpers::put(bytes,at,0);helpers::put(bytes,at+2,1);
        helpers::put(bytes,at+4,0);helpers::put(bytes,at+6,i<4?24+i:28);
      }
      const unsigned timers=v==eb::GameVersion::US?0x15f4bb:0x15f41b;
      bytes[timers]=3;bytes[timers+1]=7;bytes[timers+2]=2;bytes[timers+4]=50;
      const unsigned delivery = v==eb::GameVersion::US ? 0x15f645 : 0x15f5a5;
      const unsigned fallback = v==eb::GameVersion::US ? 0x3fdbd : 0x3f8eb;
      for(unsigned i=0;i<10;++i) {
        helpers::put(bytes,delivery+i*20,i==0?0:1);
        helpers::put(bytes,delivery+i*20+2,180+i);
      }
      for(unsigned i=0;i<4;++i)helpers::put(bytes,fallback+i*2,1);
      const auto &a=helpers::assets(v);
      fonts=a.fonts;windows=a.input.import();meters=a.meters;
      artwork=d::WindowInitializationResources::import(a.input.image,v);
      dialogue_substitution_test_assets::Input item_input(v);items=item_input.load();
      sprites=helpers::make_sprites();
      actions=std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{0x09},0,
                                                std::vector<std::uint32_t>(501,0));
      std::vector<std::uint8_t> npc_bytes(0x3000);
      const NpcCatalogLayout nl{0,0x1000,0x1100,0x1100,0x2000,8,799};
      for(unsigned i=0;i<8;++i)npc_bytes[nl.definitions+i*17]=1;
      npcs=std::make_shared<NpcCatalog>(npc_bytes,nl);
      enemies=walking_test::empty_enemies();
      map=std::make_unique<WorldMap>(empty_map());
      palettes=std::make_unique<WorldPalettes>(empty_palettes());
      std::vector<std::uint8_t> animation_bytes(600);
      helpers::pointer(animation_bytes,0,4);helpers::pointer(animation_bytes,4,32);
      animation_bytes[8]=2;animation_bytes[9]=2;animation_bytes[10]=3;
      animation_bytes[32]=0xe1;animation_bytes[33]=127;animation_bytes[418]=0xff;
      animations=std::make_unique<WorldPaletteAnimations>(animation_bytes,WorldPaletteAnimationLayout{0,1});
      movement_test::Fixture terrain;
      collision=std::make_unique<WorldCollision>(terrain.bytes,terrain.collision_layout);
    }
    transformations=party::ItemTransformationResources::import(bytes,v);
    interactions=npcs::InteractionResources::import(bytes,v);
    map_text=npcs::MapTextResources::import(bytes,v);
    walking=std::make_unique<WalkingData>(bytes,v);
    party_data=std::make_unique<WorldPartyData>(bytes,v);
    bootstrap_data=std::make_unique<WorldBootstrapData>(bytes,v);
    continuing=std::make_unique<saves::ContinueResources>(bytes,v);
    if(!program) program=std::make_shared<d::Program>(v,
        std::vector<d::ContentBlock>{{0,0,{0x05,0xed,0x02,0x02}},{1,0,{0x02}}},
        std::vector<d::Location>{{0,0}},
        std::vector<d::ReferenceBinding>{{continuing->dialogue().pre_game_start,d::Location{0,0}},
          {continuing->dialogue().buzz_buzz,d::Location{1,0}}});
  }
};
struct Fixture {
  Resources &r;
  party::State party;
  d::State text;
  d::TextOutput output;
  d::WindowHost windows;
  std::shared_ptr<d::WindowGraphics> graphics;
  party::MeterWindows meters;
  story::RandomState random{0x1234,0xabcd};
  story::TickState clock;
  story::InputState input;
  party::ItemTransformationState timers;
  party::Inventory inventory;
  ActorWorld actors;
  WorldActivation activation;
  WorldEnemies enemies;
  WorldMapArea area;
  AreaPalettes colors;
  WorldSpawnControls spawn;
  npcs::Interactions talk;
  WorldPartyState formation;
  PartyTrail trail;
  WorldControlState control;
  WorldMaintenanceState maintenance;
  WorldPartyFollowingState following;
  WorldParty updater;
  std::uint16_t &style;
  WorldPartyCreation creation;
  party::MovementPolicyState movement;
  story::PartyFormation refresh;
  WorldBootstrap bootstrap;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue;
  WorldHotspotState hotspot_state;
  WorldHotspots hotspots;
  ScenePalette scene_colors;
  WorldSessionState session;
  std::unique_ptr<WorldRuntime> runtime;
  std::unique_ptr<WorldStartup> startup;
  WorldStartupOwners owners(party::Inventory *other_inventory = nullptr) {
    return {windows,party,actors,*runtime,talk,clock,formation,trail,control,maintenance,following,
        spawn,enemies,other_inventory ? *other_inventory : inventory,hotspots,queue,bootstrap,creation,
        updater,*r.party_data,refresh,style,scene_colors,session,random};
  }
  explicit Fixture(Resources &resources)
      : r(resources),party(r.version),output(r.fonts,text),windows(r.windows,text,output),
        graphics(std::make_shared<d::WindowGraphics>(r.artwork,output)),meters(windows,party,r.meters),
        inventory(party,r.items,r.transformations,timers,random),actors(r.sprites,r.actions,r.version),
        activation(r.npcs,r.sprites,r.actions,r.version),enemies(r.enemies,r.sprites,r.actions),
        area(r.map->prepare(r.map->sector(0,0).combination,text.event_flags)),
        colors(r.palettes->resolve(r.palettes->area_at(0,0),text.event_flags)),
        talk(r.interactions,r.map_text,r.program,windows,actors,*r.collision,area),
        updater(party,actors,*r.party_data,formation),style(talk.state().movement_flags),
        creation(party,actors,*r.party_data,formation,updater,spawn.prepared,trail,style),
        refresh(updater,party,actors,*r.party_data,formation,movement,talk,clock),
        bootstrap(*r.bootstrap_data,*r.walking,actors,party,formation,trail,control,maintenance,following),
        queue(r.version,queued,actors.appearance_scene().intangibility_ticks,phone),
        hotspots(r.version,hotspot_state,talk.state(),clock,actors.appearance_scene(),queue) {
    windows.set_graphics(graphics);
    talk.bind_event_flags();
    runtime=std::make_unique<WorldRuntime>(windows,party,random,meters,clock,input,actors,activation,enemies,
        *r.collision,area,colors,*r.map,*r.palettes,*r.animations,spawn,NpcStripAdmission::Admitted);
    runtime->bind_interactions(talk);runtime->bind_inventory(inventory);
    startup=std::make_unique<WorldStartup>(*r.continuing,r.program,owners());
    for(unsigned i=0;i<256;++i)trail.points[i]={std::uint16_t(384+i),std::uint16_t(512+i),0,0,2,0};
    spawn.prepared.height=19;spawn.prepared.priority=0xabcd;
    queued.current=3;queued.next=2;queued.pending=7;queued.current_type=9;
    phone={3,4};scene_colors.fill({17,18,19});
    maintenance.battle_mode_flag=0xabcd;
  }
  saves::ContinueSnapshot snapshot(unsigned count=4) const {
    saves::PersistedState s;s.version=r.version;
    auto &g=s.game;g.favourite_thing[1]=1;g.text_speed=2;g.text_flavour=1;
    g.leader_x=0x456;g.leader_y=0x678;g.leader_direction=6;g.elapsed_timer=0xabcdef12;
    g.reserved_80=0x1234;g.reserved_84=0x5678;g.reserved_88=0xffff;
    g.reserved_90=0xbeef;g.reserved_92=3;
    g.reserved_b0=3;g.reserved_b2=0xbeef;g.reserved_b4={0xcd,0xab};
    g.party_count=g.controlled_count=count;
    for(unsigned i=0;i<count;++i) {g.party_order[i]=g.display_order[i]=i+1;g.controlled_order[i]=i;}
    for(unsigned i=0;i<6;++i) {
      auto &c=s.characters[i];c.values.current_hp=c.values.target_hp=c.values.maximum_hp=100;
      c.position_index=17+i;c.reserved_53_59={1,2,3,4};c.reserved_65=5;
    }
    s.event_flags.fill(0xff);
    return {s,saves::prepare_continue(s,*r.continuing)};
  }
  unsigned drive(WorldStartup::Operation &operation,unsigned budget=1) {
    unsigned frames{};
    for(unsigned work=0;work<50000;++work) {
      const auto p=operation.advance(budget);
      if(p!=d::Progress::Suspended)continue;
      if(operation.service()==WorldStartupService::MapPreparation)return frames;
      if(operation.service()!=WorldStartupService::Runtime)
        throw std::runtime_error("Startup hit unexpected non-runtime dependency");
      auto *runtime=operation.runtime_operation();
      if(runtime->service()!=story::SceneService::Frame)
        throw std::runtime_error("Startup hit unexpected actor/dialogue dependency");
      runtime->complete_frame({0,0});++frames;
    }
    throw std::runtime_error("Startup exceeded its work bound");
  }
};
} // namespace startup_test
