// Complete original C02668/SPAWN_HORIZONTAL/SPAWN_VERTICAL with real RAND,
// retained-window terrain, CREATE_ENTITY, both allocators and failed DELETE.
// Original CPUs exist only in this oracle; no callee completion is intercepted.
#define NATIVE_WORLD_BATTLE_RETURN_REFERENCE_NO_MAIN
#include "native_world_battle_return_reference.cpp"
#include "eb/native/entities/graphics/object_maps.hpp"
#include <map>
#include <set>
namespace graphics_enemy_reference {
using namespace world_battle_reference;
namespace graphics=entities::graphics;
struct Layout {
  unsigned row,column,select,random,create,terrain,erase,cells,counter,count,maximum,butterfly,tileset,flags,piracy;
  unsigned width,height,encounter,chance,battle,name,sprite,remaining,failures,npc,enemy,cell,path,weakness;
  unsigned debug,debug_mode,debug_enemies,enabled;
};
constexpr Layout us{0xc02a6b,0xc02b55,0xc02668,0xc08e9a,0xc01e49,0xc05f33,0xc02140,
  0x4a00,0x4a7a,0x4a5c,0x4a5e,0x4a60,0x436e,0x9c08,0xb539,
  0x4a62,0x4a64,0x4a6c,0x4a70,0x4a72,0x4a76,0x4a74,0x4a6e,0x4a68,
  0x2c9a,0x2d12,0x2d4e,0x2c5e,0x3186,0x436c,0xb559,0xb575,0x4a5a};
constexpr Layout jp{0xc02a7b,0xc02b65,0xc02676,0xc08e8b,0xc01e5f,0xc06161,0xc0214e,
  0x4d86,0x4e00,0x4de2,0x4de4,0x4de6,0x46f4,0x9eb3,0xb6ea,
  0x4de8,0x4dea,0x4df2,0x4df6,0x4df8,0x4dfc,0x4dfa,0x4df4,0x4dee,
  0x3098,0x3110,0x314c,0x305c,0x3584,0x46f2,0xb70a,0xb726,0x4de0};
using Event=std::array<unsigned,5>;
std::string context;
void require(bool value,const std::string &message){check(value,message+": "+context);}
struct Counts {unsigned cases{},creations{},deletes{},random{},terrain{},rows{},columns{},publications{};};
struct Trace {
  Source &source;const Layout &l;std::vector<Event> events;
  struct Return {unsigned pc,index,kind;};std::vector<Return> returns;
  explicit Trace(Source &s):source(s),l(s.jp?jp:us) {
    source.observer=[this](Source &s) {
      const auto pc=s.cpu.program_counter;
      for(auto i=returns.begin();i!=returns.end();) {
        if(i->pc!=pc){++i;continue;}
        events[i->index][i->kind==1?3:i->kind==2?4:1]=s.cpu.accumulator;
        if(i->kind==1)events[i->index][4]=s.word((s.jp?0xbc0:0xbca)+s.cpu.accumulator*2);
        i=returns.erase(i);
      }
      unsigned kind=4;
      if(pc==l.random)kind=0;else if(pc==l.create)kind=1;else if(pc==l.terrain)kind=2;
      else if(pc==l.erase){events.push_back({3,s.cpu.accumulator,0,0,0});return;}
      if(kind==4)return;
      if(kind==0)events.push_back({0,0,0,0,0});
      else if(kind==1)events.push_back({1,s.cpu.accumulator,s.cpu.x_index,0,0});
      else events.push_back({2,s.cpu.accumulator,s.cpu.x_index,s.cpu.y_index,0});
      const unsigned stack=s.cpu.stack_pointer;
      const unsigned return_pc=(s.word(std::uint16_t(stack+1))|
          unsigned(s.bus->work_ram[std::uint16_t(stack+3)])<<16)+1;
      returns.push_back({return_pc,unsigned(events.size()-1),kind});
    };
  }
  ~Trace(){source.observer={};}
};
void call_selector(Source &source,EnemySpawnCell cell) {
  const auto &l=source.jp?jp:us;source.put(l.width,cell.width);source.put(l.height,cell.height);
  source.cpu.accumulator=cell.x;source.cpu.x_index=cell.y;source.cpu.y_index=cell.encounter;
  source.cpu.program_counter=0xc0ff00;source.cpu.status_register=eb::MainCpu65816::InterruptDisable;
  const unsigned stack=source.cpu.stack_pointer;source.cpu.execute_instruction<0x20>(l.select&65535,3);
  for(unsigned n=0;n<10000000;++n) {
    if(source.cpu.program_counter==0xc0ff03&&source.cpu.stack_pointer==stack)return;
    source.step();
  }
  throw std::runtime_error("Full C02668 exceeded its bounded admitted source fixture");
}
struct Fixture {
  Rig &rig;Source &source;const Layout &l;
  ActorWorld actors;graphics::State pool;graphics::LifecycleState records;
  graphics::ObjectMapState map_state;graphics::Transport transport;graphics::ObjectMaps maps;
  graphics::Lifecycle lifecycle;WorldEnemies enemies;story::RandomState random;
  WorldMapArea area;WorldCollisionWindow collision;
  Fixture(Rig &r,Source &s,std::span<const std::uint8_t> image,EnemySpawnState state,EnemyPopulation population,
          CollisionPoint center,unsigned trial,unsigned prefix)
      :rig(r),source(s),l(s.jp?jp:us),actors(r.content.sprites,r.content.scripts,r.content.version),
       transport(image,r.content.version,pool,*r.content.sprites,r.w.display,r.w.scratch,r.w.fade),
       maps(image,r.content.version,map_state,*r.content.sprites),
       lifecycle(records,actors,*r.content.sprites,transport),enemies(r.content.enemies,r.content.sprites,r.content.scripts,population),
       random{std::uint16_t(0x1234+trial*997),std::uint16_t(0x5678+trial*131)},
       area(r.content.map.prepare(state.tileset,state.event_flags)) {
    actors.bind_raw_graphics(lifecycle);lifecycle.bind_object_maps(maps);actors.bind_enemies(enemies);enemies.bind_actor_graphics(lifecycle);
    lifecycle.reset_allocations();collision.load({center.x,center.y},area);
    source.call(source.jp?0xc0925e:0xc0927c);source.call(source.jp?0xc01a9c:0xc01a86);
    source.call(source.jp?0xc01c27:0xc01c11,0x8000,0);
    std::copy(collision.cells().begin(),collision.cells().end(),source.bus->work_ram.begin()+0xe000);
    source.put(l.counter,population.spawn_counter);source.put(l.count,population.count);source.put(l.maximum,population.maximum);
    source.put(l.butterfly,population.butterfly_spawned);source.put(l.failures,population.capacity_failures);
    source.put(l.encounter,population.encounter);source.put(l.chance,population.chance);source.put(l.battle,population.battle);
    source.put(l.name,population.name_initial);source.put(l.sprite,population.sprite);source.put(l.remaining,population.remaining);
    source.put(l.tileset,state.tileset);source.put(l.piracy,state.bypass_chance);source.put(l.debug,state.debug_forced_encounter);
    source.put(l.debug_mode,2);source.put(l.debug_enemies,state.debug_forced_encounter);source.put(l.enabled,state.enabled);
    std::copy(state.event_flags.begin(),state.event_flags.end(),source.bus->work_ram.begin()+l.flags);
    source.put(source.jp?0xa3e:0xa48,state.prepared.height);source.put(source.jp?0xa40:0xa4a,state.prepared.priority);
    for(unsigned n=0;n<8;++n)source.put((source.jp?0xa2e:0xa38)+n*2,state.prepared.variables[n]);
    for(unsigned role=0;role<30;++role) {
      source.put(l.npc+role*2,0xffff);source.put(l.enemy+role*2,0xffff);
      source.put((source.jp?0x30d4:0x2cd6)+role*2,0xffff);
      for(unsigned n=0;n<8;++n){const auto value=std::uint16_t(role*613+n*1093+trial*71);
        actors.set_authored_variable(role,n,value);source.put((source.jp?0xe54:0xe5e)+n*60+role*2,value);}
      const unsigned delta=source.jp?0x3fe:0;
      source.put(0x2952+delta+role*2,0);source.put(0x298e + delta+role*2,0);
      source.put((source.jp?0x1ab8:0x341a)+role*2,0);
    }
    std::fill_n(pool.cells.begin(),prefix,0x91);std::copy(pool.cells.begin(),pool.cells.end(),source.bus->work_ram.begin()+l.cells);
    source.put(0x24,random.primary_word);source.put(0x26,random.secondary_word);
    rig.w.fade.write_brightness(0x80);source.bus->work_ram[0xd]=0x80;source.bus->write_byte(0x2100,0x80);
    source.bus->work_ram[0x2e]=0;source.bus->write_byte(0x4200,0);
    for(unsigned i=0;i<65536;++i){const auto byte=std::uint8_t(i*73+trial*19+91);source.bus->video_ram[i]=byte;rig.w.display.set_vram_byte(std::uint16_t(i),byte);}
  }
  ~Fixture(){enemies.clear_actor_graphics(lifecycle);actors.clear_enemies(enemies);}
};
std::vector<Event> drive(Fixture &f,Counts &counts,bool saturated,unsigned budget) {
  std::vector<Event> events;std::map<ActorId,unsigned> observed;
  auto observe=[&] {
    const auto active=f.actors.actors();
    for(auto it=observed.begin();it!=observed.end();) {
      if(std::find(active.begin(),active.end(),it->first)!=active.end()){++it;continue;}
      events.push_back({3,it->second,0,0,0});it=observed.erase(it);
    }
    for(const auto id:active)if(!observed.contains(id)) {
      const auto &actor=f.actors.actor(id);const auto creation=f.enemies.pending_creation();
      require(creation&&creation->actor==id,"Raw enemy skipped provisional creation boundary");
      require(actor.action().position[0]==0x8000&&actor.action().position[1]==0x8000&&actor.behavior.direction==0,
          "Enemy placement/RNG ran before CREATE completed");
      const auto role=*actor.authored_role();observed[id]=role;
      events.push_back({1,creation->sprite,creation->script,role,actor.action().position[1]>>16});
    }
  };
  observe();
  for(unsigned work=0;f.enemies.busy();++work) {
    require(work<100000,"Native full enemy caller did not finish");
    if(f.enemies.needs_graphics_publication()) {
      require(saturated&&!f.enemies.request()&&f.actors.actors().empty()&&f.enemies.actors().empty(),
          "Pending first allocation committed INIT_ENTITY/RNG/identity");
      const auto cells=f.pool.cells;const auto rng=f.random;const auto actor_ticks=f.actors.ticks();
      const auto polls=f.rig.w.clock.input_polls,publications=f.rig.w.clock.publications;
      bool rejected=false;try{f.enemies.respond_graphics_publication(f.actors);}catch(const std::logic_error &){rejected=true;}
      require(rejected&&f.pool.cells==cells&&f.random==rng&&f.actors.ticks()==actor_ticks,
          "Enemy accepted a fabricated allocation publication");
      for(unsigned repeat=0;repeat<3;++repeat)require(f.enemies.needs_graphics_publication()&&!f.enemies.request()&&
          f.pool.cells==cells&&f.random==rng&&f.actors.actors().empty(),"Repeated enemy wait mutated its owners");
      auto publication=f.rig.w.runtime->begin_publication();
      while(true){const auto p=publication->advance(budget);if(p==dialogue::Progress::Finished)break;
        if(p==dialogue::Progress::Suspended)f.rig.service(*publication);}
      publication.reset();
      require(f.rig.w.clock.input_polls==polls&&f.rig.w.clock.publications==publications+1&&f.actors.ticks()==actor_ticks,
          "Pure enemy publication consumed actor/input work");
      f.enemies.respond_graphics_publication(f.actors);++counts.publications;observe();continue;
    }
    require(bool(f.enemies.request()),"Enemy has no genuine pending service");
    if(std::holds_alternative<EnemyRandomRequest>(*f.enemies.request())) {
      const auto value=story::next_random(f.random);events.push_back({0,value,0,0,0});f.enemies.respond_random(f.actors,value);
    }else {
      const auto request=std::get<EnemyTerrainRequest>(*f.enemies.request());
      const auto shape=f.actors.actor(request.actor).appearance_context.shape;
      const auto flags=f.rig.content.collision.vertical_surfaces([&](CollisionCell c){return f.collision.sample(c);},{request.x,request.y},shape);
      events.push_back({2,request.x,request.y,*f.actors.actor(request.actor).authored_role(),flags});
      f.enemies.respond_terrain(f.actors,flags);
    }
    observe();
  }
  for(const auto &event:events){counts.random+=event[0]==0;counts.creations+=event[0]==1;counts.terrain+=event[0]==2;counts.deletes+=event[0]==3;}
  return events;
}
void compare(const Fixture &f) {
  const auto &s=f.source;const auto &l=f.l;const auto &p=f.enemies.population();
  const std::array<unsigned,11> actual{p.spawn_counter,p.count,p.maximum,p.butterfly_spawned,p.capacity_failures,p.encounter,p.chance,p.battle,p.name_initial,p.sprite,p.remaining};
  const std::array<unsigned,11> expected{s.word(l.counter),s.word(l.count),s.word(l.maximum),s.word(l.butterfly),s.word(l.failures),s.word(l.encounter),s.word(l.chance),s.word(l.battle),s.word(l.name),s.word(l.sprite),s.word(l.remaining)};
  constexpr const char *fields[]{"counter","count","maximum","butterfly","capacity_failures",
    "encounter","chance","battle","name_initial","sprite","remaining"};
  for(unsigned i=0;i<actual.size();++i)require(actual[i]==expected[i],
    std::string("Complete enemy population/diagnostic ")+fields[i]+" source="+
    std::to_string(expected[i])+" native="+std::to_string(actual[i]));
  require(f.random.primary_word==s.word(0x24)&&f.random.secondary_word==s.word(0x26),"Actual RAND words/order differ");
  require(std::equal(f.pool.cells.begin(),f.pool.cells.end(),s.bus->work_ram.begin()+l.cells),"All88 enemy allocation tags differ");
  require(std::equal(f.map_state.bytes.begin(),f.map_state.bytes.end(),s.bus->work_ram.begin()+(s.jp?0x4a04:0x467e)),"All896 creation map pool bytes differ");
  require(f.rig.w.display.vram()==s.bus->video_ram,"Full65536 enemy return VRAM differs");
  const unsigned shift=s.jp?10:0,delta=s.jp?0x3fe:0;
  unsigned linked=s.word(s.jp?0xa46:0xa50);
  for(const auto id:f.actors.actors()) {
    const auto &actor=f.actors.actor(id);const unsigned role=*actor.authored_role(),offset=role*2;
    require(linked==offset,"Enemy INIT_ENTITY active order differs");linked=s.word(0xa9e - shift+offset);
    const auto &record=f.lifecycle.role(role);const auto &map=f.maps.role(role);const auto &d=f.rig.content.sprites->definition(actor.appearance.sprite());
    require(f.lifecycle.owns(id)&&record.geometry_sprite==actor.appearance.sprite()&&actor.appearance.sprite()==s.word(0x2cd6+delta+offset)&&
        actor.script_style()==s.word(0xa62-shift+offset),"Actual enemy script/sprite/allocation owner differs");
    require(record.allocation_cell==s.word(0x2952+delta+offset)&&record.destination==s.word(0x298e + delta+offset)&&
        record.displayed_reference==s.word((s.jp?0x1ab8:0x341a)+offset)&&map.pointer==s.word(0x112e - shift+offset)&&
        map.size==s.word(0x2916+delta+offset),"Enemy raw creation cell/destination/map/reference differs");
    require(d.width*4==s.word(0x2a7e + delta+offset)&&d.height/8==s.word(0x2aba+delta+offset)&&
        actor.action().priority==s.word(0x103e - shift+offset)&&actor.action().animation==s.word(0x10f2-shift+offset),"Enemy raw dimensions/priority/animation differ");
    for(unsigned axis=0;axis<3;++axis)require(actor.action().position[axis]==(s.word(0xb8e - shift+axis*60+offset)<<16|s.word(0xc42-shift+axis*60+offset))&&
        actor.action().velocity[axis]==(s.word(0xcf6-shift+axis*60+offset)<<16|s.word(0xdaa-shift+axis*60+offset)),"Enemy position/fraction/velocity differs");
    const auto type=f.enemies.enemy_type(id);require(type.has_value(),"Enemy lost its actual species");
    const auto entry=std::find_if(f.enemies.actors().begin(),f.enemies.actors().end(),[&](const auto &e){return e.actor==id;});
    require(entry!=f.enemies.actors().end()&&entry->npc_identity()==s.word(l.npc+offset)&&entry->enemy==s.word(l.enemy+offset)&&
        entry->spawn_cell==s.word(l.cell+offset)&&entry->weakness==s.word(l.weakness+offset)&&actor.behavior.path_state==s.word(l.path+offset),"Enemy final identity/count/placement words differ");
    require(!actor.appearance.displayed(),"Creation selected enemy artwork before its actual first tick");
  }
  require(linked==0xffff,"Enemy active list source tail differs");
  for(unsigned role=0;role<30;++role)for(unsigned n=0;n<8;++n)
    require(f.actors.authored_variable(role,n)==s.word(0xe5e - shift+n*60+role*2),"All240 retained enemy variables differ");
}
struct Saturated {EnemySpawnCell cell;EnemySpawnState state;EnemyPopulation population;CollisionPoint center;unsigned trial{};};
void run(const eb::GameAssets &assets) {
  Rig rig(assets,true);Source source(assets);source.original_object_anchor_comparisons=true;
  const auto &data=*rig.content.enemies;Counts counts;
  std::map<std::array<unsigned,3>,std::array<unsigned,2>> representatives;
  for(unsigned y=0;y<160;++y)for(unsigned x=0;x<128;++x) {
    const auto sector=data.sector(x,y);representatives.try_emplace({data.encounter(x,y),sector.tileset,sector.butterfly_chance},std::array<unsigned,2>{x,y});
  }
  std::optional<Saturated> saturated;
  for(const auto &[key,position]:representatives)for(unsigned variation=0;variation<5;++variation) {
    const auto [encounter,tileset,chance]=key;(void)chance;
    EnemySpawnState state;state.tileset=tileset;state.event_flags.assign(128,variation&1?255:0);
    state.prepared.height=17;state.prepared.variables={2,3,5,7,11,13,17,19};state.prepared.priority=0xa55a;
    // Variation4 admits a retained counter of1 with capacity for exactly one
    // new actor; Trace checks the JP provisional y before placement overwrites it.
    EnemyPopulation population{std::uint16_t(variation==2?15:0),std::uint16_t(variation==4?1:0),
      std::uint16_t(variation==4?2:1),0,9,11,12,13,14,15,16};
    const EnemySpawnCell cell{position[0],position[1],encounter,24,16};
    const CollisionPoint center{std::uint16_t(position[0]*64+32),std::uint16_t(position[1]*64+32)};
    context=assets.title+" fullC02668 encounter="+std::to_string(encounter)+" cell="+std::to_string(cell.x)+","+std::to_string(cell.y)+" variation="+std::to_string(variation);
    Fixture f(rig,source,assets.image,state,population,center,counts.cases,variation==3?7:0);
    Trace trace(source);call_selector(source,cell);
    f.enemies.begin_cell(f.actors,cell.x,cell.y,cell.encounter,cell.width,cell.height,state);
    const auto events=drive(f,counts,false,1);
    require(events==trace.events,"Complete C02668 ordered RAND/CREATE/terrain/DELETE differs");compare(f);
    if(!saturated)for(const auto &event:events)if(event[0]==1) {
      const auto &d=rig.content.sprites->definition(event[1]);
      if((d.width/8)&1u||(d.height/8)&1u){saturated=Saturated{cell,state,population,center,counts.cases};break;}
    }
    ++counts.cases;
  }
  for(const auto axis:{CameraStripAxis::Row,CameraStripAxis::Column})for(unsigned n=0;n<12;++n) {
    const unsigned x=8+n*8,y=8+n*8;const auto sector=data.sector(x,y);
    EnemySpawnState state;state.tileset=sector.tileset;state.event_flags.assign(128,n&1?255:0);state.prepared.variables={2,3,5,7,11,13,17,19};
    state.monsters_disabled=bool(state.event_flags[1]&4);
    state.final_boss_defeated=bool(state.event_flags[9]&1);
    EnemyPopulation population{std::uint16_t(n),0,1,0,9,11,12,13,14,15,16};
    const CameraRefreshIntent intent{CameraRefreshService::Enemies,axis,std::int16_t(x*8),std::int16_t(y*8)};
    context=assets.title+" fullstrip axis="+(axis==CameraStripAxis::Row?std::string("row"):std::string("column"))+
      " cell="+std::to_string(x)+","+std::to_string(y);
    Fixture f(rig,source,assets.image,state,population,{std::uint16_t(x*64+32),std::uint16_t(y*64+32)},counts.cases,0);
    Trace trace(source);source.call(axis==CameraStripAxis::Row?f.l.row:f.l.column,std::uint16_t(intent.x),std::uint16_t(intent.y));
    f.enemies.begin_strip(f.actors,intent,state);const auto events=drive(f,counts,false,1);
    require(events==trace.events,"Complete enemy strip ordered work differs");compare(f);
    if(axis==CameraStripAxis::Row)++counts.rows;else ++counts.columns;++counts.cases;
  }
  // Actual padded enemy18 in map29, also used by the bound Camera fixture.
  // These complete strip callers must CREATE and place an actor, rather than
  // only proving the early strip gates/traversal on the generic probes above.
  for(const auto axis:{CameraStripAxis::Row,CameraStripAxis::Column}) {
    EnemySpawnState state;state.tileset=29;state.event_flags.assign(128,0);
    state.prepared.variables={2,3,5,7,11,13,17,19};state.prepared.height=17;
    EnemyPopulation population{0,0,1,0,9,11,12,13,14,15,16};
    const CameraRefreshIntent intent{CameraRefreshService::Enemies,axis,288,696};
    context=assets.title+" admitted creating fullstrip axis="+
      (axis==CameraStripAxis::Row?std::string("row"):std::string("column"));
    Fixture f(rig,source,assets.image,state,population,{2496,5392},counts.cases,0);
    f.random={0,0};source.put(0x24,0);source.put(0x26,0);
    Trace trace(source);source.call(axis==CameraStripAxis::Row?f.l.row:f.l.column,288,696);
    f.enemies.begin_strip(f.actors,intent,state);const auto events=drive(f,counts,false,1);
    require(events==trace.events,"Complete admitted creating strip ordered work differs");compare(f);
    require(std::any_of(events.begin(),events.end(),[](const auto &e){return e[0]==1;}),
      "Admitted source strip created no actual raw actor");
    if(axis==CameraStripAxis::Row)++counts.rows;else ++counts.columns;++counts.cases;
  }
  require(source.nmis==0&&source.polls==0,"Forced-blank source enemy callers acquired physical actor/input work");
  require(saturated.has_value(),"Imported enemy fixtures supplied no real padded allocation");
  for(unsigned budget:{1u,4096u}) {
    const auto &chosen=*saturated;context=assets.title+" real enemy saturation budget="+std::to_string(budget);
    Fixture f(rig,source,assets.image,chosen.state,chosen.population,chosen.center,chosen.trial,0);
    Trace trace(source);call_selector(source,chosen.cell);
    const auto polls=rig.w.clock.input_polls,ticks=f.actors.ticks();const auto before=counts.publications;
    rig.w.fade.write_brightness(15);
    auto earlier=rig.w.display.begin_transfer({battle::PsiTransferKind::Vram,0,0x1200,0x6000,0},rig.w.scratch,rig.w.fade);
    require(earlier->advance()&&earlier->complete(),"Real preceding enemy DMA budget descriptor was not admitted");earlier.reset();
    std::copy_n(rig.w.scratch.bytes.begin(),0x1200,source.bus->video_ram.begin()+0xc000);
    f.enemies.begin_cell(f.actors,chosen.cell.x,chosen.cell.y,chosen.cell.encounter,chosen.cell.width,chosen.cell.height,chosen.state);
    const auto events=drive(f,counts,true,budget);
    auto flush=rig.w.runtime->begin_publication();rig.runtime(*flush);flush.reset();
    require(events==trace.events&&counts.publications>before,"Actual padded enemy omitted its required publication");compare(f);
    require(rig.w.clock.input_polls==polls&&f.actors.ticks()==ticks,"Deferred enemy creation fabricated input/actor ticks");
  }
  require(counts.creations&&counts.random&&counts.terrain,"Full enemy source proof was vacuous");
  std::cout<<"PASS complete raw enemy activation "<<assets.title<<": "<<counts.cases<<" callers (rows="<<counts.rows<<" columns="<<counts.columns
      <<"), "<<counts.creations<<" creations, "<<counts.deletes<<" failed deletes, "<<counts.random<<" actual RAND draws, "<<counts.terrain
      <<" actual terrain probes; all88cells/896mapbytes/65536VRAM/240vars/identity/geometry/RNG; "<<counts.publications
      <<" genuine Runtime publications before INIT_ENTITY, sourceinstructions="<<source.cpu.instruction_count<<'\n';
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try{for(int i=1;i<argc;++i)graphics_enemy_reference::run(eb::load_game_assets(argv[i],eb::asset_profiles()));}
  catch(const std::exception &error){std::cerr<<"FAIL raw enemy activation: "<<error.what()<<'\n';return 1;}
  return 0;
}
