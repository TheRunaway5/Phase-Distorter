// Full C0222B/C0255C/C025CF, including real CREATE_ENTITY/INIT_ENTITY and DMA.
// Original instruction execution is reference-only; no callee is intercepted.
#define NATIVE_WORLD_BATTLE_RETURN_REFERENCE_NO_MAIN
#include "native_world_battle_return_reference.cpp"
#include "eb/native/entities/graphics/lifecycle.hpp"
#include <algorithm>
#include <set>
namespace graphics_npc_reference {
using namespace world_battle_reference;
enum class Caller { Cells, Row, Column };
struct Layout {
  unsigned cell,row,column,cells,npc,sprite,direction,flags,tileset,enabled,objects,photo,debug,debug_mode;
};
constexpr Layout us{0xc0222b,0xc0255c,0xc025cf,0x4a00,0x2c9a,0x2cd6,0x2af6,
    0x9c08,0x436e,0x4a58,0x4a66,0xb4ef,0x436c,0xb559};
constexpr Layout jp{0xc02239,0xc0256a,0xc025dd,0x4d86,0x3098,0x30d4,0x2ef4,
    0x9eb3,0x46f4,0x4dde,0x4dec,0xb6b8,0x46f2,0xb70a};
std::string context;
void require(bool value,const std::string &message) {check(value,message+": "+context);}
struct Counts {unsigned cases{},creations{},photo{},empty{},repeated{},publications{},cell_calls{},row_calls{},column_calls{};};
CameraStreamOrigin previous_origin(CameraPosition camera,Caller caller) {
  auto origin=camera_stream_origin(camera);
  if(caller==Caller::Column)--origin.x;else --origin.y;
  return origin;
}
void seed(Source &source,Rig &rig,const NpcActivationState &state,unsigned trial,unsigned prefix) {
  auto &w=rig.w;const bool japanese=source.jp;const auto &l=japanese?jp:us;
  const unsigned shift=japanese?10:0;
  w.runtime->require_idle();w.actors.reset_scripts();w.actor_graphics->reset_allocations();
  source.call(japanese?0xc0925e:0xc0927c);source.call(japanese?0xc01a9c:0xc01a86);
  source.call(japanese?0xc01c27:0xc01c11,0x8000,0);
  w.fade.write_brightness(0x80);source.bus->work_ram[0xd]=0x80;source.bus->write_byte(0x2100,0x80);
  source.bus->work_ram[0x2e]=0;source.bus->write_byte(0x4200,0);
  source.put(0x31,state.camera.x);source.put(0x33,state.camera.y);source.put(l.tileset,state.tileset);
  source.put(l.enabled,state.mode==NpcSpawnMode::Initial?1:state.mode==NpcSpawnMode::Streaming?0xffff:0);
  source.put(l.enabled+2,w.spawn.enemies);
  source.put(l.objects,state.objects_only);source.put(l.photo,state.photograph);
  source.put(l.debug,state.debug.enabled);source.put(l.debug_mode,state.debug.mode);
  source.put(0x65,state.debug.shoulder_buttons_held?0x30:0);
  std::copy(state.event_flags.begin(),state.event_flags.end(),source.bus->work_ram.begin()+l.flags);
  source.put(japanese?0xa3e:0xa48,state.prepared.height);
  for(unsigned n=0;n<8;++n)source.put((japanese?0xa2e:0xa38)+n*2,state.prepared.variables[n]);
  // Preserve real dormant field owners and source leftovers before allocation.
  for(unsigned role=0;role<30;++role) {
    for(unsigned n=0;n<8;++n) {
      const auto value=std::uint16_t(role*613+n*1093+trial*71);
      w.actors.set_authored_variable(role,n,value);source.put(0xe5e - shift+n*60+role*2,value);
    }
    source.put((japanese?0x1a7c:0x1a86)+role*2,w.actors.authored_behavior(role).moving_direction);
    source.put((japanese?0x1ab8:0x341a)+role*2,w.actor_graphics->role(role).displayed_reference);
  }
  std::fill_n(w.actor_graphics_state.cells.begin(),prefix,0x91);
  std::copy(w.actor_graphics_state.cells.begin(),w.actor_graphics_state.cells.end(),source.bus->work_ram.begin()+l.cells);
  // cells+88 is NPC_SPAWNS_ENABLED, not spare sentinel storage.
  source.bus->work_ram[l.cells-1]=0xa6;
  for(unsigned i=0;i<65536;++i) {
    const auto value=std::uint8_t(i*73+trial*19+91);
    source.bus->video_ram[i]=value;w.display.set_vram_byte(std::uint16_t(i),value);
  }
}
void source_call(Source &source,const CameraRefreshIntent &intent,Caller caller,Counts &counts) {
  const auto &l=source.jp?jp:us;
  // The wrappers read an uninitialized source local. This fixture explicitly
  // supplies admitted caller residue, matching NpcStripAdmission::Admitted;
  // no instruction, CREATE result, or DMA publication is substituted.
  std::fill(source.bus->work_ram.begin()+0x1d00,source.bus->work_ram.begin()+0x2000,0);
  if(caller!=Caller::Cells) {
    source.call(caller==Caller::Row?l.row:l.column,std::uint16_t(intent.x),std::uint16_t(intent.y));
    if(caller==Caller::Row)++counts.row_calls;else ++counts.column_calls;
    return;
  }
  // Execute each complete cell caller in the strip's authored order. The
  // separate full wrapper cases establish the same cell traversal itself.
  const unsigned fixed=std::uint16_t(intent.y)>>5;
  const auto first=std::uint16_t(int(intent.x)-2);
  unsigned previous=0x8000;
  for(unsigned step=0;step<38;++step) {
    const auto coordinate=std::uint16_t(first+step);
    if(coordinate>=0x8000)continue;
    const unsigned cell=coordinate>>5;
    if(cell==previous)continue;
    source.call(l.cell,cell,fixed);previous=cell;++counts.cell_calls;
  }
}
void compare(const Source &source,const Rig &rig,const std::vector<NpcActivation> &created,
    const NpcActivationState &state) {
  const auto &w=rig.w;const bool japanese=source.jp;const auto &l=japanese?jp:us;
  const unsigned shift=japanese?10:0,geometry=japanese?0x3fe:0;
  std::vector<unsigned> roles;
  unsigned linked=source.word(japanese?0xa46:0xa50);
  for(const auto id:w.actors.actors()) {
    const auto &actor=w.actors.actor(id);const auto role=*actor.authored_role(),offset=role*2;
    roles.push_back(role);require(linked==offset,"Original active actor order differs");
    linked=source.word((japanese?0xa94:0xa9e)+offset);
    require(actor.npc()&&*actor.npc()==source.word(l.npc+offset)&&
        actor.appearance.sprite()==source.word(l.sprite+offset)&&
        actor.script_style()==source.word(0xa62 - shift+offset),"NPC/script/sprite identity differs");
    require(w.actor_graphics->owns(id),"NPC lacks its actual raw lifecycle identity");
    const auto &action=actor.action();
    for(unsigned axis=0;axis<3;++axis) {
      require(action.position[axis]==(source.word(0xb8e - shift+axis*60+offset)<<16|
          source.word(0xc42 - shift+axis*60+offset)),"NPC position/fraction differs");
      require(action.velocity[axis]==(source.word(0xcf6 - shift+axis*60+offset)<<16|
          source.word(0xdaa - shift+axis*60+offset)),"NPC initial velocity differs");
    }
    require(action.animation==source.word(0x10f2 - shift+offset)&&
        action.priority==source.word(0x103e - shift+offset),"NPC animation/priority differs");
    require(actor.behavior.direction==source.word(l.direction+offset)&&
        actor.behavior.moving_direction==source.word((japanese?0x1a7c:0x1a86)+offset)&&
        actor.behavior.surface_flags==source.word(0x2baa + geometry+offset)&&
        std::uint16_t(actor.behavior.projected_x)==source.word(0xb16 - shift+offset)&&
        std::uint16_t(actor.behavior.projected_y)==source.word(0xb52 - shift+offset),"NPC facing/surface/projection differs");
    const auto tasks=actor.tasks();const unsigned task=source.word(0xada - shift+offset);
    require(tasks.size()==1&&tasks[0].cursor+0xc00000u==
        (source.word(0x13fe - shift+task)|source.word(0x148a - shift+task)<<16)&&
        tasks[0].sleep_frames==source.word(0x1372 - shift+task)&&
        tasks[0].stack_depth==source.word(0x12e6 - shift+task),"NPC initial task cursor/sleep/stack differs");
    const auto &record=w.actor_graphics->role(role);
    const auto &definition=rig.content.sprites->definition(actor.appearance.sprite());
    require(record.allocated&&record.geometry_sprite==actor.appearance.geometry_sprite()&&
        record.allocation_cell==source.word(0x2952 + geometry+offset)&&
        record.destination==source.word(0x298e + geometry+offset)&&
        record.displayed_reference==source.word((japanese?0x1ab8:0x341a)+offset),"NPC retained allocation/geometry/reference differs");
    require(definition.width*4==source.word(0x2a7e + geometry+offset)&&
        definition.height/8==source.word(0x2aba + geometry+offset)&&
        rig.content.sprites->frame_table_identity(actor.appearance.sprite())==
            (source.word(0x29ca + geometry+offset)|source.word(0x2a06 + geometry+offset)<<16)&&
        rig.content.sprites->raw_header(actor.appearance.sprite())[8]==source.word(0x2a42 + geometry+offset),
        "NPC raw creation geometry/bank/content identity differs");
    const auto metadata=actor_creation_metadata(*rig.content.sprites,rig.content.creation,actor.appearance.sprite());
    require(actor.hitbox&&actor.hitbox->enabled==source.word((japanese?0x3728:0x332a)+offset)&&
        actor.hitbox->vertical.half_width==source.word((japanese?0x3764:0x3366)+offset)&&
        actor.hitbox->vertical.height==source.word((japanese?0x37a0:0x33a2)+offset)&&
        actor.hitbox->lateral.half_width==source.word((japanese?0x37dc:0x33de)+offset)&&
        actor.hitbox->lateral.height==source.word((japanese?0x1a40:0x1a4a)+offset)&&
        metadata.sprite.shape==source.word(0x2b6e + geometry+offset)&&
        (metadata.sprite.upper_parts<<8|metadata.lower_parts)==source.word(0x2be6 + geometry+offset),
        "NPC collision/body geometry differs");
    require(!actor.appearance.displayed(),"Activation selected a frame before its source tick");
  }
  require(linked==0xffff&&roles.size()==created.size(),"Original/native active list extent differs");
  for(unsigned role=0;role<30;++role)for(unsigned n=0;n<8;++n)
    require(w.actors.authored_variable(role,n)==source.word(0xe5e - shift+n*60+role*2),"Retained role script variable differs");
  require(std::equal(w.actor_graphics_state.cells.begin(),w.actor_graphics_state.cells.end(),
      source.bus->work_ram.begin()+l.cells)&&source.bus->work_ram[l.cells-1]==0xa6,
      "All88 allocation cells or preceding retained byte differs");
  require(source.word(l.cells+88)==(state.mode==NpcSpawnMode::Initial?1u:
              state.mode==NpcSpawnMode::Streaming?0xffffu:0u)&&
      source.word(l.enabled+2)==unsigned(w.spawn.enemies)&&source.word(l.objects)==unsigned(state.objects_only)&&
      source.word(l.photo)==unsigned(state.photograph),"Adjacent authoritative NPC/enemy/object/photo gates differ");
  if(w.display.vram()!=source.bus->video_ram) {
    const auto actual=w.display.vram();unsigned first{};
    while(first<actual.size()&&actual[first]==source.bus->video_ram[first])++first;
    require(false,"Full65536 NPC VRAM differs byte="+std::to_string(first));
  }
}
std::vector<NpcActivation> run_native(WorldActivation &activation,Rig &rig,const NpcActivationState &state,
    unsigned budget,bool deferred,Counts &counts) {
  auto operation=activation.begin_next(rig.w.actors,state,NpcStripAdmission::Admitted,*rig.w.actor_graphics);
  for(unsigned work=0;!operation->advance(budget);++work) {
    require(work<10000,"Raw NPC creation exhausted work budget");
    if(!operation->needs_publication())continue;
    require(deferred,"Forced-blank NPC activation invented publication work");
    const auto actors=rig.w.actors.actors();const auto cells=rig.w.actor_graphics_state.cells;
    const auto published=rig.w.clock.publications;
    require(actors.size()==operation->created().size(),
        "INIT_ENTITY committed a pending NPC before its real allocation DMA publication");
    require(!operation->advance(budget)&&operation->needs_publication()&&
        rig.w.actors.actors()==actors&&rig.w.actor_graphics_state.cells==cells&&
        rig.w.clock.publications==published,"Repeated raw NPC suspension advanced actor/allocation/publication");
    auto child=rig.w.runtime->begin_publication();rig.runtime(*child);child.reset();
    operation->respond_publication();++counts.publications;
  }
  std::vector<NpcActivation> result(operation->created().begin(),operation->created().end());operation.reset();
  require(activation.request()&&activation.request()->service==CameraRefreshService::Enemies,
      "NPC raw completion consumed its following enemy owner");
  activation.complete_enemy_request();require(!activation.request(),"Single strip retained extra traversal");
  return result;
}
void run(const eb::GameAssets &assets) {
  Rig rig(assets,true);rig.w.bind_actor_graphics(assets.image);
  auto snapshot=saved(rig,false);auto startup=rig.w.startup->begin(snapshot);rig.drive(*startup);startup.reset();
  rig.w.runtime->reset_interrupt_callback();Source source(assets);
  source.original_object_anchor_comparisons=true;source.fixed_buttons=0;
  auto catalog=std::make_shared<NpcCatalog>(assets.image,npc_catalog_layout(assets.version,false));
  std::vector<NpcPlacement> anchors;std::set<unsigned> groups;
  for(unsigned y=0;y<40;++y)for(unsigned x=0;x<32;++x)for(const auto &placement:catalog->cell(x,y)) {
    const auto &definition=catalog->definition(placement.npc);
    const unsigned category=unsigned(definition.appearance)*4+unsigned(definition.type);
    if(groups.insert(category).second)anchors.push_back(placement);
  }
  require(anchors.size()>=5,"Actual regional NPC eligibility anchors are vacuous");
  Counts counts;std::array<std::uint8_t,128> flags{};std::optional<NpcPlacement> saturated;
  for(const auto &anchor:anchors)for(const auto caller:{Caller::Cells,Caller::Row,Caller::Column})
    for(const bool photo:{false,true})for(const unsigned pattern:{0u,255u})for(const unsigned budget:{1u,4096u}) {
      flags.fill(std::uint8_t(pattern));NpcActivationState state;
      state.mode=NpcSpawnMode::Initial;state.tileset=anchor.tileset;state.event_flags=flags;state.photograph=photo;
      state.camera={std::uint16_t((anchor.x&0xfff8u)-(caller==Caller::Column?272:128)),
                    std::uint16_t((anchor.y&0xfff8u)-(caller==Caller::Column?112:224))};
      state.prepared.height=std::uint16_t(0x8123 + counts.cases*113);
      for(unsigned n=0;n<8;++n)state.prepared.variables[n]=std::uint16_t(counts.cases*29+n*0x2345);
      WorldActivation activation(catalog,rig.content.sprites,rig.content.scripts,assets.version,previous_origin(state.camera,caller));
      activation.begin_refresh(state.camera);const auto intent=*activation.request();
      ActorWorld preflight(rig.content.sprites,rig.content.scripts,assets.version);
      const auto selected=activation.activate_strip(preflight,intent,state,NpcStripAdmission::Admitted);
      unsigned cell_count{};bool padding{};
      for(const auto &event:selected) {
        const auto &sprite=rig.content.sprites->definition(event.sprite);const unsigned width=sprite.width/8,height=sprite.height/8;
        cell_count+=((width+1)&~1u)*((height+1)&~1u)/4;padding|=(width&1)||(height&1);
      }
      if(selected.size()>12||cell_count>64)continue; // The original full allocator would stall beyond its finite pool.
      context=assets.title+" anchor="+std::to_string(anchor.npc)+" caller="+std::to_string(unsigned(caller))+
          " photo="+std::to_string(photo)+" flags="+std::to_string(pattern)+" budget="+std::to_string(budget);
      seed(source,rig,state,counts.cases,counts.cases%2?7:0);
      const auto ticks=rig.w.actors.ticks(),polls=rig.w.clock.input_polls,nmis=rig.w.clock.publications;
      const auto random=rig.w.random;
      source_call(source,intent,caller,counts);const auto created=run_native(activation,rig,state,budget,false,counts);
      compare(source,rig,created,state);counts.creations+=created.size();counts.photo+=photo?created.size():0;
      counts.empty+=created.empty();++counts.cases;
      require(rig.w.actors.ticks()==ticks&&rig.w.clock.input_polls==polls&&rig.w.clock.publications==nmis&&
          rig.w.random==random,"Forced-blank NPC activation fabricated actor/input/NMI/RNG work");
      const auto old_vram=rig.w.display.vram();const auto old_cells=rig.w.actor_graphics_state.cells;
      WorldActivation repeated(catalog,rig.content.sprites,rig.content.scripts,assets.version,previous_origin(state.camera,caller));
      repeated.begin_refresh(state.camera);source_call(source,intent,caller,counts);
      const auto duplicate=run_native(repeated,rig,state,budget,false,counts);
      require(duplicate.empty()&&rig.w.display.vram()==old_vram&&rig.w.actor_graphics_state.cells==old_cells,
          "Repeated placement recreated an actual active NPC");compare(source,rig,created,state);++counts.repeated;
      if(!photo&&pattern==0&&caller==Caller::Row&&selected.size()>=2&&padding&&!saturated)saturated=anchor;
  }
  require(counts.creations&&counts.photo&&counts.empty&&counts.cell_calls&&counts.row_calls&&counts.column_calls,
      "NPC reference did not exercise ordinary/photo/rejected/cell/row/column paths");
  require(source.nmis==0&&source.polls==0,"Forced-blank original NPC caller acquired physical input/NMI work");
  // The saturation cases compare final helper images with the original
  // forced-blank caller separately from genuine native publication receipts.
  if(saturated)for(const unsigned budget:{1u,4096u}) {
    const auto &anchor=*saturated;flags.fill(0);NpcActivationState state;
    state.mode=NpcSpawnMode::Initial;state.tileset=anchor.tileset;state.event_flags=flags;
    state.camera={std::uint16_t((anchor.x&0xfff8u)-128),std::uint16_t((anchor.y&0xfff8u)-224)};
    state.prepared.variables={2,3,5,7,11,13,17,19};state.prepared.height=0x1234;
    WorldActivation activation(catalog,rig.content.sprites,rig.content.scripts,assets.version,previous_origin(state.camera,Caller::Row));
    activation.begin_refresh(state.camera);context=assets.title+" saturated budget="+std::to_string(budget);
    seed(source,rig,state,counts.cases,7);source_call(source,*activation.request(),Caller::Row,counts);
    const auto ticks=rig.w.actors.ticks(),polls=rig.w.clock.input_polls,nmis=rig.w.clock.publications;
    const auto random=rig.w.random;const auto first_publications=counts.publications;
    rig.w.fade.write_brightness(15);
    auto earlier=rig.w.display.begin_transfer({battle::PsiTransferKind::Vram,0,0x1200,0x6000,0},rig.w.scratch,rig.w.fade);
    require(earlier->advance()&&earlier->complete(),"Preceding real descriptor budget was not admitted");earlier.reset();
    std::copy_n(rig.w.scratch.bytes.begin(),0x1200,source.bus->video_ram.begin()+0xc000);
    const auto created=run_native(activation,rig,state,budget,true,counts);
    require(counts.publications>first_publications,"Padded NPC activation skipped saturated publication ordering");
    auto flush=rig.w.runtime->begin_publication();rig.runtime(*flush);flush.reset();compare(source,rig,created,state);
    require(rig.w.actors.ticks()==ticks&&rig.w.clock.input_polls==polls&&rig.w.random==random&&
        rig.w.clock.publications==nmis+counts.publications-first_publications+1,"Deferred NPC activation fabricated actor/input/RNG work");
  }
  require(saturated&&counts.publications,"Actual catalogue supplied no padded multi-NPC saturation path");
  std::cout<<"PASS complete raw NPC activation "<<assets.title<<": "<<counts.cases<<" cases, "<<counts.creations
      <<" creations (photo="<<counts.photo<<"), "<<counts.repeated<<" repeated, "<<counts.cell_calls<<" cell/"
      <<counts.row_calls<<" row/"<<counts.column_calls<<" column original callers; all88cells/full65536VRAM/roles/vars/geometry; "
      <<counts.publications<<" genuine saturated Runtime publications, sourceinstructions="<<source.cpu.instruction_count<<'\n';
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try{for(int i=1;i<argc;++i)graphics_npc_reference::run(eb::load_game_assets(argv[i],eb::asset_profiles()));}
  catch(const std::exception &error){std::cerr<<"FAIL raw NPC activation: "<<error.what()<<'\n';return 1;}
  return 0;
}
