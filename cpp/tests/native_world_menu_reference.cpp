// Complete original menu callers after real regional world bootstrap.
// Reference-only gameplay CPU lives in Source; the native menu calls none.
#define main prior_world_battle_reference_main
#include "native_world_battle_return_reference.cpp"
#undef main
#include "eb/native/world/menu/commands.hpp"
#include "eb/native/world/menu/item_action.hpp"
#include <iostream>
#include <cstdlib>

namespace world_menu_reference {
using namespace world_battle_reference;
// Match staged logical window artwork. Only a private preview of genuine
// pending glyph DMA is applied; the original machine and timing are untouched.
dialogue::TextFrame menu_canvas(const Source &s,unsigned id) {
    auto artwork=s.bus->video_ram;
    for(auto i=s.bus->work_ram[1];i!=s.bus->work_ram[0];i=std::uint8_t(i+8)){
        const unsigned at=0x400+i,destination=s.word(at+6)*2;
        if(destination<0xc000)continue;
        const unsigned mode=s.bus->work_ram[at],size=s.word(at+1),source=s.word(at+3),bank=s.bus->work_ram[at+5];
        check(mode==0 && size>0,"Menu queued glyph DMA differs");
        for(unsigned byte=0;byte<size;++byte){
            const auto address=std::uint16_t(source+byte);std::uint8_t value{};
            if(bank==0x7e || bank==0x7f)value=s.bus->work_ram[(bank-0x7e)*65536+address];
            else if(bank>=0xc0)value=s.bus->cartridge_image()[(bank-0xc0)*65536+address];
            else throw std::runtime_error("Window artwork leaves its source resource owners");
            artwork[std::uint16_t(destination+byte)]=value;
        }
    }
    const unsigned slot=s.word((s.jp?0x8c26:0x88e4)+id*2);
    check(slot<8,"Original menu canvas lacks its actual slot");
    const unsigned at=(s.jp?0x89c2:0x8650)+slot*(s.jp?76:82),columns=s.word(at+10),rows=s.word(at+12),tilemap=s.word(at+53);
    dialogue::TextFrame result{columns*8,rows*8,{},{}};result.pixels.resize(result.width*result.height);result.priority.resize(result.pixels.size());
    for(unsigned y=0;y<result.height;++y)for(unsigned x=0;x<result.width;++x){
        const unsigned d=s.word(tilemap+((y/8)*columns+x/8)*2),gx=d&0x4000?7-x%8:x%8,gy=d&0x8000?7-y%8:y%8;
        const unsigned location=(0xc000+(d&1023)*16+gy*2)&65535;
        const unsigned color=((artwork[location]>>(7-gx))&1)|(((artwork[(location+1)&65535]>>(7-gx))&1)<<1),index=y*result.width+x;
        result.pixels[index]=color?color+((d>>10)&7)*4:0;result.priority[index]=color?bool(d&0x2000):false;
    }
    return result;
}
void compare_message(const Source &s,const Rig &r) {
    const auto &p=r.b.prepared;
    auto dword=[&](unsigned at){return std::uint32_t(s.word(at))|(std::uint32_t(s.word(at+2))<<16);};
    for(unsigned side=0;side<2;++side){
        const auto which=side?dialogue::PreparedName::Target:dialogue::PreparedName::Attacker;
        const auto name=p.name(which);const unsigned at=s.jp?(side?0x9f90:0x9f82):(side?0x9cf5:0x9cd7);
        check(std::equal(name.begin(),name.end(),s.bus->work_ram.begin()+at),"World menu prepared name differs side="+std::to_string(side));
        check(p.metadata(which).article==s.bus->work_ram[(s.jp?0x61ef:0x5e77)+side],"World menu prepared article differs");
        if(!s.jp)check(p.metadata(which).enemy_id==s.word(0x9658+side*2),"World menu prepared enemy ID differs");
    }
    check(p.item()==s.bus->work_ram[s.jp?0x9f9c:0x9d11],"World menu CITEM differs");
    check(p.number()==dword(s.jp?0x9f9d:0x9d12),"World menu CNUM differs");
    for(unsigned slot=0;slot<8;++slot){
        const unsigned at=(s.jp?0x89c2:0x8650)+slot*(s.jp?76:82);
        const auto &registers=r.w.text.registers_at(slot);
        check(registers.active.working==dword(at+23) && registers.active.argument==dword(at+27) &&
            registers.active.secondary==s.word(at+31) && registers.saved.working==dword(at+33) &&
            registers.saved.argument==dword(at+37) && registers.saved.secondary==s.word(at+41),
            "World menu active/saved text registers differ slot="+std::to_string(slot));
    }
}
struct Script {
    std::vector<unsigned> choices,characters;
    unsigned next{},next_character{},wanted{},wanted_character{};
    bool menu{},character{};
    void observe(Source &s) {
        const auto pc=s.cpu.program_counter;
        if(pc==(s.jp?0xc12109u:0xc1196au)) {
            if(next>=choices.size())throw std::runtime_error("Unexpected original menu selection");
            wanted=choices[next++];menu=true;s.fixed_buttons=0;
            if(std::getenv("EB_WORLD_MENU_TRACE"))std::cerr<<"source selection="<<wanted<<" poll="<<s.raw_inputs.size()<<" focus="<<s.word(s.jp?0x8c96:0x8958)<<'\n';
        }
        if(pc==(s.jp?0xc1267au:0xc11f59u))menu=false;
        if(pc==(s.jp?0xc12ee7u:0xc127efu)) {
            if(next_character>=characters.size())throw std::runtime_error("Unexpected original character selection");
            wanted_character=characters[next_character++];character=true;s.fixed_buttons=0;
        }
        if(pc==(s.jp?0xc132dau:0xc12bd4u))character=false;
        auto edge=[&](unsigned key){s.fixed_buttons=!s.raw_inputs.empty() && s.raw_inputs.back()[0]==key?0:key;};
        if(menu && pc==(s.jp?0xc1232du:0xc11bbbu)) {
            if(!wanted){edge(0x8000);return;}
            const unsigned focus=s.word(s.jp?0x8c96:0x8958);
            const unsigned slot=s.word((s.jp?0x8c26:0x88e4)+focus*2);
            const unsigned bank=(s.jp?0x89c2:0x8650)+slot*(s.jp?76:82);
            unsigned option=s.word(bank+43),target=0xffff;
            for(unsigned ordinal=1;option!=0xffff && ordinal<=70;++ordinal) {
                const unsigned address=(s.jp?0x8d12:0x89d4)+option*(s.jp?44:45);
                if((s.word(address)==1?ordinal:s.word(address+12))==wanted){target=address;break;}
                option=s.word(address+2);
            }
            if(target==0xffff)throw std::runtime_error("Original menu lacks requested option");
            const unsigned current=s.word(s.cpu.direct_page+(s.jp?2:4));
            if(s.word(current+8)<s.word(target+8)){s.fixed_buttons=0x100;return;}
            if(s.word(current+8)>s.word(target+8)){s.fixed_buttons=0x200;return;}
            if(s.word(current+10)<s.word(target+10)){s.fixed_buttons=0x400;return;}
            if(s.word(current+10)>s.word(target+10)){s.fixed_buttons=0x800;return;}
            edge(0x80);return;
        }
        if(character && pc==(s.jp?0xc13116u:0xc12a20u)) {
            if(!wanted_character){edge(0x8000);return;}
            const unsigned index=s.word(s.cpu.direct_page+4);
            const unsigned who=s.bus->work_ram[(s.jp?0x9aa9+119:0x97f5+122)+index];
            if(who!=wanted_character){edge(0x100);return;}edge(0x80);return;
        }
        if(!menu && !character)s.fixed_buttons=(s.bus->completed_frames&2)?0x80:0;
    }
};
void run(const eb::GameAssets &assets,unsigned mode) {
    check(mode!=20||assets.version==eb::GameVersion::JP,"Actor-variable character selection is a JP source case");
    Rig r(assets);Source s(assets);s.initialize();
    auto snap=saved(r);
    if(mode>=3)snap.state.characters[0].values.items={0x5a,0x58,1};
    if(mode==9){snap.state.characters[0].values.current_hp=snap.state.characters[0].values.target_hp=3;}
    if(mode==13)snap.state.characters[0].values.items={0x11,0x12};
    if(mode>=16){snap.state.game.party_psi=1;snap.state.event_flags[(754-1)/8]&=std::uint8_t(~(1u<<((754-1)%8)));}
    if(mode>=16)for(unsigned id=1;id<=2;++id){const unsigned flag=r.content.world_menus->teleport_destination(id).event_flag;snap.state.event_flags[(flag-1)/8]|=1u<<((flag-1)%8);}
    if(mode==17)snap.state.event_flags[(754-1)/8]|=1u<<((754-1)%8);
    if(mode==7 || mode==8 || mode==19) {
        auto &g=snap.state.game;g.party_count=g.controlled_count=2;
        g.party_order[1]=g.display_order[1]=2;g.controlled_order[1]=1;
        snap.state.characters[1]=snap.state.characters[0];snap.state.characters[1].values.items={0x58,0x5a};
        if(mode==19)snap.state.characters[1].values.current_hp=snap.state.characters[1].values.target_hp=3;
    }
    auto archive=saves::SaveArchive::empty(assets.version);archive.save(0,snap.state,0);
    auto startup=r.w.startup->begin(snap);
    while(startup->stage()!=WorldStartupStage::ResetWorld) {
        auto progress=startup->advance(1);
        if(progress==dialogue::Progress::Suspended)r.service(*startup->runtime_operation());
    }
    seed(s,r,archive);near_call(s,s.jp?0xc0b652:0xc0b67f);r.drive(*startup);startup.reset();
    s.call(s.jp?0xc04230:0xc03fa9,0x456,0x678,2);
    auto placement=r.w.relocation->begin({0x456,0x678},2);while(!placement->complete())placement->advance(1);placement.reset();
    if(mode==20) {
        // Real JP native Status entry retains087e in BUFFER[-2] after map
        // preparation. Whole CHAR_SELECT captures0f45..0f48 across var4.
        s.put(0x18c24,0x087e);r.w.scratch.bytes[0x8c24]=0x7e;r.w.scratch.bytes[0x8c25]=0x08;
        for(unsigned variable=0;variable<8;++variable)for(unsigned role=0;role<30;++role) {
            const auto value=std::uint16_t(role*613+variable*1093+7);
            s.put(0x0e54+variable*60+role*2,value);r.w.actors.set_authored_variable(role,variable,value);
        }
    }
    r.w.clock.action_scripts_disabled=1;s.put(s.jp?0xa56:0xa60,1);
    // Each script is actual joypad input at original polls, never a substituted
    // menu result. The delayed case exercises the real automatic money owner.
    s.fixed_buttons=0;
    const unsigned first_poll=s.polls;
    s.raw_inputs.clear();s.sound_requests.clear();const auto first_nmi=s.nmis;
    Script script;
    using Canvases=std::map<unsigned,dialogue::TextFrame>;
    std::vector<Canvases> canvases;const bool inspect_canvas=true;
    std::vector<std::uint16_t> selected_phases,sector_attributes;
    std::uint64_t canvas_pixels{};
    std::string last_boundary="command prefix";unsigned waits{};
    if(mode==3)script.choices={2,0,0};
    if(mode==4)script.choices={2,1,4,0,0};
    if(mode==5)script.choices={2,1,3,0};
    if(mode==6){script.choices={2,1,2,0};script.characters={1};}
    if(mode==7){script.choices={2,0,0};script.characters={2,0};}
    if(mode==8){script.choices={2,1,2,0};script.characters={1,2};}
    if(mode==9)script.choices={2,1,1};
    if(mode==10)script.choices={4,0,0};
    if(mode==11){script.choices={6,0};script.characters={0};}
    if(mode==12)script.choices={3,0,0};
    if(mode==13)script.choices={4,1,2,0,0};
    if(mode==14||mode==20){script.choices={6,2,0,0,0};script.characters={1,0};}
    if(mode==15)script.choices={3,23};
    if(mode==16)script.choices={3,51,0,0,0};
    if(mode==17)script.choices={3,51,0,0};
    if(mode==18)script.choices={3,51,1};
    if(mode==19){script.choices={3,23,2};script.characters={2};}
    s.observer=[&](Source &source) {
        if(inspect_canvas && source.cpu.program_counter==0xc08496){Canvases snapshot;for(unsigned id=0;id<(source.jp?52u:53u);++id)if(source.word((source.jp?0x8c26:0x88e4)+id*2)<8)snapshot.emplace(id,menu_canvas(source,id));canvases.push_back(std::move(snapshot));selected_phases.push_back(source.word(source.jp?0x8d08:0x89ca));sector_attributes.push_back(source.word(source.jp?0x4714:0x438e));}
        if(source.cpu.program_counter==(source.jp?0xc0874cu:0xc08756u)){last_boundary="WAIT_UNTIL_NEXT_FRAME";++waits;}
        if(source.cpu.program_counter==(source.jp?0xc13503u:0xc12dd5u))last_boundary="WINDOW_TICK";
        if(source.cpu.program_counter==(source.jp?0xc0abbfu:0xc0abe0u))last_boundary="PLAY_SOUND";
        if(std::getenv("EB_WORLD_MENU_TRACE") && source.cpu.program_counter==0xc08170)std::cerr<<"source nmi="<<source.nmis-first_nmi<<" waits="<<waits<<" last="<<last_boundary<<'\n';
        if(mode>=3)script.observe(source);
        else source.fixed_buttons=source.polls-first_poll >= (mode==2?75u:0u) && ((source.polls-first_poll)&1)?0x8000:0;
    };
    s.call(mode==1?(s.jp?0xc1410c:0xc13ca1):(s.jp?0xc13a85:0xc134a7));
    s.observer={};
    auto resources=world::menu::Resources::import(assets.image,assets.version);
    world::menu::Commands menu(resources,r.content.program,r.content.fonts,r.w.menus,r.w.party,r.w.inventory,
        r.w.meters,r.w.interactions,r.w.runtime->coordinator_scene(),r.w.input,r.w.sprite_fade);
    menu.bind_field_map(r.content.map);
    menu.bind_teleport(r.w.formation,r.w.session);
    r.inputs=&s.raw_inputs;r.cursor=0;r.phase="world menu";
    std::vector<unsigned> sounds;
    auto scene=[&](story::Scene::Operation &child){
        auto proxy=r.w.runtime->service_child(child);
        for(unsigned work=0;work<3000000 && !proxy->complete();++work){
            if(proxy->advance(1)!=dialogue::Progress::Suspended)continue;
            if(proxy->service()==story::SceneService::Dialogue){const auto &event=proxy->dialogue_event();if(event)if(const auto *effect=std::get_if<dialogue::TextEffect>(&*event);effect && effect->kind==dialogue::TextEffectKind::TextSound)sounds.push_back(7);}
            if(proxy->service()==story::SceneService::ScriptSound && proxy->script_sound().kind==dialogue::ScriptSoundKind::QueueEffect)sounds.push_back(proxy->script_sound().value);
            if(proxy->service()==story::SceneService::ActorEngine && proxy->actor_request() && proxy->actor_request()->binding.operation==NativeAction::PlaySound && proxy->actor_sound().kind==dialogue::ScriptSoundKind::QueueEffect)sounds.push_back(proxy->actor_sound().value);
            const auto first_poll=r.cursor;r.service(*proxy);
            if(inspect_canvas && r.cursor!=first_poll){
                check(selected_phases.at(first_poll)==r.w.meters.state().selected_phase,"Menu retained character phase differs poll="+std::to_string(first_poll));
                check(sector_attributes.at(first_poll)==r.w.session.current_sector_attributes,"Menu retained sector attributes differ poll="+std::to_string(first_poll));
                const auto &original=canvases.at(first_poll);
                check(original.size()==r.w.windows.draw_order().size(),"Menu input window count differs poll="+std::to_string(first_poll));
                for(auto id:r.w.windows.draw_order()){
                    const auto &expected=original.at(id.value);const auto actual=r.w.windows.slot_frame(*r.w.windows.slot_for(id));
                    check(expected.width==actual->width && expected.height==actual->height,"Menu input window dimensions differ");
                    for(unsigned pixel=0;pixel<expected.pixels.size();++pixel){
                        check(expected.pixels[pixel]==actual->pixels[pixel] && expected.priority[pixel]==actual->priority[pixel],
                            "Menu input artwork differs poll="+std::to_string(first_poll)+" window="+std::to_string(id.value)+" width="+std::to_string(expected.width)+" pixel="+std::to_string(pixel)+" source="+std::to_string(expected.pixels[pixel])+" native="+std::to_string(actual->pixels[pixel]));++canvas_pixels;
                    }
                }
            }
        }
        check(proxy->complete(),"Menu scene did not complete");
    };
    world::menu::ItemAction item_action({r.w.startup_owners(),r.w.following,r.b.roster,r.b.action,r.b.executor,
        *r.battle_content.execution,*r.content.substitutions,r.b.prepared,r.b.dialogue,r.b.scene});
    const auto native_first_nmi=r.w.clock.publications;
    auto operation=menu.begin(mode==1?world::menu::Entry::Meters:world::menu::Entry::Commands);
    for(unsigned work=0;work<3000000 && !operation->complete();++work) {
        auto progress=operation->advance(31);
        if(progress!=dialogue::Progress::Suspended)continue;
        if(std::getenv("EB_WORLD_MENU_TRACE"))std::cerr<<"native suspend poll="<<r.cursor<<" focus="<<(r.w.text.focus?r.w.text.focus->value:0xffff)<<" sound="<<(operation->sound()?int(*operation->sound()):-1)<<'\n';
        if(operation->sound()) {sounds.push_back(*operation->sound());r.audio.play_sound(*operation->sound());operation->respond_sound();}
        else if(auto *child=operation->scene())scene(*child);
        else if(operation->target_select()){
            const auto &request=*operation->target_select();auto target=r.b.menu.begin_target(request.action,request.user);
            for(unsigned step=0;step<3000000 && !target->complete();++step){
                if(target->advance(1)!=dialogue::Progress::Suspended)continue;
                if(auto *child=target->scene())scene(*child);
                else throw std::runtime_error("World target selector reached an absent source service");
            }
            check(target->complete(),"World target selector did not complete");operation->respond_target_select(target->result());
        }
        else if(operation->item_use() || operation->ability_use()){
            world::menu::ItemActionRequest request;
            if(operation->item_use()){const auto &use=*operation->item_use();request={use.user,use.slot,use.item,use.target,use.description,use.execute};}
            else{const auto &use=*operation->ability_use();request={use.user,0,0,use.target,use.description,true,use.action,use.ability,use.teleport};}
            auto action=item_action.begin(request);
            for(unsigned step=0;step<3000000 && !action->complete();++step){
                if(action->advance(1)!=dialogue::Progress::Suspended)continue;
                if(auto *child=action->scene())scene(*child);
                else throw std::runtime_error("Item action reached a party lifecycle service absent from this test");
            }
            check(action->complete(),"Menu item action did not finish");
            if(operation->item_use())operation->respond_item_use(1);else operation->respond_ability_use(1);
        }
        else if(auto *mutation=operation->inventory_operation()){throw std::runtime_error("Menu inventory reached a Teddy lifecycle service absent from this test kind="+std::to_string(unsigned(*mutation->service())));}
        else throw std::runtime_error("Menu unexpectedly selected an unported branch");
    }
    check(operation->complete(),"Native world menu did not complete");
    check(r.cursor==s.raw_inputs.size(),"World menu input poll count differs");
    check(waits==r.cursor,"World menu explicit WAIT count differs source="+std::to_string(waits)+" native="+std::to_string(r.cursor));
    check(s.word(0x24)==r.w.random.primary_word && s.word(0x26)==r.w.random.secondary_word,"World menu RNG differs");
    if(sounds!=s.sound_requests){std::string actual,expected;for(auto sound:sounds)actual+=std::to_string(sound)+",";for(auto sound:s.sound_requests)expected+=std::to_string(sound)+",";throw std::runtime_error("World menu sound order differs source="+expected+" native="+actual);}
    check(r.w.windows.draw_order().empty() && !r.w.meters.state().render,"World menu left visible window owners");
    compare_party(s,r);
    compare_message(s,r);
    if(mode==20)for(unsigned variable=0;variable<8;++variable)for(unsigned role=0;role<30;++role)
        check(r.w.actors.authored_variable(role,variable)==s.word(0x0e54+variable*60+role*2),
              "Whole Status character selector changed another actual actor variable");
    if(mode>=16){check(s.word(s.jp?0xa141:0x9f3f)==r.w.actors.appearance_scene().teleport_destination,"World menu teleport destination differs");check(s.word(s.jp?0xa143:0x9f41)==r.w.session.teleport_style,"World menu teleport style differs");}
    if(std::getenv("EB_WORLD_MENU_REQUIRE_PHYSICAL_NMIS"))check(r.w.clock.publications-native_first_nmi==s.nmis-first_nmi,"World menu physical NMI count differs mode="+std::to_string(mode)+" source="+std::to_string(s.nmis-first_nmi)+" native="+std::to_string(r.w.clock.publications-native_first_nmi));
    std::cout<<"PASS complete original "<<(s.jp?"JP":"US")<<" world menu mode="<<mode
        <<" waits="<<waits<<" polls="<<r.cursor<<" source_nmis="<<s.nmis-first_nmi
        <<" native_nmis="<<r.w.clock.publications-native_first_nmi<<" sounds="<<sounds.size()<<" canvas_pixels="<<canvas_pixels<<'\n';
}
void random_targets(const eb::GameAssets &assets) {
    const auto actions=battle::ActionResources::import(assets.image,assets.version);unsigned action{};
    for(unsigned id=0;id<battle::ActionResources::action_count;++id)if(actions->action(id).direction==0 && actions->action(id).target==2){action=id;break;}
    check(action!=0,"Regional action table lacks its random target input");
    unsigned cases{},frontiers{};
    for(unsigned direction=0;direction<2;++direction){
        // The shipped table has enemy RANDOM only. Exercise the shared ally
        // branch by changing this one immutable configuration byte in both
        // oracle inputs; original instructions and all other content stay real.
        auto configured=assets;configured.image[(assets.version==eb::GameVersion::JP?0x158b1e:0x157b68)+action*12]=std::uint8_t(direction);
        for(unsigned shape=0;shape<4;++shape)for(auto seed:std::array<story::RandomState,4>{{{0,0},{1,2},{0xd739,0x25b7},{0xff80,0xffff}}}){
            Rig r(configured);Source s(configured);s.initialize();
            r.w.party.display_order={4,3,2,1,5,6};std::copy(r.w.party.display_order.begin(),r.w.party.display_order.end(),s.bus->work_ram.begin()+(s.jp?0x9aa9+147:0x97f5+150));
            r.w.random=seed;s.put(0x24,seed.primary_word);s.put(0x26,seed.secondary_word);
            for(unsigned slot=0;slot<32;++slot){
                auto &b=r.b.roster.at(slot);b={};b.side=std::uint8_t(slot/16);
                b.consciousness=std::uint8_t(shape==0?0:shape==1?slot%16==0:shape==2?slot%3!=0:1);
                if(direction==1 && slot>=6 && slot<16)b.consciousness=0;
                if(shape==2){b.npc=std::uint8_t(slot%5==0);b.afflictions[0]=std::uint8_t(slot%7==0?1:slot%11==0?2:0);}
                const auto bytes=encode(b);std::copy(bytes.begin(),bytes.end(),s.bus->work_ram.begin()+(s.jp?0xa1ae:0x9fac)+slot*78);
            }
            s.cpu.accumulator=action;s.cpu.x_index=1;near_call(s,s.jp?0xc1ac70:0xc1adb4);
            auto selected=r.b.menu.begin_target(action,1);
            bool frontier=false;
            try {for(unsigned work=0;work<1000 && !selected->complete();++work)check(selected->advance(1)!=dialogue::Progress::Suspended,"Random targeting acquired an unexpected scene");}
            catch(const std::out_of_range &){frontier=true;}
            check(s.word(0x24)==r.w.random.primary_word && s.word(0x26)==r.w.random.secondary_word,"Source random target RNG differs");
            if(frontier){check(direction==1 && shape==0,"Target selector rejected an owned ally");++frontiers;continue;}
            check(selected->complete(),"Random targeting did not complete");
            check(std::uint8_t(selected->result())==std::uint8_t(s.cpu.accumulator),"Source random target byte differs direction="+std::to_string(direction)+" shape="+std::to_string(shape)+" seed="+std::to_string(seed.primary_word)+","+std::to_string(seed.secondary_word)+" source="+std::to_string(s.cpu.accumulator)+" native="+std::to_string(selected->result()));
            for(unsigned slot=0;slot<32;++slot){const auto bytes=encode(r.b.roster.at(slot));check(std::equal(bytes.begin(),bytes.end(),s.bus->work_ram.begin()+(s.jp?0xa1ae:0x9fac)+slot*78),"Random target changed a retained battler");}
            ++cases;
        }
    }
    std::cout<<"PASS original "<<(assets.version==eb::GameVersion::JP?"JP":"US")<<" DETERMINE_TARGETTING RANDOM branches cases="<<cases<<" real32 battlers/RNG; ally branch configuration input; adjacent display-owner frontiers="<<frontiers<<'\n';
}
}
int main(int argc,char **argv) {
    if(argc<2)return 77;
    try {for(int i=1;i<argc;++i){const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());if(const auto *mode=std::getenv("EB_WORLD_MENU_MODE"))world_menu_reference::run(assets,unsigned(std::stoul(mode)));else {for(unsigned mode=0;mode<20;++mode)world_menu_reference::run(assets,mode);if(assets.version==eb::GameVersion::JP)world_menu_reference::run(assets,20);world_menu_reference::random_targets(assets);}}}
    catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}return 0;
}
