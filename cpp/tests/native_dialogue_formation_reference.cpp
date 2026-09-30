// Independent original DISPLAY_TEXT / JP1C11 formation and name reference.
// Real UPDATE_PARTY, movement policy, palette, name, glyph and tick routines
// generate expected state. Named world/audio/input seams remain explicit.
#include "native_interaction_reference_fixture.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include "eb/native/story/party_formation.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/world_palettes.hpp"

namespace {
using namespace interaction_reference;
namespace story = eb::native::story;
struct FormationCounts {
    std::uint64_t complete{}, bicycle{}, unsupported{}, source_only{}, frames{}, sounds{}, snapshots{},
        original_updates{}, original_movement{}, original_palette{}, original_names{}, original_counts{},
        world_actor_seams{}, world_screen_seams{}, callbacks{}, palette_words{}, actor_words{}, list_bytes{},
        glyphs{}, input_calls{};
} formation_counts;
struct TestCase {
    unsigned mask{}, count=6, mushroom{}, timer{}, disabled{}, flavor=1, font{}, callback{};
    bool instant=true, bicycle{}, remap{}, empty_name{}, twice{};
    std::string label;
};
eb::GameAssets scripts(const eb::GameAssets &input) {
    auto result=input;
    const std::array<std::uint8_t,5> bytes{0x1c,0x11,0x1c,0x11,2};
    std::copy(bytes.begin(),bytes.end(),result.image.begin()+0x2e1000);
    return result;
}
template<class Function> void saved_cpu(Source &source, Function body) {
    auto &c=source.cpu;
    const auto pc=c.program_counter;
    const auto a=c.accumulator,x=c.x_index,y=c.y_index,s=c.stack_pointer,d=c.direct_page;
    const auto p=c.status_register,b=c.data_bank;
    body();
    require(c.stack_pointer==s,"Frame delivery changed original caller stack");
    c.program_counter=pc;c.accumulator=a;c.x_index=x;c.y_index=y;c.stack_pointer=s;
    c.direct_page=d;c.status_register=p;c.data_bank=b;
}
void deliver(Source &source, std::array<std::uint16_t,2> raw) {
    saved_cpu(source,[&] {
        auto &c=source.cpu;c.program_counter=0xc0823c;c.direct_page=0;c.data_bank=0;
        c.status_register=eb::MainCpu65816::InterruptDisable|eb::MainCpu65816::Index8Bit;
        for(unsigned n=0;n<10000&&c.program_counter!=0xc08278;++n){c.step_instruction();++counts.instructions;}
        require(c.program_counter==0xc08278&&source.bus->work_ram[0]==source.bus->work_ram[1],
                "Original frame DMA queue failed to drain");
    });
    source.put(0x99,0);source.byte(2,source.bus->work_ram[2]+1);
    saved_cpu(source,[&] {
        auto &c=source.cpu;const auto stack=c.stack_pointer;c.direct_page=0;c.data_bank=0;
        c.status_register=eb::MainCpu65816::InterruptDisable;c.program_counter=0xc0ff60;c.execute_instruction<0x20>(0x8496,3);
        unsigned seams=0;
        for(unsigned n=0;n<1000&&(c.program_counter!=0xc0ff63||c.stack_pointer!=stack);++n) {
            if(c.program_counter==0xc0841b){require(seams++==0,"Unexpected raw input order");source.put(0x77,raw[0]);source.put(0x79,raw[1]);c.execute_instruction<0x60>(0,1);}
            else if(c.program_counter==0xc08456){require(seams++==1,"Unexpected demo input order");c.execute_instruction<0x60>(0,1);}
            else {c.step_instruction();++counts.instructions;}
        }
        require(c.program_counter==0xc0ff63&&c.stack_pointer==stack&&seams==2,"Original input helper did not return");
        ++formation_counts.input_calls;
    });
}
struct Fixture {
    Resources &resources;TestCase test;Pair pair;
    native::WorldPartyData data;native::WorldPartyState state;native::WorldParty updater;
    party::MovementPolicyState movement;party::MeterWindows meters;
    story::RandomState random{0x1234,0xfedc};story::TickState clock;story::InputState input;
    native::WorldPalettes palette_resources;native::AreaPalettes palettes;
    std::unique_ptr<story::PartyFormation> formation;
    std::unique_ptr<story::Scene> scene;
    std::shared_ptr<const dialogue::Program> program;
    std::vector<unsigned> glyphs,first_members;
    unsigned callbacks{},count_calls{},update_calls{},movement_calls{},palette_calls{};
    bool dismount_boundary{};
    std::shared_ptr<const dialogue::TextFrame> held;std::vector<std::uint8_t> held_pixels;
    static InteractionCase setup(const eb::GameAssets &assets,const TestCase &c) {
        InteractionCase value;value.name=c.label;value.preopen=true;value.party_count=c.count;
        value.combination=assets.image.at(0x17a800)>>3;value.intangibility=0;return value;
    }
    Fixture(Resources &r,TestCase c):resources(r),test(std::move(c)),pair(r,setup(r.assets,test)),
        data(r.assets.image,r.assets.version),updater(pair.party,pair.world,data,state),
        meters(pair.windows,pair.party,party::MeterWindowResources::import(r.assets.image,r.assets.version)),
        palette_resources(r.assets.image,native::world_palette_layout(r.assets.version)),
        palettes(palette_resources.resolve(palette_resources.area_at(0,0),std::vector<std::uint8_t>(8192))) {
        require(r.assets.version==eb::GameVersion::JP,"JP fixture requires Japanese assets");
        auto &s=pair.original.source;
        pair.party.party_order={1,2,3,4,5,17};
        if(test.count<6)for(unsigned i=test.count;i<6;++i)pair.party.party_order[i]=0;
        pair.party.party_count=std::uint8_t(test.count);pair.party.controlled_count=0xa5;
        pair.party.display_order={4,2,1,3,5,17};
        if(test.count<4)for(unsigned i=0;i<test.count;++i)pair.party.display_order[i]=std::uint8_t(test.count-i);
        pair.party.controlled_order=test.remap?std::array<std::uint8_t,6>{2,0,3,1,4,5}:std::array<std::uint8_t,6>{3,1,0,2,4,5};
        if(test.count<4)for(unsigned i=0;i<test.count;++i)pair.party.controlled_order[i]=std::uint8_t(test.count-i-1);
        state.roles={27,24,29,25,28,26};
        state.trail_cursors={0x100,0x321,0xffff,0x400,0xabc,0x8123};
        state.first_guest={17,0x1357};state.second_guest={5,0x2468};
        const std::array<unsigned,6> mapped{3,0,2,1,4,5};
        for(unsigned i=0;i<6;++i) {
            auto &character=pair.party.character(i+1);
            character.afflictions[0]=std::uint8_t((test.mask>>i)&1 ? (i&1?2:1) : (i&1?255:0));
            character.afflictions[1]=std::uint8_t(test.mushroom);
            character.maximum_hp=200;character.maximum_pp=100;
            character.current_hp=character.target_hp=100+i;character.current_pp=character.target_pp=50+i;
            auto name=pair.party.name_field(i+1);
            for(unsigned n=0;n<name.size();++n)name[n]=std::uint8_t(0x41+i*4+n);
            if(test.empty_name)name[0]=0;
            else if(!test.remap)name[2]=0;
            const auto at=s.p.characters+i*s.p.stride;
            std::copy(name.begin(),name.end(),s.bus->work_ram.begin()+at);
            s.byte(at+13,character.afflictions[0]);s.byte(at+14,character.afflictions[1]);
            s.put(at+60,state.trail_cursors[i]);
            native::WorldActorSpec spec;spec.sprite=1;spec.script=8;
            spec.action.position={0x800000,0x800000,0};spec.action.alive=true;
            spec.action.variables[1]=std::uint16_t(test.remap?mapped[i]:pair.party.display_order[i]-1);
            if(i>=4)spec.action.variables[1]=std::uint16_t(i);
            spec.action.variables[5]=0xbeef;
            const unsigned role=state.roles[i];
            const auto id=pair.world.create_authored(spec,{role,role+1});
            require(id.has_value(),"Prepared formation role allocation failed");
            pair.world.actor(*id).scripts_and_physics_enabled=false;
            pair.world.actor(*id).tick_callback_enabled=false;
            s.put(0xe90+role*2,spec.action.variables[1]);s.put(0xf80+role*2,spec.action.variables[5]);
            s.put(game(162)+i*2,role);
        }
        for(auto id:pair.world.actors()) {
            pair.world.actor(id).scripts_and_physics_enabled=false;
            pair.world.actor(id).tick_callback_enabled=false;
        }
        std::copy(pair.party.party_order.begin(),pair.party.party_order.end(),s.bus->work_ram.begin()+game(122));
        std::copy(pair.party.display_order.begin(),pair.party.display_order.end(),s.bus->work_ram.begin()+game(150));
        std::copy(pair.party.controlled_order.begin(),pair.party.controlled_order.end(),s.bus->work_ram.begin()+game(156));
        s.byte(game(174),pair.party.party_count);s.byte(game(175),pair.party.controlled_count);
        s.byte(game(69),state.first_guest.member);s.byte(game(70),state.second_guest.member);
        s.put(game(71),state.first_guest.hp);s.put(game(73),state.second_guest.hp);
        movement={0x9876,std::uint16_t(test.timer),0x4567};
        s.put(0x6126,movement.mushroomized);s.put(0x6122,movement.timer);s.put(0x6124,movement.modifier);
        pair.talk.state().walking_style=test.bicycle?3:0;s.put(game(142),pair.talk.state().walking_style);
        clock.disabled_transitions=std::uint16_t(test.disabled);clock.flavor=std::uint8_t(test.flavor);
        clock.hp_speed=0x8000;clock.last_controlled_status=0x4321;
        s.put(0xb68a,test.disabled);s.byte(game(0x1d8),test.flavor);
        s.put(0x991f,0x8000);s.put(0x9921,0);s.put(0xb676,clock.last_controlled_status);
        s.put(0x24,random.primary_word);s.put(0x26,random.secondary_word);s.put(2,0);
        pair.output.policy().instant=test.instant;s.byte(s.p.instant,test.instant);
        pair.windows.substitutions().configure(dialogue::SubstitutionResources::import(r.assets.image,r.assets.version),party::dialogue_values(pair.party));
        const auto slot=*pair.windows.slot_for(dialogue::WindowId{1});
        auto style=pair.windows.slot_output(slot).style;style.font=std::uint16_t(test.font);
        pair.output.set_style(dialogue::WindowId{1},style);s.put(s.record(slot)+21,test.font);
        for(unsigned i=0;i<8;++i) {
            auto &registers=pair.state.registers_at(i).active;
            registers={0xdead0000u+i,0xcafe0000u+i,std::uint16_t(0x7800+i)};
            const auto at=s.record(i);s.put32(at+23,registers.working);s.put32(at+27,registers.argument);s.put(at+31,registers.secondary);
        }
        formation=std::make_unique<story::PartyFormation>(updater,pair.party,pair.world,data,state,movement,pair.talk,clock);
        scene=std::make_unique<story::Scene>(pair.windows,pair.party,random,meters,clock,input,pair.world,pair.area,palettes);
        scene->bind_interactions(pair.talk);scene->bind_party_formation(*formation);
        program=std::make_shared<dialogue::Program>(r.assets.version,
            std::vector<dialogue::ContentBlock>{{1,0x1000,{0x1c,0x11,0x1c,0x11,2}}});
        held=pair.windows.frame();held_pixels=held->pixels;
        s.real_ticks=true;
        s.observe=[&](unsigned pc) {
            if(pc==0xc036c7){++update_calls;++formation_counts.original_updates;}
            if(pc==0xc02e13){++movement_calls;++formation_counts.original_movement;}
            if(pc==0xc45c1a){++palette_calls;++formation_counts.original_palette;}
            if(pc==0xc1940d){first_members.push_back(s.cpu.accumulator);++formation_counts.original_names;}
            if(pc==0xc225ee){++count_calls;++formation_counts.original_counts;}
            if(pc==0xc111ec){glyphs.push_back(s.cpu.accumulator);++formation_counts.glyphs;}
        };
        s.external=[&](unsigned pc) {
            if(pc==0xc09445){++formation_counts.world_actor_seams;s.cpu.execute_instruction<0x6b>(0,1);return true;}
            if(pc==0xc08b17){++formation_counts.world_screen_seams;s.cpu.execute_instruction<0x6b>(0,1);return true;}
            if(pc==0xc03f64){dismount_boundary=true;throw std::runtime_error("source bicycle frontier");}
            return false;
        };
    }
    unsigned game(unsigned offset) const {return pair.original.source.p.game+offset-3;}
    void compare() {
        auto &s=pair.original.source;
        pair.compare_windows();
        require(pair.party.controlled_count==s.bus->work_ram[game(175)],pair.context+" controlled count differs");
        require(state.first_guest.member==s.bus->work_ram[game(69)]&&state.second_guest.member==s.bus->work_ram[game(70)]&&
                state.first_guest.hp==s.get(game(71))&&state.second_guest.hp==s.get(game(73)),pair.context+" guest HP/identity differs");
        for(unsigned i=0;i<6;++i) {
            require(pair.party.party_order[i]==s.bus->work_ram[game(122)+i]&&
                    pair.party.display_order[i]==s.bus->work_ram[game(150)+i]&&
                    pair.party.controlled_order[i]==s.bus->work_ram[game(156)+i],pair.context+" party list differs");
            require(state.roles[i]==s.get(game(162)+i*2)&&state.trail_cursors[i]==s.get(s.p.characters+i*s.p.stride+60),
                    pair.context+" role/trail mapping differs");
            formation_counts.list_bytes+=3;
        }
        const auto leader=updater.leader();
        require(leader&&pair.talk.state().leader==*leader&&s.get(game(148))==*pair.world.actor(*leader).authored_role(),
                pair.context+" live formation leader differs");
        for(auto id:pair.world.actors())if(auto role=pair.world.actor(id).authored_role()) {
            require(pair.world.actor(id).action().variables[1]==s.get(0xe90+*role*2)&&
                    pair.world.actor(id).action().variables[5]==s.get(0xf80+*role*2),pair.context+" actor mapping variables differ");
            formation_counts.actor_words+=2;
        }
        require(movement.mushroomized==s.get(0x6126)&&movement.timer==s.get(0x6122)&&movement.modifier==s.get(0x6124),
                pair.context+" mushroom movement policy differs");
        if(!dismount_boundary)for(unsigned i=0;i<32;++i) {
            require(pair.windows.palette()[i]==s.get(0x200+i*2),pair.context+" unconditional formation palette differs");
            ++formation_counts.palette_words;
        }
        require(random.primary_word==s.get(0x24)&&random.secondary_word==s.get(0x26),pair.context+" tick RNG differs");
        require(clock.frame_counter==s.bus->work_ram[2],pair.context+" frame phase differs");
        require(clock.last_controlled_status==s.get(0xb676),pair.context+" formation changed the tick palette cache");
        require(held->pixels==held_pixels,pair.context+" immutable held window frame changed");
        for(unsigned slot=0;slot<8;++slot) {
            const auto at=s.record(slot);const auto &r=pair.state.registers_at(slot).active;
            require(r.working==s.get32(at+23)&&r.argument==s.get32(at+27)&&r.secondary==s.get(at+31),
                    pair.context+" JP1C11 published an internal return into registers");
        }
        ++formation_counts.snapshots;
    }
    void callback() {
        if(callbacks||!test.callback)return;
        auto &s=pair.original.source;
        if(test.callback==2 && (!count_calls||glyphs.empty()||glyphs.back()!=0x66))return;
        require(!first_members.empty(),"Callback happened before the source chose its name");
        for(unsigned i=1;i<=4;++i) {
            const unsigned status=test.callback==1&&i==3?0:1;
            pair.party.character(i).afflictions[0]=std::uint8_t(status);
            s.byte(s.p.characters+(i-1)*s.p.stride+13,status);
        }
        if(test.callback==1) {
            pair.party.name_field(1)[1]=0x58;s.byte(s.p.characters+1,0x58);
        }
        ++callbacks;++formation_counts.callbacks;
    }
    void run() {
        auto &s=pair.original.source;
        // Start at the second copy for one command; both use source-original
        // instruction/data paths and independent, matching script bytes.
        const unsigned offset=test.twice?0x1000:0x1002;
        s.put32(s.expected_dp+14,0xee0000|offset);s.begin(s.p.display,true);
        dialogue::Conversation text(program,pair.prompts);text.start(dialogue::Location{1,std::uint16_t(offset)});
        auto operation=scene->begin(text);
        for(unsigned n=0;n<500000;++n) {
            const auto progress=operation->advance(n&1?1:4096);
            if(progress==dialogue::Progress::BudgetExhausted)continue;
            std::optional<Effect> expected;
            try {expected=s.advance();}
            catch(const std::exception &) {if(!dismount_boundary)throw;}
            if(dismount_boundary) {
                require(test.bicycle&&operation->service()==story::SceneService::BicycleDismount,
                        pair.context+" native bicycle did not stop at the real source lifecycle");
                compare();
                require(!count_calls&&first_members.empty()&&!palette_calls,"Bicycle frontier ran later name/palette work");
                for(unsigned budget:{0u,1u,4096u})require(operation->advance(budget)==dialogue::Progress::Suspended,
                    "Unimplemented bicycle lifecycle advanced without its owner");
                ++formation_counts.bicycle;return;
            }
            if(progress==dialogue::Progress::Finished) {
                require(!expected&&!s.busy,pair.context+" native formation returned before original DISPLAY_TEXT");
                compare();
                require(text.snapshot().returned_cursor==dialogue::Location{1,0x1005}&&s.get32(s.expected_dp+6)==0xee1005,
                        pair.context+" JP1C11 stream extent differs");
                const unsigned commands=test.twice?2:1;
                require(update_calls==commands&&movement_calls==commands&&first_members.size()==commands&&count_calls==commands,
                        pair.context+" original formation/name/count pipeline was not complete");
                require(!test.callback||callbacks==1,pair.context+" required callback never ran");
                pair.image(!test.empty_name);++formation_counts.complete;return;
            }
            require(expected&&operation->service(),pair.context+" native/source service count differs");
            compare();
            if(*operation->service()==story::SceneService::Frame) {
                require(*expected==Effect::Frame,pair.context+" native frame order differs");
                const std::array<std::uint16_t,2> raw{0,0};
                deliver(s,raw);operation->complete_frame(raw);s.respond();
                callback();++formation_counts.frames;
            } else if(*operation->service()==story::SceneService::Dialogue) {
                require(*expected==Effect::Sound,pair.context+" unknown native dialogue service");
                const auto &event=operation->dialogue_event();
                require(event&&std::holds_alternative<dialogue::TextEffect>(*event)&&
                        std::get<dialogue::TextEffect>(*event).kind==dialogue::TextEffectKind::TextSound,
                        pair.context+" native dialogue boundary is not original text audio");
                s.respond();operation->respond_dialogue({0,input.pressed[0],input.held[0]});++formation_counts.sounds;
            } else throw std::runtime_error(pair.context+" unimplemented scene service in non-bicycle case");
        }
        throw std::runtime_error(pair.context+" formation exceeded bounded execution");
    }
};
void japanese(const eb::GameAssets &input) {
    const auto assets=scripts(input);Resources resources(assets);std::vector<TestCase> tests;
    for(unsigned mask=0;mask<15;++mask)for(unsigned font:{0u,1u}) {
        TestCase t;t.mask=mask;t.font=font;t.remap=(mask%3)==0;t.mushroom=mask%3;t.timer=mask&1?0x4321:0;
        t.flavor=mask%5+1;t.disabled=mask&1?0:0x0100;t.label="statuses="+std::to_string(mask)+" font="+std::to_string(font);tests.push_back(t);
    }
    for(unsigned count:{1u,2u,3u,4u,5u}) {
        TestCase t;t.count=count;t.label="formation size="+std::to_string(count);tests.push_back(t);
    }
    for(unsigned callback:{0u,1u,2u})for(unsigned font:{0u,1u}) {
        TestCase t;t.instant=false;t.font=font;t.callback=callback;t.label="live callback="+std::to_string(callback)+" font="+std::to_string(font);tests.push_back(t);
    }
    {TestCase t;t.empty_name=true;t.label="empty chosen name retains suffix";tests.push_back(t);}
    {TestCase t;t.twice=true;t.label="two consecutive formation commands";tests.push_back(t);}
    for(unsigned timer:{0u,0xffffu}) {
        TestCase t;t.bicycle=true;t.mushroom=1;t.timer=timer;t.label="real bicycle pending timer="+std::to_string(timer);tests.push_back(t);
    }
    for(const auto &t:tests)try {Fixture fixture(resources,t);fixture.run();}
    catch(const std::exception &error){throw std::runtime_error(t.label+": "+error.what());}
    std::cout<<"JP cases="<<tests.size()<<" (complete commands and separate bicycle frontiers)\n";
}
void american(const eb::GameAssets &input) {
    for(unsigned operand:{0u,1u,0x41u,0x80u,0xffu}) {
        auto assets=input;
        const std::vector<std::uint8_t> bytes{0x1c,0x11,std::uint8_t(operand),2};
        std::copy(bytes.begin(),bytes.end(),assets.image.begin()+0x2e1000);
        Source source(assets);source.call(source.p.create,false,1);
        source.put32(source.record(source.slot(1))+27,0xabcd0166);
        unsigned helper_calls=0,updates=0;
        source.observe=[&](unsigned pc) {
            if(pc==0xef01d2){++helper_calls;require(source.cpu.accumulator==(operand?operand:0x166),"US1C11 did not capture literal/argument low word");}
            if(pc==0xc034d6)++updates;
        };
        source.put32(source.expected_dp+14,0xee1000);source.call(source.p.display,true);
        require(helper_calls==1&&!updates&&source.get32(source.expected_dp+6)==0xee1004,
                "US selector11 is not its independent one-byte layout helper");
        dialogue::State state;
        auto program=std::make_shared<dialogue::Program>(assets.version,std::vector<dialogue::ContentBlock>{{1,0x1000,bytes}});
        dialogue::Runtime runtime(program,state);runtime.start(dialogue::Location{1,0x1000});
        require(runtime.advance()==dialogue::Progress::Suspended&&runtime.request()->kind==dialogue::RequestKind::UnsupportedCommand&&
                runtime.snapshot().consumed_bytes==2,"US selector11 acquired Japanese operandless semantics");
        ++formation_counts.unsupported;++formation_counts.source_only;
    }
    std::cout<<"US source-only layout diagnostics=5; native unsupported frontiers=5\n";
}
}
int main(int argc,char **argv) {
    if(argc<2){std::cout<<"SKIP: local US/JP packs required for original formation/name reference\n";return 77;}
    try {
        for(int i=1;i<argc;++i) {
            const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
            if(assets.version==eb::GameVersion::JP)japanese(assets);else american(assets);
        }
        std::cout<<"PASS formation reference: "<<formation_counts.complete<<" complete JP streams, "<<formation_counts.bicycle
                 <<" real bicycle frontiers, "<<formation_counts.source_only<<" separate US original diagnostics, "
                 <<formation_counts.unsupported<<" unchanged US unsupported frontiers.\n";
        std::cout<<"Original: "<<counts.instructions<<" instructions including setup/glyph/tick/input, "<<counts.caller_stack_checks
                 <<" caller-stack checks, "<<formation_counts.original_updates<<" UPDATE_PARTY, "<<formation_counts.original_movement
                 <<" movement-policy, "<<formation_counts.original_palette<<" palette, "<<formation_counts.original_names
                 <<" name and "<<formation_counts.original_counts<<" late conscious-count calls.\n";
        std::cout<<"Native: "<<formation_counts.snapshots<<" state snapshots, "<<formation_counts.frames<<" matched frames, "
                 <<formation_counts.sounds<<" text-audio boundaries, "<<formation_counts.callbacks<<" matched live callbacks, "
                 <<counts.pixels<<" original indexed pixels and "<<counts.ppu_pixels<<" original software-PPU pixels.\n";
        std::cout<<"Scope: complete original JP DISPLAY/formation/non-bicycle movement/palette/name/glyph/tick/input paths; native real Scene with paused prepared actors. Original actors/world-screen, raw/demo input, frame delivery and text audio are explicit seams. JP font-DMA readiness clears A031 at C439E2/C43BE8. Bicycle lifecycle and US1C11 completion remain pending; US original diagnostics do not count as native parity. No natural activation, PCM, full NMI, full-world image or GPU claim.\n";
    }catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}
}
