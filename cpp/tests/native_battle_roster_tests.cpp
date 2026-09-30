// CPU-free battle record producers and whole-record formation integration.
// Asset bytes are synthetic; the separate source oracle validates execution.
#include "eb/native/battle/formation.hpp"
#include "eb/native/saves/session.hpp"
#include <algorithm>
#include <iostream>
#include <set>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native;
using namespace eb::native::battle;
unsigned checks{};
std::string context;
void check(bool value,const char* message) {++checks;if(!value)throw std::runtime_error(context+": "+message);}
template<class F> void rejects(F call,const char* message) {
    bool threw{};try{call();}catch(const std::exception&){threw=true;}check(threw,message);
}
std::uint8_t damage(std::uint8_t value) {
    constexpr std::array<std::uint8_t,4> table{255,179,102,13};return value<4?table[value]:value;
}
std::uint8_t resistance(std::uint8_t value) {
    constexpr std::array<std::uint8_t,4> table{255,128,26,0};return value<4?table[value]:value;
}
EnemyStats specification(unsigned id,unsigned bias=0) {
    EnemyStats e;e.sprite=id==42?0xabcd:1;e.hp=std::uint16_t(1000+id);e.pp=std::uint16_t(400+id);
    e.money=std::uint16_t(0xf000+id);e.experience=0x98760000u+id*257;
    e.level=std::uint8_t(id*17+3);e.offense=std::uint8_t(id*3+7);e.defense=std::uint8_t(id*5+11);
    e.speed=std::uint8_t(id+31);e.guts=std::uint8_t(id+47);e.luck=std::uint8_t(id+59);e.iq=std::uint8_t(id+61);
    e.fire=std::uint8_t(id+bias);e.freeze=std::uint8_t(id+bias+1);e.flash=std::uint8_t(id+bias+2);
    e.paralysis=std::uint8_t(id+bias+3);e.hypnosis_brainshock=std::uint8_t(id+bias+4);
    e.initial_status=id==230?255:std::uint8_t(id%10);e.row=id==230?255:std::uint8_t(id%2);return e;
}
struct Input {
    eb::GameVersion version;
    unsigned base,stride,bias;
    std::vector<std::uint8_t> bytes;
    explicit Input(eb::GameVersion v,unsigned b=0):version(v),base(v==eb::GameVersion::US?0x159589:0x15a440),
        stride(v==eb::GameVersion::US?94:77),bias(b),bytes(base+231*stride) {
        for(unsigned id=0;id<231;++id) {
            const auto e=specification(id,bias);const auto at=base+id*stride;
            const auto field=[&](unsigned offset,unsigned value,unsigned size=1) {
                offset-=version==eb::GameVersion::JP?17:0;
                for(unsigned i=0;i<size;++i)bytes.at(at+offset+i)=std::uint8_t(value>>(i*8));
            };
            field(28,e.sprite,2);field(33,e.hp,2);field(35,e.pp,2);field(37,e.experience,4);field(41,e.money,2);
            field(54,e.level);field(56,0xab00u|e.offense,2);field(58,0xcd00u|e.defense,2);
            field(60,e.speed);field(61,e.guts);field(62,e.luck);field(63,e.fire);field(64,e.freeze);
            field(65,e.flash);field(66,e.paralysis);field(67,e.hypnosis_brainshock);
            field(85,e.iq);field(89,e.initial_status);field(91,e.row);
        }
    }
    std::shared_ptr<const EnemyResources> import() const {return EnemyResources::import(bytes,version);}
};
Battler expected_enemy(unsigned id,unsigned bias=0) {
    const auto e=specification(id,bias);Battler r;r.id=std::uint16_t(id);r.sprite=e.sprite;r.label=1;
    r.consciousness=r.side=1;r.row=e.row;r.hp=r.target_hp=r.maximum_hp=e.hp;
    r.pp=r.target_pp=r.maximum_pp=e.pp;r.offense=r.base_offense=e.offense;
    r.defense=r.base_defense=e.defense;r.speed=r.base_speed=e.speed;r.guts=r.base_guts=e.guts;r.luck=r.base_luck=e.luck;
    r.iq=e.iq;r.fire_resistance=damage(e.fire);r.freeze_resistance=damage(e.freeze);
    r.flash_resistance=resistance(e.flash);r.paralysis_resistance=resistance(e.paralysis);
    r.hypnosis_resistance=resistance(e.hypnosis_brainshock);
    r.brainshock_resistance=resistance(std::uint8_t(3-e.hypnosis_brainshock));
    r.money=e.money;r.experience=e.experience;r.original_enemy=std::uint16_t(id);
    constexpr std::array<std::uint8_t,5> shield{0,2,1,4,3};
    if(e.initial_status>0 && e.initial_status<5) {r.afflictions[6]=shield[e.initial_status];r.shield_hp=3;}
    if(e.initial_status==5)r.afflictions[2]=1;
    if(e.initial_status==6)r.afflictions[4]=4;
    if(e.initial_status==7)r.afflictions[3]=1;
    return r;
}
Battler pattern(unsigned seed) {
    Battler r;
    constexpr std::array words{&Battler::id,&Battler::sprite,&Battler::action,&Battler::hp,&Battler::target_hp,
        &Battler::maximum_hp,&Battler::pp,&Battler::target_pp,&Battler::maximum_pp,&Battler::offense,
        &Battler::defense,&Battler::speed,&Battler::guts,&Battler::luck,&Battler::money,&Battler::original_enemy};
    constexpr std::array bytes{&Battler::action_order,&Battler::action_item_slot,&Battler::action_argument,
        &Battler::targeting,&Battler::target,&Battler::label,&Battler::consciousness,&Battler::taken_turn,
        &Battler::side,&Battler::npc,&Battler::row,&Battler::guarding,&Battler::shield_hp,&Battler::vitality,
        &Battler::iq,&Battler::base_offense,&Battler::base_defense,&Battler::base_speed,&Battler::base_guts,
        &Battler::base_luck,&Battler::paralysis_resistance,&Battler::freeze_resistance,&Battler::flash_resistance,
        &Battler::fire_resistance,&Battler::brainshock_resistance,&Battler::hypnosis_resistance,&Battler::resource,
        &Battler::x,&Battler::y,&Battler::initiative,&Battler::unknown71,&Battler::blink,&Battler::alternate_flash,
        &Battler::targeted,&Battler::alternate};
    static_assert(words.size()*2+bytes.size()+7+4==78);
    unsigned n=0;for(auto field:words)r.*field=std::uint16_t(0x8100+seed*97+n++*13);
    for(auto field:bytes)r.*field=std::uint8_t(1+(seed*19+n++*7)%255);
    for(auto& status:r.afflictions)status=std::uint8_t(seed+n++);
    r.experience=0xfedc0000+seed*277;return r;
}
struct Snapshot {
    std::array<Battler,32> records;
    std::array<std::uint64_t,32> identities;
    std::uint16_t highest;
    bool operator==(const Snapshot&) const = default;
};
Snapshot snapshot(const Roster& r) {
    Snapshot out;for(unsigned i=0;i<32;++i){out.records[i]=r.at(i);out.identities[i]=r.identity(i);}
    out.highest=r.highest_enemy_level();return out;
}
void unchanged_other_slots(const Snapshot& before,const Roster& after,unsigned except) {
    for(unsigned i=0;i<32;++i)if(i!=except)
        check(after.at(i)==before.records[i] && after.identity(i)==before.identities[i],"Producer changed an unrelated physical record");
}
void imports_and_enemy_producers(eb::GameVersion version) {
    for(unsigned bias:{0u,32u}) {
        Input input(version,bias);auto resources=input.import();Roster roster(resources);
        check(resources->version()==version,"Enemy resource region lost");
        const auto clean=snapshot(roster);
        check(clean==Snapshot{},"Fresh roster did not zero all records, identities and highest level");
        std::set<std::uint64_t> used;std::uint16_t highest{};
        for(unsigned id=0;id<231;++id) {
            context="enemy "+std::to_string(id)+" bias "+std::to_string(bias);
            check(resources->enemy(id)==specification(id,bias),"Numeric import lost source width, offset or high offense-byte truncation");
            const unsigned slot=id%32;roster.at(slot)=pattern(id);const auto before=snapshot(roster);
            roster.initialize_enemy(slot,id);highest=std::max(highest,std::uint16_t(specification(id).level));
            check(roster.at(slot)==expected_enemy(id,bias),"Full enemy initialization left stale data or miscomputed status/resistance");
            check(roster.identity(slot) && used.insert(roster.identity(slot)).second && roster.highest_enemy_level()==highest,
                  "Enemy reinitialization reused identity or lowered highest level");
            unchanged_other_slots(before,roster,slot);
        }
        const auto before=snapshot(roster);
        rejects([&]{roster.initialize_enemy(32,0);},"Out-of-range enemy slot accepted");
        rejects([&]{roster.initialize_enemy(8,231);},"Out-of-range enemy ID accepted");
        check(snapshot(roster)==before,"Failed initializer changed roster or highest level");
        roster.clear();check(snapshot(roster)==Snapshot{},"Clear did not clear complete records and highest level");
        roster.initialize_enemy(8,0);check(!used.contains(roster.identity(8)),"Clear reused an old motion identity");
        input.bytes[input.base+(version==eb::GameVersion::US?33:16)]^=0xff;
        check(resources->enemy(0)==specification(0,bias),"Imported resources alias caller bytes");
        input.bytes.resize(input.bytes.size()-1);
        rejects([&]{input.import();},"Truncated last enemy record accepted");
    }
}
void labels_and_replacement(eb::GameVersion version) {
    Input input(version);Roster roster(input.import());
    // Every physical slot participates, including ally-area and scratch slots.
    for(unsigned i=0;i<26;++i) {roster.initialize_enemy((i+19)%32,0);check(roster.at((i+19)%32).label==i+1,"Duplicate scan omitted a physical slot");}
    roster.initialize_enemy(13,0);check(roster.at(13).label==0,"All 26 used letters did not produce the source zero result");
    roster.clear();
    for(unsigned i=0;i<5;++i)roster.initialize_enemy(i,0);
    roster.at(1).consciousness=0;roster.at(2).side=2;roster.at(3).original_enemy=0x100;
    roster.initialize_enemy(31,0);check(roster.at(31).label==2,"Label search treated inactive/nonenemy/original-ID records as matches");
    roster.initialize_enemy(31,0);check(roster.at(31).label==2,"Replacement counted its cleared old label");
    const auto valid=snapshot(roster);roster.at(0).label=27;const auto malformed=snapshot(roster);
    rejects([&]{roster.initialize_enemy(8,0);},"Out-of-table duplicate letter was silently normalized");
    check(snapshot(roster)==malformed,"Invalid duplicate-letter scan partially initialized destination");
    roster.at(0)=valid.records[0];
    roster.initialize_enemy(8,0);roster.at(8)=pattern(67);roster.at(8).x=27;roster.at(8).y=239;
    const auto before=snapshot(roster);roster.replace_primary_enemy(7);auto expected=expected_enemy(7);
    expected.x=27;expected.y=239;expected.taken_turn=1;
    check(roster.at(8)==expected && roster.identity(8)!=before.identities[8],"C2C32C retained fields beyond XY, lost taken-turn or reused identity");
    unchanged_other_slots(before,roster,8);const auto replaced=snapshot(roster);
    rejects([&]{roster.replace_primary_enemy(231);},"Invalid replacement enemy accepted");
    check(snapshot(roster)==replaced,"Invalid replacement partially cleared slot8");
}
party::Character character(unsigned id,unsigned raw) {
    party::Character c;c.current_hp=std::uint16_t(0x1000+id);c.target_hp=std::uint16_t(0x2000+id);c.maximum_hp=std::uint16_t(0x3000+id);
    c.current_pp=std::uint16_t(0x4000+id);c.target_pp=std::uint16_t(0x5000+id);c.maximum_pp=std::uint16_t(0x6000+id);
    c.hp_fraction=0xaabb;c.pp_fraction=0xccdd;c.level=99;c.experience=0xdeadbeef;
    c.offense=std::uint8_t(id+11);c.defense=std::uint8_t(id+31);c.speed=std::uint8_t(id+51);
    c.guts=std::uint8_t(id+71);c.luck=std::uint8_t(id+91);c.vitality=std::uint8_t(id+111);c.iq=std::uint8_t(id+131);
    c.base_offense=201;c.base_defense=202;c.base_speed=203;c.base_guts=204;c.base_luck=205;
    for(unsigned i=0;i<7;++i)c.afflictions[i]=std::uint8_t(raw+i);
    c.fire_resistance=std::uint8_t(raw);c.freeze_resistance=std::uint8_t(raw+1);c.flash_resistance=std::uint8_t(raw+2);
    c.paralysis_resistance=std::uint8_t(raw+3);c.hypnosis_brainshock_resistance=std::uint8_t(raw+4);return c;
}
Battler expected_player(unsigned id,const party::Character& c) {
    Battler r;r.id=std::uint16_t(id);r.consciousness=1;r.row=std::uint8_t(id-1);
    r.hp=c.current_hp;r.target_hp=c.target_hp;r.maximum_hp=c.maximum_hp;
    r.pp=c.current_pp;r.target_pp=c.target_pp;r.maximum_pp=c.maximum_pp;r.afflictions=c.afflictions;
    r.offense=r.base_offense=c.offense;r.defense=r.base_defense=c.defense;r.speed=r.base_speed=c.speed;
    r.guts=r.base_guts=c.guts;r.luck=r.base_luck=c.luck;r.vitality=c.vitality;r.iq=c.iq;
    r.fire_resistance=damage(c.fire_resistance);r.freeze_resistance=damage(c.freeze_resistance);
    r.flash_resistance=resistance(c.flash_resistance);r.paralysis_resistance=resistance(c.paralysis_resistance);
    r.hypnosis_resistance=resistance(c.hypnosis_brainshock_resistance);
    r.brainshock_resistance=resistance(std::uint8_t(3-c.hypnosis_brainshock_resistance));return r;
}
void player_producers(eb::GameVersion version) {
    Input input(version);Roster roster(input.import());party::State party(version);
    roster.initialize_enemy(31,29);const auto highest=roster.highest_enemy_level();
    for(unsigned raw=0;raw<256;++raw)for(unsigned id=1;id<=6;++id) {
        context="player "+std::to_string(id)+" raw "+std::to_string(raw);party.character(id)=character(id,raw);
        const unsigned slot=(raw+id)%31;roster.at(slot)=pattern(raw+id);const auto before=snapshot(roster);
        roster.initialize_player(slot,party,id);
        check(roster.at(slot)==expected_player(id,party.character(id)),"Player initializer skipped live character stats, raw resistance or complete record clear");
        check(roster.identity(slot)!=before.identities[slot] && roster.highest_enemy_level()==highest,"Player initializer lost identity or changed highest enemy level");
        unchanged_other_slots(before,roster,slot);
    }
    const auto before=snapshot(roster);party::State foreign(version==eb::GameVersion::US?eb::GameVersion::JP:eb::GameVersion::US);
    rejects([&]{roster.initialize_player(0,party,0);},"Player zero accepted");
    rejects([&]{roster.initialize_player(0,party,7);},"Player beyond six accepted");
    rejects([&]{roster.initialize_player(32,party,1);},"Player outside roster accepted");
    rejects([&]{roster.initialize_player(0,foreign,1);},"Player initializer accepted a foreign regional party");
    check(snapshot(roster)==before,"Failed player initializer changed records");
}
void saved_party_chain(eb::GameVersion version) {
    context="save/party/battle chain";saves::PersistedState state;state.version=version;
    state.game.favourite_thing[1]=0x71;state.game.party_order={1,2,3,4,5,6};state.game.party_count=6;
    state.game.guest_1_hp=0x9876;state.event_flags[117]=0xab;
    for(unsigned i=0;i<6;++i) {
        state.characters[i].values=character(i+1,i*39);
        state.characters[i].miss_rate=std::uint8_t(0xa0+i);state.characters[i].boosted_speed=std::uint8_t(0xb0+i);
        state.characters[i].reserved_53_59={0xaabb,0xccdd,0xeeff,0x5678};
    }
    auto archive=saves::SaveArchive::empty(version);archive.save(1,state,12345);
    const auto loaded=archive.load(1);party::State party(version);saves::restore_party(loaded,party);
    Input input(version);Roster roster(input.import());
    for(unsigned i=0;i<6;++i) {
        roster.initialize_player(i,party,i+1);
        check(roster.at(i)==expected_player(i+1,state.characters[i].values),"Saved raw resistance values did not reach the actual player initializer");
    }
    const auto battle_before=snapshot(roster);
    constexpr std::array fields{&party::Character::fire_resistance,&party::Character::freeze_resistance,
        &party::Character::flash_resistance,&party::Character::paralysis_resistance,&party::Character::hypnosis_brainshock_resistance};
    for(unsigned i=0;i<6;++i)for(unsigned j=0;j<fields.size();++j)
        party.character(i+1).*fields[j]=std::uint8_t(0x70+i*7+j);
    const auto captured=saves::capture_party(party,loaded);archive.save(1,captured,54321);const auto reloaded=archive.load(1);
    check(snapshot(roster)==battle_before,"Party mutation retroactively changed the battle's initialized record copy");
    check(reloaded.game.guest_1_hp==state.game.guest_1_hp && reloaded.event_flags==state.event_flags &&
          reloaded.game.elapsed_timer==54321,"Party capture lost an unrelated save owner or timer");
    const auto layout=saves::layout(version);const unsigned regional_delta=version==eb::GameVersion::JP?1:0;
    for(unsigned i=0;i<6;++i) {
        for(unsigned j=0;j<fields.size();++j) {
            const auto expected=party.character(i+1).*fields[j];
            check(reloaded.characters[i].values.*fields[j]==expected,"Capture/save reread a stale resistance copy");
            for(unsigned copy=0;copy<2;++copy) {
                const auto at=(2+copy)*saves::SaveArchive::block_size+saves::SaveArchive::header_size+
                              layout.game_bytes+i*layout.character_bytes+82-regional_delta+j;
                check(archive.bytes()[at]==expected,"Relocated party resistance changed its physical regional save offset");
            }
        }
        check(reloaded.characters[i].miss_rate==state.characters[i].miss_rate &&
              reloaded.characters[i].boosted_speed==state.characters[i].boosted_speed &&
              reloaded.characters[i].reserved_53_59==state.characters[i].reserved_53_59,
              "Resistance save write overwrote adjacent or unowned character data");
        roster.initialize_player(i,party,i+1);
        check(roster.at(i)==expected_player(i+1,party.character(i+1)),"Later initializer did not read the same now-mutated restored party owner");
    }
    check(archive.validate_block(2).valid() && archive.validate_block(3).valid(),"Round-trip party capture invalidated redundant save checksums");
}
void mirrors(eb::GameVersion version) {
    Input input(version);Roster roster(input.import());for(unsigned i=0;i<32;++i)roster.initialize_enemy(i,i);
    for(unsigned destination=0;destination<32;++destination)for(unsigned source=0;source<32;++source) {
        context="mirror "+std::to_string(destination)+" <- "+std::to_string(source);
        for(unsigned i=0;i<32;++i)roster.at(i)=pattern(i+1);
        const auto before=snapshot(roster);auto expected=before.records[source];const auto& retained=before.records[destination];
        expected.hp=retained.hp;expected.target_hp=retained.target_hp;expected.maximum_hp=retained.maximum_hp;
        expected.pp=retained.pp;expected.target_pp=retained.target_pp;expected.maximum_pp=retained.maximum_pp;
        expected.side=retained.side;expected.row=retained.row;expected.id=retained.id;expected.taken_turn=retained.taken_turn;
        roster.mirror(destination,source);
        check(roster.at(destination)==expected && roster.identity(destination)==before.identities[destination] &&
              roster.highest_enemy_level()==before.highest,"Mirror did not copy complete source payload with exact destination retention");
        unchanged_other_slots(before,roster,destination);
    }
    const auto before=snapshot(roster);rejects([&]{roster.mirror(32,0);},"Invalid mirror destination accepted");
    rejects([&]{roster.mirror(0,32);},"Invalid mirror source accepted");check(snapshot(roster)==before,"Invalid mirror partially wrote destination");
    for(unsigned destination:{0u,8u,31u}) {
        const auto before_external=snapshot(roster);auto backup=pattern(199);auto expected=backup;
        const auto& retained=before_external.records[destination];
        expected.hp=retained.hp;expected.target_hp=retained.target_hp;expected.maximum_hp=retained.maximum_hp;
        expected.pp=retained.pp;expected.target_pp=retained.target_pp;expected.maximum_pp=retained.maximum_pp;
        expected.side=retained.side;expected.row=retained.row;expected.id=retained.id;expected.taken_turn=retained.taken_turn;
        roster.mirror(destination,backup);backup=pattern(201);
        check(roster.at(destination)==expected && roster.identity(destination)==before_external.identities[destination],
              "External mirror backup was aliased or destination retention changed");
        unchanged_other_slots(before_external,roster,destination);
        const auto self=snapshot(roster);roster.mirror(destination,roster.at(destination));
        check(snapshot(roster)==self,"Direct self-alias mirror changed the shared source/destination");
    }
}
BattleCombatants catalog() {
    std::vector<std::uint8_t> bytes(1100);
    const auto word=[&](unsigned at,unsigned v){bytes.at(at)=std::uint8_t(v);bytes.at(at+1)=std::uint8_t(v>>8);};
    const auto pointer=[&](unsigned at,unsigned v){word(at,v);word(at+2,0xc0);};
    BattleCombatantLayout layout{0,64,128,256,320,400,4,0,2,1,1,2,1};pointer(0,500);bytes[4]=1;
    for(unsigned i=0;i<16;++i)word(64+i*2,i);
    word(128,1);word(132,1);pointer(256,320);bytes[320]=1;word(321,0);bytes[323]=1;word(324,1);bytes[326]=255;
    unsigned at=500;for(unsigned chunk=0;chunk<16;++chunk){bytes[at++]=31;for(unsigned j=0;j<32;++j)bytes[at++]=j<16?255:0;}bytes[at]=255;
    return {bytes,layout};
}
BattleFormationRecords project(const Roster& roster) {
    BattleFormationRecords result;for(unsigned i=0;i<24;++i){const auto& r=roster.at(i+8);
        result[i]={roster.identity(i+8),r.id,r.sprite,r.label,r.row,r.resource,r.x,r.y,r.consciousness!=0,r.side==1};}
    return result;
}
void formations(eb::GameVersion version) {
    Input input(version);auto content=catalog();auto artwork=content.prepare(0);
    for(unsigned count:{5u,17u}) {
        context="formation count "+std::to_string(count);Roster roster(input.import());
        for(unsigned i=0;i<8;++i){roster.initialize_enemy(i,1);roster.at(i)=pattern(i+100);roster.at(i).side=0;}
        for(unsigned i=0;i<count;++i) {
            roster.initialize_enemy(i+8,0);const auto label=roster.at(i+8).label;roster.at(i+8)=pattern(i+1);
            auto& r=roster.at(i+8);r.id=r.original_enemy=0;r.sprite=1;r.label=label;r.row=std::uint8_t(i%2);
            r.consciousness=std::uint8_t(i%2?255:2);r.side=1;
        }
        roster.at(31).experience=0x87654321; // scratch has payload but no identity/eligibility.
        auto before=snapshot(roster);story::RandomState random{17,733};const auto original_random=random;
        auto expected=prepare_battle_formation(version,0,count,project(roster),content,artwork.resources(),random);
        Formation formation(roster,0,count,content,artwork.resources(),random);
        check(snapshot(roster)==before && random==original_random && !formation.applied(),"Formation preparation mutated its roster or shared RNG");
        check(formation.outcome()==expected.outcome() && formation.row_widths()==expected.row_widths() &&
              formation.random_draws()==expected.random_draws(),"Formation bridge changed the actual formation algorithm");
        if(count==5) {roster.at(9).action=0x55aa;before.records[9].action=0x55aa;}
        formation.apply();bool moved=false;
        for(unsigned i=0;i<24;++i) {
            const auto& e=expected.records()[i];const unsigned slot=i+8;
            if(!e.identity) {
                const auto retained=formation.outcome()==BattleFormationOutcome::Complete && slot==31?Battler{}:before.records[slot];
                check(roster.at(slot)==retained && roster.identity(slot)==0,"Formation cleared prefix scratch too early or retained completed scratch");continue;
            }
            const auto it=std::find(before.identities.begin(),before.identities.end(),e.identity);
            check(it!=before.identities.end(),"Formation fabricated identity");const auto from=unsigned(it-before.identities.begin());moved|=from!=slot;
            auto payload=before.records[from];payload.label=e.label;payload.row=e.row;payload.resource=e.resource;payload.x=e.x;payload.y=e.y;
            check(roster.at(slot)==payload && roster.identity(slot)==e.identity,"Formation normalized raw bytes or separated payload from moving identity");
        }
        for(unsigned i=0;i<8;++i)check(roster.at(i)==before.records[i] && roster.identity(i)==before.identities[i],"Formation permuted a player-side slot");
        check(formation.applied() && (count!=5 || moved),"Fixture did not exercise a real complete-record formation swap");
        check((count==17)==(formation.outcome()==BattleFormationOutcome::RowsFull),"Fixture failed to reach the real row-capacity prefix");
        const auto after=snapshot(roster);const auto committed_random=random;
        rejects([&]{formation.apply();},"Formation application repeated");check(snapshot(roster)==after && random==committed_random,"Repeated formation mutated owner or RNG");
    }
    for(unsigned change=0;change<3;++change) {
        Roster roster(input.import());roster.initialize_enemy(8,0);story::RandomState random{37,83};
        Formation formation(roster,0,1,content,artwork.resources(),random);
        if(change==0)++roster.at(8).label;
        else if(change==1)++random.primary_word;
        else roster.initialize_enemy(8,0); // Identical source fields, fresh record identity.
        const auto before=snapshot(roster);const auto changed=random;rejects([&]{formation.apply();},"Stale formation owner/RNG accepted");
        check(snapshot(roster)==before && random==changed,"Stale formation partially committed");
    }
    for(std::uint8_t side:{std::uint8_t(2),std::uint8_t(255)}) {
        Roster roster(input.import());roster.initialize_enemy(8,0);roster.initialize_enemy(9,1);
        roster.at(8).consciousness=255;roster.at(9).consciousness=2;roster.at(9).side=side;
        const auto before=snapshot(roster);story::RandomState random{19,73};
        Formation formation(roster,0,2,content,artwork.resources(),random);formation.apply();
        check(roster.at(8).consciousness==255 && roster.at(9)==before.records[9] &&
              roster.identity(8)==before.identities[8] && roster.identity(9)==before.identities[9],
              "Formation patched normalized eligibility back into authoritative source bytes");
    }
}
} // namespace
int main() {
    try {
        rejects([]{Roster absent(nullptr);},"Null enemy resources accepted");
        Input invalid(eb::GameVersion::US);
        rejects([&]{EnemyResources::import(invalid.bytes,static_cast<eb::GameVersion>(255));},"Unknown enemy catalog region accepted");
        for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
            context=version==eb::GameVersion::US?"US":"JP";
            imports_and_enemy_producers(version);labels_and_replacement(version);player_producers(version);
            saved_party_chain(version);mirrors(version);formations(version);
        }
        std::cout<<"native battle roster checks="<<checks<<"\n";
    } catch(const std::exception& error) {std::cerr<<error.what()<<"\n";return 1;}
}
