#include "eb/native/battle/admission.hpp"
#include "eb/native/battle/turn_scheduler.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace eb::native;
using namespace eb::native::battle;
namespace {
unsigned checks;
void check(bool v,const char* m){++checks;if(!v)throw std::runtime_error(m);}
template<class F>void rejects(F f){bool did{};try{f();}catch(const std::exception&){did=true;}check(did,"Expected rejected admission");}
struct Fixture {
 eb::GameVersion version;
 std::vector<std::uint8_t> image;
 std::shared_ptr<const EncounterResources> metadata;
 std::shared_ptr<const EnemyResources> enemies;
 party::State party;
 WorldPartyState formation;
 WorldEncounterState encounter;
 dialogue::State text;
 ActionState action;
 EncounterState state;
 FrameState frame;
 TurnState turns;
 story::RandomState random{0x1234,0x5678};
 story::TickState clock;
 std::unique_ptr<Roster> roster;
 std::unique_ptr<Admission> admission;
 explicit Fixture(eb::GameVersion v):version(v),image(0x160000),party(v){
  const unsigned table=v==eb::GameVersion::US?0x159589:0x15a440;
  const unsigned stride=v==eb::GameVersion::US?94:77,shift=v==eb::GameVersion::US?0:17;
  for(unsigned id=0;id<231;++id){
   const unsigned at=table+id*stride;
   const auto field=[&](unsigned o,unsigned value,unsigned bytes=1){for(unsigned i=0;i<bytes;++i)image.at(at+o-shift+i)=std::uint8_t(value>>(i*8));};
   field(28,1,2);field(33,100+id,2);field(35,10+id,2);field(54,id%99);field(60,id+1);field(89,0);field(91,id%2);
   field(55,id);field(87,7);field(88,id);
   field(45,0xef0000+id,4);
  }
  const unsigned npc=v==eb::GameVersion::US?0x158f23:0x159dda;
  for(unsigned id=0;id<19;++id){image[npc+id*2]=std::uint8_t(id);image[npc+id*2+1]=std::uint8_t(100+id);}
  const unsigned consolation=v==eb::GameVersion::US?0x23109:0x2302e;
  image[consolation]=201;image[consolation+9]=202;
  for(unsigned i=0;i<8;++i){image[consolation+1+i]=std::uint8_t(20+i);image[consolation+10+i]=std::uint8_t(40+i);}
  metadata=EncounterResources::import(image,v);enemies=EnemyResources::import(image,v);roster=std::make_unique<Roster>(enemies);
  party.party_count=party.controlled_count=2;party.party_order={4,2,16,17};party.controlled_order={3,1};
  for(unsigned c=1;c<=4;++c){auto& p=party.character(c);p.current_hp=std::uint16_t(c*10);p.target_hp=std::uint16_t(c*11);p.maximum_hp=std::uint16_t(c*12);p.current_pp=std::uint16_t(c*13);p.target_pp=std::uint16_t(c*14);p.maximum_pp=std::uint16_t(c*15);p.speed=std::uint8_t(c*16);}
  formation.first_guest={16,0x9876};formation.second_guest={17,0x5432};
  encounter.group=475;encounter.roster={11,12,11,13};encounter.initiative=WorldBattleInitiative::PartyFirst;
  admission=std::make_unique<Admission>(metadata,*roster,party,formation,encounter,text,action,state,frame,turns,random,clock);
 }
 void reimport(){metadata=EncounterResources::import(image,version);admission=std::make_unique<Admission>(metadata,*roster,party,formation,encounter,text,action,state,frame,turns,random,clock);}
};
void run(eb::GameVersion v){
 Fixture f(v);
 check(f.metadata->enemy(11).music==11&&f.metadata->enemy(11).opening[0]==11,"Regional encounter metadata offset");
 check(f.metadata->npc(17).enemy==117&&f.metadata->npc(17).targeting==17,"Regional guest metadata offset");
 const auto initial=f.random;
 f.turns.round_number=400;f.turns.flee_requested=true;f.turns.mirror_enemy=17;f.turns.item_used=22;f.state.item_dropped=44;f.state.money_gained=123;f.state.experience_gained=456;
 f.admission->reset();
 check(f.frame.giygas_phase==1&&f.turns.round_number==0&&!f.turns.flee_requested&&f.turns.mirror_enemy==0&&!f.turns.item_used,"Startup reset source producers");
 check(f.state.item_dropped==44&&!f.state.money_gained&&!f.state.experience_gained&&f.random==initial,"Reset changed RNG, previous drop or retained rewards");
 f.admission->initialize_party();
 check(f.roster->at(0).id==4&&f.roster->at(0).row==3&&f.roster->at(1).id==2&&f.roster->at(1).row==1,"Party order is distinct from character index");
 check(f.roster->at(2).id==116&&f.roster->at(2).npc==16&&f.roster->at(2).row==0&&f.roster->at(2).hp==0x9876,"First guest HP uses world guest owner");
 check(f.roster->at(3).id==117&&f.roster->at(3).npc==17&&f.roster->at(3).row==1&&f.roster->at(3).hp==0x5432&&!f.roster->at(3).side&&!f.roster->at(3).pp,"Second guest HP/side/PP producer");
 f.admission->initialize_enemies(3);
 check(f.action.enemy_count==3&&f.encounter.roster.size()==4&&f.roster->at(10).label==2&&!f.roster->at(11).consciousness,"Admitted count preserves collected IDs and labels");
 f.admission->consume_initiative();check(f.turns.initiative==1&&f.encounter.initiative==WorldBattleInitiative::Normal,"Initiative must be consumed exactly once");
 f.text.set_flag(18,true);f.admission->augment_party();check(f.roster->at(6).id==215&&!f.roster->at(6).side&&f.roster->at(6).row==1&&f.roster->at(6).npc==215,"Buzz Buzz admission");
 f.party.character(2).afflictions[1]=2;f.admission->augment_party();check(f.roster->at(6).id==213&&f.roster->at(6).side==1&&f.roster->at(6).npc==213,"Possession overwrites Buzz Buzz in same slot6");
 const unsigned table=v==eb::GameVersion::US?0x159589:0x15a440,stride=v==eb::GameVersion::US?94:77,shift=v==eb::GameVersion::US?0:17;
 f.encounter.roster={11};f.admission->initialize_enemies(1);
 for(unsigned rate=0;rate<9;++rate){
  f.image[table+11*stride+87-shift]=std::uint8_t(rate);f.reimport();
  for(unsigned seed=0;seed<512;++seed){
   f.random={std::uint16_t(seed*127),std::uint16_t(seed*91+3)};auto expected=f.random;
   (void)story::next_random(expected);
   unsigned item=11;if(rate<7&& (story::next_random(expected)&((1u<<(7-rate))-1)))item=0;
   f.admission->choose_item_drop();
   check(f.state.item_dropped==item&&f.random==expected,"Drop must preserve exact rarity masks and draw count");
  }
 }
 // Both consolation rows and every matching record overwrite in source order.
 f.image[table+11*stride+88-shift]=0;f.reimport();f.admission->initialize_party();f.admission->initialize_enemies(1);
 f.roster->initialize_enemy(8,201);f.roster->initialize_enemy(9,201);f.roster->initialize_enemy(31,202);
 f.roster->at(31).side=0;f.roster->at(31).npc=99;
 auto expected=f.random;(void)story::next_random(expected);unsigned item{};
 for(unsigned base:{20u,20u,40u})item=base+(unsigned(story::next_random(expected))*7>>8);
 f.admission->choose_item_drop();check(f.state.item_dropped==item&&f.random==expected,"Consolation must scan all conscious records without side/NPC filter");
 check(item<47,"Consolation RAND_LIMIT7 never selects eighth item");
 const auto before=f.roster->at(0);f.party.party_order[5]=250;rejects([&]{f.admission->initialize_party();});check(f.roster->at(0)==before,"Invalid metadata must reject before clearing roster");
 f.party.party_order[5]=0;f.state.mode=0;rejects([&]{f.admission->reset();});
 rejects([&]{EncounterResources::import(std::span<const std::uint8_t>(f.image).first(100),v);});
}
}
int main(){try{run(eb::GameVersion::US);run(eb::GameVersion::JP);std::cout<<"Native encounter admission passed "<<checks<<" checks\n";return 0;}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
