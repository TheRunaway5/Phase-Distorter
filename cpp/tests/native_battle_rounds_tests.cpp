// CPU-free coordinator proof with actual Scene/Frame/window/formation owners.
// Dialogue bytes and imported tables are synthetic; no audio/CPU stubs execute.
#include "native_battle_frame_fixture.hpp"
#include "native_interaction_test_assets.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include "eb/native/battle/rounds.hpp"
#include "eb/native/world_control.hpp"
#include "eb/native/battle/grammar.hpp"
namespace {
using namespace eb::native;
using namespace eb::native::battle;
using battle_frame_test::check;
using battle_frame_test::rejects;
std::vector<std::uint8_t> metadata_bytes(eb::GameVersion v){
 std::vector<std::uint8_t>b(0x160000);
 const unsigned table=v==eb::GameVersion::US?0x159589:0x15a440,shift=v==eb::GameVersion::US?0:17;
 const dialogue::ReferenceKey opening{0x11,0x11,0xef,0};
 std::copy(opening.begin(),opening.end(),b.begin()+table+45-shift);return b;
}
std::vector<std::uint8_t> party_bytes(eb::GameVersion v){
 std::vector<std::uint8_t>b(0x160000);const unsigned at=v==eb::GameVersion::US?0x3e012:0x3dffc;
 for(unsigned i=0;i<17;++i)battle_frame_test::put(b,at+i*8+6,i<4?24+i:28);
 return b;
}
std::shared_ptr<const dialogue::Program> messages(eb::GameVersion v,const EncounterResources&r){
 std::vector<dialogue::ReferenceBinding> refs{{r.enemy(0).opening,dialogue::Location{0,0}},
   {interaction_test_assets::Content::key(1),dialogue::Location{0,0}}};
 for(unsigned m=0;m<8;++m)refs.push_back({r.message(static_cast<EncounterMessage>(m)),dialogue::Location{0,0}});
 return std::make_shared<const dialogue::Program>(v,std::vector<dialogue::ContentBlock>{{0,0,{2}}},
   std::vector<dialogue::Location>{{0,0}},refs);
}
struct Rig {
 battle_frame_test::FrameFixture h;
 std::shared_ptr<const EncounterResources> resources;
 dialogue_substitution_test_assets::Input substitution_input;
 std::shared_ptr<const dialogue::SubstitutionResources> substitutions;
 dialogue::PreparedMessage prepared;
 dialogue::PromptHost prompts;
 std::shared_ptr<const dialogue::Program> program;
 story::BattleDialogue dialogue;
 ActionState action;
 Names names;
 WorldPartyData party_data;
 WorldPartyState world_party;
 WorldParty updater;
 party::MovementPolicyState movement;
 interaction_test_assets::Content content;
 WorldCollision collision=interaction_test_assets::make_collision();
 npcs::Interactions interactions;
 story::PartyFormation formation;
 EncounterState state;
 TurnState turns;
 WorldEncounterState encounter;
 Admission admission;
 RowState rows;
 StealState steals;
 std::shared_ptr<const ActionResources> actions;
 TargetSelection targeting;
 TurnScheduler scheduler;
 DeadPlayers dead;
 Rounds rounds;
 Rig(eb::GameVersion v):h(v,4),resources(EncounterResources::import(metadata_bytes(v),v)),
  substitution_input(v),substitutions(substitution_input.load()),prepared(v),prompts(h.f.windows),
  program(messages(v,*resources)),dialogue(program,prompts,prepared,h.f.party,h.f.input),
  names(h.roster,h.f.party,prepared,*substitutions,action),party_data(party_bytes(v),v),
  updater(h.f.party,h.f.actors,party_data,world_party),content(v),
  interactions(npcs::InteractionResources::import(content.bytes,v),npcs::MapTextResources::import(content.bytes,v),
   program,h.f.windows,h.f.actors,collision,h.f.area),
  formation(updater,h.f.party,h.f.actors,party_data,world_party,movement,interactions,h.f.clock),
  admission(resources,h.roster,h.f.party,world_party,encounter,h.f.text,action,state,h.frame_state,turns,h.f.random,h.f.clock),
  actions(ActionResources::import(std::vector<std::uint8_t>(0x160000),v)),
  targeting(h.roster,h.f.party,h.f.random,rows,steals,*actions,*substitutions,h.catalog),
  scheduler(turns,h.roster,h.f.party,action,h.f.random,*actions,state,targeting),
  dead(resources,h.roster,h.f.party,action,names,dialogue,h.f.windows,*h.f.scene,formation),
  rounds(admission,scheduler,dead,*h.f.scene,h.f.windows,h.f.meters,dialogue){
  h.f.party.party_count=h.f.party.controlled_count=1;h.f.party.party_order={1};h.f.party.display_order={1};h.f.party.controlled_order={0};
  h.f.party.character(1).current_hp=h.f.party.character(1).target_hp=h.f.party.character(1).maximum_hp=99;
  h.f.party.character(1).current_pp=h.f.party.character(1).target_pp=37;
  WorldActorSpec spec;spec.sprite=0;spec.action.variables[0]=0;spec.action.variables[1]=0;
  const auto id=h.f.actors.create_authored(spec,{24,25});check(id.has_value(),"Actual party actor missing");
  h.f.actors.actor(*id).appearance.select_four(0,0);
  ActorCreationMetadata geometry{interaction_test_assets::make_sprites()->definition(0),1,1};
  interactions.attach(*id,24,geometry,0xffff);interactions.state().leader=*id;
  world_party.roles[0]=world_party.current_leader_role=24;
  h.f.scene->bind_interactions(interactions);h.f.scene->bind_party_formation(formation);
  h.roster.initialize_player(0,h.f.party,1);
  auto& enemy=h.roster.at(8);enemy.id=0;enemy.consciousness=1;enemy.side=1;enemy.afflictions.fill(0);enemy.speed=4;
  enemy.x=120;enemy.sprite=1;enemy.row=0;
  encounter.group=0;encounter.roster={0};action.enemy_count=1;
 }
 void drive_scene(story::Scene::Operation&op){
  if(!op.service())return;
  switch(*op.service()){
   case story::SceneService::Frame:op.complete_frame({0,0});break;
   case story::SceneService::Publication:op.complete_publication();break;
   case story::SceneService::PartySpriteBlink:clear_party_sprite_blink(h.f.actors);op.respond_party_sprite_blink();break;
   default:throw std::runtime_error("Synthetic coordinator reached an unowned service");
  }
 }
 void finish(DeadPlayers::Operation&op){
  for(unsigned i=0;i<20000;++i){const auto p=op.advance(1);if(p==dialogue::Progress::Finished){check(op.complete(),"Dead-player check false finish");return;}if(auto*c=op.scene())drive_scene(*c);else check(!op.party_update()||!op.party_update()->service(),"Unexpected bicycle dismount");}
  throw std::runtime_error("Dead-player check did not complete");
 }
 void finish(Rounds::Operation&op,bool select=true){
  for(unsigned i=0;i<20000;++i){const auto p=op.advance(1);if(p==dialogue::Progress::Finished){check(op.complete(),"Rounds false finish");return;}if(auto*c=op.scene())drive_scene(*c);else if(op.menu()){check(select,"Unexpected command menu");op.submit_menu(8,{1,0,8,0,0},0);}else check(!op.party_update()||!op.party_update()->service(),"Unexpected bicycle dismount");}
  throw std::runtime_error("Round scheduling did not complete");
 }
};
void dead_players(eb::GameVersion v){
 Rig f(v);auto& b=f.h.roster.at(0);auto& p=f.h.f.party.character(1);
 p.current_hp=0;p.current_pp=19;b.hp=99;b.pp=37;b.afflictions={0,2,4,1,4,1,4};
 f.h.f.actors.appearance_scene().intangibility_ticks=7;
 const auto seed=f.h.f.random;auto op=f.dead.begin();
 check(op->advance(0)==dialogue::Progress::BudgetExhausted&&b.hp==99,"Zero work altered live HP");
 rejects([&]{f.dead.begin();},"Concurrent dead-player check admitted");f.finish(*op);
 check(b.hp==0&&b.pp==19&&b.afflictions==std::array<std::uint8_t,7>{1},"New KO did not use rolling meters/clear all groups");
 check(p.afflictions==b.afflictions&&f.action.target==0,"KO did not publish party status/current target");
 check(!f.h.f.windows.slot_for(dialogue::WindowId{14}),"Newly opened KO window retained after completion");
 check(op->advance(0)==dialogue::Progress::Finished,"Completed KO replayed work");
 op.reset();p.current_hp=22;b.afflictions={3,0,0,0,4,0,0};
 auto again=f.dead.begin();f.finish(*again);check(b.hp==22&&b.afflictions[4]==4&&p.afflictions[4]==1,"Concentration normalization lost actual battler/party distinction");
 check(!f.dead.failed()&&f.world_party.current_leader_role==24,"Actual UPDATE_PARTY did not complete");
 (void)seed;
}
void rounds(eb::GameVersion v){
 Rig f(v);auto commands=f.rounds.begin_commands();check(commands->advance(0)==dialogue::Progress::BudgetExhausted&&!f.turns.round_number,"Zero work started a round");
 rejects([&]{commands->submit_menu(8,{},0);},"Unsolicited menu result admitted");
 rejects([&]{f.rounds.begin_commands();},"Concurrent round admitted");f.finish(*commands);
 check(commands->command_outcome()==CommandOutcome::Ready&&f.turns.round_number==1&&f.h.roster.at(0).action==8,"Command scheduling skipped actual submission");
 check(f.h.f.meters.state().selected_phase==0xffff&&f.turns.initiative==0,"Completed selection retained meter/initiative");
 commands.reset();unsigned actors{};
 for(;;){auto op=f.rounds.begin_actor();f.finish(*op,false);if(op->actor().step==ActorStep::RoundComplete)break;check(op->actor().step==ActorStep::Actor&&op->action_permitted(),"Actor dispatch lost source result");check(f.action.attacker==op->actor().slot&&f.h.roster.at(*op->actor().slot).taken_turn==1,"Dispatch preceded real clear-focus callback");++actors;}
 check(actors==2,"Round did not schedule both populated participants exactly once");
 auto next=f.rounds.begin_commands();f.finish(*next);check(f.turns.round_number==2,"Round completion failed to admit following round");
}
void grammar_queries(){
 Rig f(eb::GameVersion::US);
 auto& p=f.h.f.party;auto& roster=f.h.roster;
 f.action.attacker=8;f.action.target=0;
 f.h.f.windows.bind_battle(roster,f.action);
 for(auto count:{0u,1u,2u,3u,4u,65535u}){
  f.action.enemy_count=std::uint16_t(count);
  check(f.h.f.windows.query_battle({false,0})==std::min(count,3u),"Enemy grammar counted occupied slots instead of admission");
 }
 roster.at(0).id=2;check(f.h.f.windows.query_battle({true,1})==2,"Paula grammar lost female selector");
 roster.at(0).id=4;check(f.h.f.windows.query_battle({true,1})==1,"Other ally gender differs");
 check(f.h.f.windows.query_battle({false,1})==0,"Imported raw enemy gender differs");
 p.display_order={4,2,1,3,6,5};
 for(unsigned count=0;count<=6;++count)for(unsigned mask=0;mask<64;++mask){
  p.controlled_count=std::uint8_t(count);unsigned live=0;
  for(unsigned i=0;i<6;++i){auto& c=p.character(p.display_order[i]);c.afflictions[0]=(mask&(1u<<i))?std::uint8_t(i&1?1:2):3;if(i<count&&c.afflictions[0]==3)++live;}
  check(f.h.f.windows.query_battle({true,255})==std::min(live,3u),"Ally grammar missed live display-order/controlled/status predicate");
 }
 p.controlled_count=1;p.display_order[0]=1;p.character(1).afflictions[0]=0;f.action.enemy_count=7;
 auto program=std::make_shared<const dialogue::Program>(eb::GameVersion::US,
  std::vector<dialogue::ContentBlock>{{0,0,{0x1c,0x14,0,2}}},std::vector<dialogue::Location>{{0,0}});
 dialogue::Conversation conversation(program,f.h.f.windows);conversation.start(dialogue::EntryId{0});
 check(conversation.advance()==dialogue::Progress::Finished&&f.h.f.text.window().active.working==3,"Real bound conversation left grammar as an external request");
 f.action.attacker.reset();rejects([&]{f.h.f.windows.query_battle({false,1});},"Missing physical selector guessed by grammar");
}
void abandonment(eb::GameVersion v){Rig f(v);{auto op=f.rounds.begin_commands();}check(f.rounds.failed(),"Abandoned scheduler remained reusable");rejects([&]{f.rounds.begin_commands();},"Failed scheduler resumed");Rig g(v);{auto op=g.dead.begin();rejects([&]{g.rounds.begin_commands();},"Concurrent dead-player operation admitted a new round");check(!g.turns.round_number,"Rejected round changed initiative state");}check(g.dead.failed(),"Abandoned dead-player check remained reusable");}
}
int main(){try{for(auto v:{eb::GameVersion::US,eb::GameVersion::JP}){dead_players(v);rounds(v);abandonment(v);}grammar_queries();std::cout<<"Native battle round coordination passed "<<battle_frame_test::checks<<" checks\n";return 0;}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
