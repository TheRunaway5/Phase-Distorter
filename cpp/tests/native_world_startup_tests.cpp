#include "native_world_startup_fixture.hpp"
#include <iostream>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool okay,const char *message) {++checks;if(!okay)throw std::runtime_error(message);}
template<class F> void rejects(F f) {bool caught{};try{f();}catch(const std::exception&){caught=true;}check(caught,"Invalid startup was accepted");}
void run(eb::GameVersion region,unsigned count,unsigned budget) {
  startup_test::Resources r(region);startup_test::Fixture f(r);
  auto snapshot=f.snapshot(count);
  const auto expected=snapshot.state;
  const auto trail=f.trail.points;
  auto operation=f.startup->begin(std::move(snapshot));
  check(operation->advance(0)==dialogue::Progress::BudgetExhausted && f.actors.size()==0 &&
        f.party.party_count==0,"Zero startup budget changed live owners");
  f.drive(*operation,budget);
  check(operation->stage()==WorldStartupStage::MapPreparationRequired &&
        operation->service()==WorldStartupService::MapPreparation &&
        !operation->runtime_operation() && !f.startup->failed(),
        "Startup falsely finished or retained an old runtime service");
  check(f.party.party_count==count && f.party.controlled_count==count &&
        operation->created_party().size()==count && f.actors.size()==count+1 &&
        f.actors.actor_for_role(23) && f.formation.current_leader_role==24 &&
        f.talk.state().leader==f.actors.actor_for_role(24),
        "Restored party did not create actual controller/formation owners");
  check(!f.text.flag(749) && !f.following.pajamas &&
        !f.control.automatic_mode && !f.control.automatic_ticks &&
        !f.control.automatic_restore_style && !f.trail.next_write &&
        f.trail.points==trail,
        "Pre-game dialogue/initializer ordering or trail preservation differs");
  check(f.session.elapsed_timer==expected.game.elapsed_timer &&
        f.session.respawn==saves::Position{expected.game.leader_x,expected.game.leader_y} &&
        f.control.x_fraction==0x1234 && f.control.y_fraction==0x5678 &&
        f.talk.state().leader_x==expected.game.leader_x &&
        f.control.moved_this_tick==expected.game.reserved_90 &&
        f.talk.state().area_character_style==expected.game.reserved_92 &&
        !f.control.encounter.mode && !f.windows.prompt_state().battle_mode &&
        f.windows.output().policy().text_speed==1 &&
        f.windows.prompt_state().text_speed_based_wait==60 &&
        f.enemies.population().maximum==10 && f.phone.timer==1687 && f.phone.queued==4 &&
        f.spawn.enemies==0xffff &&
        f.queued.current==0 && f.queued.next==0 && !f.queued.pending && f.queued.current_type==0xffff,
        "Continue did not restore/reset the actual shared session owners");
  for(unsigned i=0;i<256;++i) {
    const auto color=f.scene_colors[i];
    const auto word=unsigned(color.red)|unsigned(color.green)<<5|unsigned(color.blue)<<10;
    check(word==(i<32?f.windows.palette()[i]:0),"Scene clear/window palette bridge differs");
  }
  const auto ticks=f.actors.ticks(),frames=f.runtime->completed_frames();
  const auto random=f.random;
  for(unsigned i=0;i<10;++i)
    check(operation->advance(1000)==dialogue::Progress::Suspended,
          "Unimplemented map setup was acknowledged");
  check(f.actors.ticks()==ticks && f.runtime->completed_frames()==frames && f.random==random,
        "Repeated frontier sampling consumed a frame or RNG");
  f.actors.scene().camera_x=0xfff0;f.actors.scene().camera_y=0x8001;
  const auto before=f.actors.actor(*f.actors.actor_for_role(24)).action().position;
  f.startup->position_and_project_party();
  const auto &actor=f.actors.actor(*f.actors.actor_for_role(24));
  check(actor.action().position[0]==(std::uint32_t(expected.game.leader_x)<<16 | (before[0]&0xffff)) &&
        actor.action().position[1]==(std::uint32_t(expected.game.leader_y)<<16 | (before[1]&0xffff)) &&
        actor.action().position[2]==before[2] && f.actors.ticks()==ticks && f.random==random,
        "Independent party positioning changed fractional/Z/time state");
  rejects([&]{f.startup->begin(f.snapshot());});
  operation.reset();
  check(f.startup->failed() && !f.startup->busy(),"Abandoned startup could replay its consumed prefix");
}
void independent_reset(eb::GameVersion region) {
  startup_test::Resources r(region);startup_test::Fixture f(r);
  auto operation=f.startup->begin(f.snapshot());
  for(unsigned work=0;operation->stage()!=WorldStartupStage::ResetWorld && work<100000;++work) {
    const auto progress=operation->advance(1);
    if(progress==dialogue::Progress::Suspended) {
      auto *child=operation->runtime_operation();
      check(child && child->service()==story::SceneService::Frame,"Pre-game reset test lost its actual frame child");
      child->complete_frame({0,0});
    }
  }
  check(operation->stage()==WorldStartupStage::ResetWorld,"Pre-game did not reach exact reset boundary");
  f.windows.prompt_state().battle_mode=0xabcd;
  f.control.encounter.mode=0x1234;
  f.spawn.enemies=0x1234;
  operation->advance(1);
  check(operation->stage()==WorldStartupStage::CreateController &&
        !f.control.encounter.mode && f.windows.prompt_state().battle_mode==0xabcd,
        "World reset conflated encounter mode with rendering flag");
  check(f.spawn.enemies==0xffff,"World reset normalized its actual enemy-enable word");
  // The rest of this synthetic world-only rig has no battle frame owner.
  f.windows.prompt_state().battle_mode=0;
  f.drive(*operation);
}
void invalid(eb::GameVersion region) {
  startup_test::Resources r(region);startup_test::Fixture f(r);
  auto snapshot=f.snapshot();snapshot.state.game.text_speed=0;
  rejects([&]{f.startup->begin(snapshot);});
  check(!f.startup->failed()&&!f.party.party_count&&!f.actors.size(),
        "Invalid restore partially published owners");
  snapshot=f.snapshot();snapshot.state.game.controlled_count=0;
  rejects([&]{f.startup->begin(snapshot);});
  party::ItemTransformationState other_timers;
  story::RandomState other_random{4,5};
  party::Inventory other(f.party,r.items,r.transformations,other_timers,other_random);
  rejects([&]{WorldStartup wrong(*r.continuing,r.program,f.owners(&other));});
  npcs::Interactions other_talk(r.interactions,r.map_text,r.program,f.windows,f.actors,
                                *r.collision,f.area);
  WorldPartyCreation other_creation(f.party,f.actors,*r.party_data,f.formation,f.updater,
                                    f.spawn.prepared,f.trail,other_talk.state().area_character_style);
  story::PartyFormation other_refresh(f.updater,f.party,f.actors,*r.party_data,f.formation,
                                      f.movement,other_talk,f.clock);
  WorldHotspots other_hotspots(region,f.hotspot_state,other_talk.state(),f.clock,
                               f.actors.appearance_scene(),f.queue);
  check(!f.runtime->uses(other_talk),"Runtime accepted a different interaction owner");
  rejects([&]{WorldStartup wrong(*r.continuing,r.program,{
      f.windows,f.party,f.actors,*f.runtime,other_talk,f.clock,f.formation,f.trail,
      f.control,f.maintenance,f.following,f.spawn,f.enemies,f.inventory,other_hotspots,
      f.queue,f.bootstrap,other_creation,f.updater,*r.party_data,other_refresh,
      other_talk.state().area_character_style,f.scene_colors,f.session,f.random});});
  check(!f.startup->failed()&&!f.party.party_count&&!f.actors.size(),
        "Foreign inventory rejection partially changed startup");
  auto busy=f.runtime->begin(story::TickKind::Frame);
  rejects([&]{f.startup->begin(f.snapshot());});
}
void failed_prefix(eb::GameVersion region) {
  startup_test::Resources r(region);startup_test::Fixture f(r);
  PreparedActorState previous;previous.variables[1]=6;
  const auto old=f.actors.create_authored_script(1,previous,{1,2});
  check(bool(old),"Historical role fixture could not initialize");f.actors.erase(*old);
  auto operation=f.startup->begin(f.snapshot());
  rejects([&]{f.drive(*operation);});
  const auto actors=f.actors.size();
  check(f.startup->failed(),"Consumed startup failure remained replayable");
  rejects([&]{operation->advance();});
  check(f.actors.size()==actors,"Failed startup repeated its creation prefix");
}
void competing_frame(eb::GameVersion region) {
  startup_test::Resources r(region);startup_test::Fixture f(r);
  auto operation=f.startup->begin(f.snapshot());
  auto frame=f.runtime->begin(story::TickKind::Frame);
  const auto flags=f.text.event_flags;
  rejects([&]{operation->advance(1);});
  check(!f.party.party_count&&!f.actors.size()&&f.text.event_flags==flags&&
        !f.session.elapsed_timer,"Competing frame allowed partial save restoration");
}
void foreign_world(eb::GameVersion region) {
  startup_test::Resources r(region);
  for(unsigned variant=0;variant<5;++variant) {
    startup_test::Fixture f(r);
    WorldPartyState formation;PartyTrail trail;WorldControlState state;
    WorldMaintenanceState maintenance;
    npcs::InteractionQueueState queued;npcs::DadPhoneState phone;
    WorldInteractionQueue queue(region,queued,f.actors.appearance_scene().intangibility_ticks,phone);
    WorldControl control(f.actors,variant==0?formation:f.formation,variant==1?trail:f.trail,
        f.talk.state(),variant==2?state:f.control,f.windows.prompt_state(),f.input,f.clock,
        *r.collision,f.area);
    f.runtime->bind_maintenance(control,variant==3?maintenance:f.maintenance,f.timers,
                                variant==4?queue:f.queue);
    rejects([&]{WorldStartup wrong(*r.continuing,r.program,f.owners());});
    rejects([&]{f.startup->begin(f.snapshot());});
    check(!f.party.party_count&&!f.actors.size()&&!f.startup->failed(),
          "Foreign bound world allowed partial restoration");
  }
  startup_test::Fixture f(r);
  WorldControl control(f.actors,f.formation,f.trail,f.talk.state(),f.control,
      f.windows.prompt_state(),f.input,f.clock,*r.collision,f.area);
  party::ItemTransformationState other_timers;
  rejects([&]{f.runtime->bind_maintenance(control,f.maintenance,other_timers,f.queue);});
  check(!f.runtime->failed()&&!f.party.party_count,
        "Foreign transformation timers damaged runtime");
}
}
int main(){try{for(auto r:{eb::GameVersion::US,eb::GameVersion::JP}) {
  for(unsigned n:{1u,4u})for(unsigned budget:{1u,4096u})run(r,n,budget);
  independent_reset(r);invalid(r);failed_prefix(r);competing_frame(r);foreign_world(r);
}std::cout<<"PASS native startup: "<<checks<<" checks\n";}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
