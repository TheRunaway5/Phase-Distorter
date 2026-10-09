// Direct real WorldRuntime factories and their Scene publication children.
// Imported donors and actual Lifecycle; no synthetic publication response.
#define NATIVE_WORLD_BATTLE_RETURN_REFERENCE_NO_MAIN
#include "native_world_battle_return_reference.cpp"
#include "eb/native/entities/graphics/lifecycle.hpp"
#include <algorithm>
#include <set>
namespace runtime_streaming_reference {
using namespace world_battle_reference;
enum class Caller { Camera, Maintenance, EnemyCamera };
const char *name(Caller c) {
  switch(c) {case Caller::Camera:return "camera";case Caller::Maintenance:return "maintenance";case Caller::EnemyCamera:return "enemy-camera";}
  throw std::logic_error("Invalid streaming caller");
}
struct Selection {CameraPosition center;unsigned combination{};std::vector<NpcActivation> created;};
unsigned cells(const session::Content &content,std::span<const NpcActivation> created) {
  unsigned result{};
  for(const auto &entry:created) {const auto &s=content.sprites->definition(entry.sprite);
    result+=((s.width/8+1)&~1u)*((s.height/8+1)&~1u)/4;}
  return result;
}
bool padded(const session::Content &content,const NpcActivation &entry) {
  const auto &s=content.sprites->definition(entry.sprite);return (s.width/8&1)||(s.height/8&1);
}
Selection select(const session::Content &content) {
  const std::array<std::uint8_t,128> flags{};std::set<std::array<unsigned,3>> seen;
  for(unsigned y=1;y<39;++y)for(unsigned x=1;x<31;++x)for(const auto &anchor:content.npcs->cell(x,y)) {
    const CameraPosition center{std::uint16_t(anchor.x&0xfff8u),std::uint16_t((anchor.y&0xfff8u)-112)};
    if(center.y<120||!seen.insert({center.x,center.y,anchor.tileset}).second)continue;
    const auto combination=content.map.sector(center.x>>8,center.y>>7).combination;
    if(combination!=anchor.tileset)continue;
    ActorWorld world(content.sprites,content.scripts,content.version);
    WorldActivation activation(content.npcs,content.sprites,content.scripts,content.version);
    activation.reset_after_reload({center.x,std::uint16_t(center.y-8)});
    activation.begin_refresh({std::uint16_t(center.x-128),std::uint16_t(center.y-112)});
    NpcActivationState state;state.camera={std::uint16_t(center.x-128),std::uint16_t(center.y-112)};
    state.mode=NpcSpawnMode::Initial;state.tileset=combination;state.event_flags=flags;state.photograph=true;
    std::vector<NpcActivation> created;
    while(activation.request()) {
      if(activation.request()->service==CameraRefreshService::Npcs) {
        auto next=activation.activate_next(world,state,NpcStripAdmission::Admitted);
        created.insert(created.end(),next.begin(),next.end());
      } else activation.complete_enemy_request();
    }
    if(created.size()>=2&&created.size()<=10&&cells(content,created)<56&&padded(content,created.front()))
      return {center,combination,std::move(created)};
  }
  throw std::runtime_error("No actual padded bounded streaming caller fixture");
}
struct Receipt {
  std::vector<std::uint64_t> roles;
  std::array<std::uint8_t,88> cells{};
  std::array<std::uint8_t,896> object_maps{};
  std::array<std::uint8_t,1036> object_working{};
  std::array<std::array<std::uint8_t,544>,2> object_buffers{};
  std::array<std::uint8_t,65536> vram{};
  WorldStreamingWork work;
  story::RandomState random;
  story::InputState input;
  std::uint64_t actor_ticks{},polls{},publications{};
  unsigned waits{};
  bool operator==(const Receipt &) const = default;
};
Receipt run(const eb::GameAssets &assets,Caller caller,unsigned budget) {
  Rig rig(assets,true);auto &w=rig.w;w.bind_actor_graphics(assets.image);
  auto archive=saved(rig,false);auto startup=w.startup->begin(archive);rig.drive(*startup);startup.reset();
  w.runtime->reset_interrupt_callback();
  const bool enemy=caller==Caller::EnemyCamera;
  const auto selected=enemy?Selection{{2496,5392},29,{}}:select(rig.content);
  if(enemy) {
    const auto &data=w.enemies.data();const auto &encounter=data.encounters.at(142);
    check(data.encounter(36,87)==142&&encounter.chance[0]==100&&encounter.event_flag==0&&
        encounter.choices.at(0)==299&&data.battles.at(299).front().enemy==18&&
        data.enemies.at(18).sprite==324&&data.enemies.at(18).script==23,
        "Actual imported padded enemy caller fixture changed");
  }
  std::cout<<"FIXTURE "<<assets.title<<' '<<name(caller)<<" budget="<<budget<<" center="<<selected.center.x<<','<<selected.center.y<<" NPCs=";
  for(const auto &entry:selected.created)std::cout<<entry.candidate.placement.npc<<',';
  std::cout<<std::endl;
  for(const auto id:w.actors.actors()) {
    const auto role=w.actors.actor(id).authored_role();if(role&&*role<23) {w.actor_graphics->release(*role);w.actors.erase(id);}
  }
  std::fill(w.text.event_flags.begin(),w.text.event_flags.end(),0);w.spawn.npcs=enemy?NpcSpawnMode::Disabled:NpcSpawnMode::Initial;w.spawn.enemies=enemy?0xffff:0;w.spawn.photograph=!enemy;
  w.spawn.prepared.variables={2,3,5,7,11,13,17,19};w.spawn.prepared.height=0;
  w.runtime->prepare_area(selected.center);
  if(enemy) {
    check(w.area.combination()==selected.combination,"Actual enemy camera is outside its authored map combination");
    w.random={0,0};
  }
  w.runtime->reload_camera({selected.center.x,std::uint16_t(selected.center.y-8)});
  w.runtime->refresh_world_capture();w.fade.write_brightness(15);w.clock.interrupt_mask|=0x80;
  if(caller==Caller::Camera||enemy) {
    auto &leader=w.interactions.state();leader.leader_x=selected.center.x;leader.leader_y=std::uint16_t(selected.center.y-16);
    const auto id=w.actors.actor_for_role(w.formation.current_leader_role);check(bool(id),"Actual startup did not retain its camera party target");
    w.actors.actor(*id).action().position[0]=std::uint32_t(leader.leader_x)<<16;
    w.actors.actor(*id).action().position[1]=std::uint32_t(leader.leader_y)<<16;
    WorldActorSpec camera;camera.script=36;camera.action.position={std::uint32_t(selected.center.x)<<16,std::uint32_t(selected.center.y)<<16,0};
    camera.behavior.physics=ActorPhysics::Stationary;
    w.actors.create(camera);
  }
  if(caller==Caller::Maintenance) {
    auto &leader=w.interactions.state();leader.leader_x=selected.center.x;leader.leader_y=std::uint16_t(selected.center.y-1);
    leader.walking_style=0;leader.leader_direction=4;w.input.state[0]=0x400;
    const auto id=w.actors.actor_for_role(w.formation.current_leader_role);check(bool(id),"Actual startup did not retain its leader");
    w.actors.actor(*id).action().position[0]=std::uint32_t(leader.leader_x)<<16;
    w.actors.actor(*id).action().position[1]=std::uint32_t(leader.leader_y)<<16;
    w.runtime->reload_camera({selected.center.x,std::uint16_t(selected.center.y-1)});w.runtime->refresh_world_capture();
    w.interactions.state().movement_flags=2;
  }
  const auto baseline_actors=w.actors.actors();const auto baseline_ticks=w.actors.ticks();
  const auto baseline_polls=w.clock.input_polls,baseline_publications=w.clock.publications;
  unsigned publications{},steps{},frames{};bool first_pending{};
  const auto publication=[&](WorldRuntime::Operation &operation) {
    check(w.runtime->streaming()&&operation.service()==story::SceneService::Publication,"Streaming did not expose its actual Publication child");
    check(!operation.maintenance_request()&&!operation.actor_request(),
      "Suspended streaming child exposed its parent maintenance/actor request to the real session host");
    bool rejected=false;
    try {operation.respond_maintenance();}catch(const std::logic_error &) {rejected=true;}
    check(rejected,"Parent maintenance ACK bypassed the actual streaming publication");
    const auto actor_ids=w.actors.actors();const auto old_cells=w.actor_graphics_state.cells;const auto nmis=w.clock.publications,pending_polls=w.clock.input_polls,pending_ticks=w.actors.ticks();
    if(!first_pending) {
      if(enemy)check(actor_ids==baseline_actors&&w.enemies.busy()&&!w.enemies.request()&&
          !w.enemies.pending_creation(),"INIT_ENTITY/RNG committed a padded enemy before its actual streaming publication");
      else check(actor_ids==baseline_actors&&!w.actors.actor_for_npc(selected.created.front().candidate.placement.npc),
        "INIT_ENTITY committed first padded NPC before saturated publication");first_pending=true;
    }
    for(unsigned repeat=0;repeat<3;++repeat)
      check(operation.advance(budget)==dialogue::Progress::Suspended&&w.actors.actors()==actor_ids&&
          w.actor_graphics_state.cells==old_cells&&w.clock.publications==nmis&&w.clock.input_polls==pending_polls&&
          w.actors.ticks()==pending_ticks,"Suspended streaming replayed actor/input/allocation/publication work");
    rig.physical_clock.advance_boundary(rig.audio);rig.audio.publication();
    operation.complete_publication();rig.physical_clock.finish_frame(rig.audio);
    check(w.clock.input_polls==pending_polls,"Pure streaming publication fabricated an input poll");++publications;
  };
  {
    auto operation=w.runtime->begin(story::TickKind::WorldFrame);
    // Shared actual caller prefix reaches the genuine streaming boundary;
    // no raw NPC creation has run yet. Stage a real preceding DMA descriptor
    // in the remaining physical byte budget before resuming that same caller.
    for(unsigned prefix=0;!w.runtime->streaming();++prefix) {
      check(prefix<100000,"Actual callback did not begin streaming");
      const auto progress=operation->advance(1);
      if(progress==dialogue::Progress::Suspended)rig.service(*operation);
    }
    const auto prefix_actors=w.actors.actors();
    if(enemy)check(!w.enemies.busy(),"Camera prefix began enemy selection before streaming");
    else check(!w.actors.actor_for_npc(selected.created.front().candidate.placement.npc),"Callback prefix committed its first NPC before streaming");
    for(unsigned i=0;i<0x1200;++i)w.scratch.bytes[i]=std::uint8_t(i*31+77);
    const auto preceding_size=std::uint16_t(0x1200-w.display.pending_bytes());
    check(preceding_size>0,"Actual preceding DMA did not leave a bounded saturation fixture");
    auto earlier=w.display.begin_transfer({battle::PsiTransferKind::Vram,0,preceding_size,0x6000,0},w.scratch,w.fade);
    check(earlier->advance()&&earlier->complete()&&w.display.pending_bytes()==0x1200,"Real predecessor did not saturate DMA budget");earlier.reset();
    check(prefix_actors==baseline_actors,"Actual callback prefix unexpectedly created an NPC");
    while(!operation->complete()) {
      check(++steps<100000,"Actual actor streaming exhausted work budget");
      const auto progress=operation->advance(budget);
      if(progress!=dialogue::Progress::Suspended)continue;
      if(operation->service()==story::SceneService::Publication&&w.runtime->streaming())publication(*operation);
      else {if(operation->service()==story::SceneService::Frame)++frames;rig.service(*operation);}
    }
    operation.reset();
  }
  check(first_pending&&publications&&w.clock.input_polls>=baseline_polls+frames&&frames,
      "Actual factory bypassed saturated publication or manufactured input work");
  // Deliver the final admitted descriptor through a real ordinary publication.
  auto flush=w.runtime->begin_publication();rig.runtime(*flush);flush.reset();
  Receipt receipt;receipt.cells=w.actor_graphics_state.cells;receipt.vram=w.display.vram();receipt.work=w.runtime->streaming_work();
  receipt.object_maps=w.actor_object_map_state.bytes;
  receipt.object_working=w.actor_object_display_state.working;
  for(unsigned i=0;i<2;++i)receipt.object_buffers[i]=w.actor_object_display_state.buffers[i].bytes;
  receipt.random=w.random;receipt.input=w.input;receipt.actor_ticks=w.actors.ticks()-baseline_ticks;
  receipt.polls=w.clock.input_polls-baseline_polls;receipt.publications=w.clock.publications-baseline_publications;receipt.waits=publications;
  for(unsigned role=0;role<30;++role) {
    for(unsigned n=0;n<8;++n)receipt.roles.push_back(w.actors.authored_variable(role,n));
    if(const auto id=w.actors.actor_for_role(role)) {
      const auto &a=w.actors.actor(*id);receipt.roles.push_back(role);receipt.roles.push_back(a.npc().value_or(0xffff));
      receipt.roles.insert(receipt.roles.end(),a.action().position.begin(),a.action().position.end());
      receipt.roles.push_back(a.behavior.direction);receipt.roles.push_back(a.behavior.surface_flags);
      for(const auto &task:a.tasks()) {receipt.roles.push_back(task.cursor);receipt.roles.push_back(task.sleep_frames);}
    }
  }
  std::cout<<"PASS actual Runtime "<<assets.title<<' '<<name(caller)<<" budget="<<budget<<" NPCs="<<receipt.work.npc_creations
    <<" saturated_publications="<<publications<<" polls="<<receipt.polls<<" actor_ticks="<<receipt.actor_ticks<<std::endl;
  return receipt;
}
void run(const eb::GameAssets &assets) {
  for(const auto caller:{Caller::Maintenance,Caller::Camera,Caller::EnemyCamera}) {
    const auto small=run(assets,caller,1),large=run(assets,caller,4096);
    check(small==large,"Actual Runtime work budgets changed streaming owners");
  }
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try {for(int i=1;i<argc;++i)runtime_streaming_reference::run(eb::load_game_assets(argv[i],eb::asset_profiles()));}
  catch(const std::exception &e) {std::cerr<<"FAIL actual Runtime streaming: "<<e.what()<<'\n';return 1;}
  return 0;
}
