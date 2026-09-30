// CPU-free shield producer -> shared battle wrapper -> actual Conversation.
// Synthetic content only. Original authored-body and instruction comparisons
// live in the separate reference fixture; the Scene witness below is native.
#include "eb/native/battle/shields.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include "eb/native/party/meter_windows.hpp"
#include "eb/native/story/scene.hpp"
#include "native_dialogue_test_assets.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <type_traits>

namespace {
using namespace eb::native;
namespace b = eb::native::battle;
namespace d = eb::native::dialogue;
namespace s = eb::native::story;
unsigned checks{};
void check(bool value, const char* message) { ++checks; if (!value) throw std::runtime_error(message); }
template<class F> void rejects(F call, const char* message) {
    bool caught{}; try { call(); } catch (const std::exception&) { caught = true; }
    check(caught, message);
}
static_assert(!std::is_copy_constructible_v<s::BattleDialogue>);
static_assert(!std::is_move_constructible_v<s::BattleDialogue>);
static_assert(!std::is_copy_constructible_v<b::Shields>);
static_assert(!std::is_move_constructible_v<b::Shields>);
struct Assets {
    dialogue_test_assets::WindowInput input;
    std::shared_ptr<const d::FontResources> fonts;
    std::shared_ptr<const d::WindowResources> windows;
    std::shared_ptr<const d::SubstitutionResources> substitutions;
    std::shared_ptr<const b::EnemyResources> enemies;
    std::shared_ptr<const b::ActionResources> actions;
    explicit Assets(eb::GameVersion version) : input(version) {
        dialogue_test_assets::add_text_fonts(input);
        dialogue_substitution_test_assets::Input catalogs(version);
        catalogs.overlay(input.image);
        input.put(input.configs,1); input.put(input.configs+2,1);
        input.put(input.configs+4,28); input.put(input.configs+6,12);
        input.put(input.configs+8,25); input.put(input.configs+10,16);
        input.put(input.configs+12,6); input.put(input.configs+14,4);
        const auto table=version==eb::GameVersion::US?0x157b68u:0x158b1eu;
        input.image[table+10*12+2]=3; input.image[table+11*12+2]=0x83;
        fonts=d::FontResources::import(input.image,version); windows=input.import();
        substitutions=d::SubstitutionResources::import(input.image,version);
        enemies=b::EnemyResources::import(input.image,version);
        actions=b::ActionResources::import(input.image,version);
    }
};
const Assets& assets(eb::GameVersion version) {
    static const Assets us(eb::GameVersion::US),jp(eb::GameVersion::JP);
    return version==eb::GameVersion::US?us:jp;
}
std::shared_ptr<const d::Program> program(eb::GameVersion version, bool short_text=false, int omit=-1) {
    std::vector<d::ContentBlock> blocks;
    std::vector<d::ReferenceBinding> bindings;
    for(unsigned i=0;i<3;++i) {
        std::vector<std::uint8_t> text=short_text?std::vector<std::uint8_t>{std::uint8_t(0x71+i),2}:
            std::vector<std::uint8_t>{std::uint8_t(0x71+i),0x1c,0x0e,0x19,0x1f,0x1b,4,0x1c,0x12,0,1,2};
        blocks.push_back({1,std::uint16_t(i*64),std::move(text)});
        if(int(i)!=omit) bindings.push_back({assets(version).actions->message(static_cast<b::ShieldMessage>(i)),
                                             d::Location{1,std::uint16_t(i*64)}});
    }
    // Observe all32 number bits without attempting unsupported oversized
    // decimal output. Preserve the number in saved working before CITEM read.
    blocks.push_back({1,192,{0x71,0x19,0x1e,0x1b,0,0x19,0x1f,0x72,2}});
    blocks.push_back({1,256,{0x71,0x72,2}});
    return std::make_shared<const d::Program>(version,std::move(blocks),std::vector<d::Location>{{1,256}},std::move(bindings));
}
struct Fixture {
    eb::GameVersion version;
    party::State party;
    s::RandomState random{0x1234,0x5678};
    s::InputState input;
    d::State state;
    d::TextOutput output;
    d::WindowHost windows;
    std::shared_ptr<d::WindowGraphics> graphics;
    d::PromptHost prompts;
    d::PreparedMessage prepared;
    b::Roster roster;
    b::ActionState action;
    b::Names names;
    std::shared_ptr<const d::Program> messages;
    std::unique_ptr<s::BattleDialogue> dialogue;
    std::unique_ptr<b::Shields> shields;
    explicit Fixture(eb::GameVersion region,bool attach=true,bool short_text=false,bool bound_graphics=false)
        :version(region),party(region),output(assets(region).fonts,state),
         windows(assets(region).windows,state,output),prompts(windows),prepared(region),
         roster(assets(region).enemies),names(roster,party,prepared,*assets(region).substitutions,action),
         messages(program(region,short_text)) {
        for(unsigned id=1;id<=4;++id) {
            auto field=party.name_field(id);std::fill(field.begin(),field.end(),0);
            field[0]=std::uint8_t(0x70+id);field[1]=std::uint8_t(0x74+id);
            party.character(id).current_hp=party.character(id).target_hp=party.character(id).maximum_hp=100;
            roster.initialize_player(id-1,party,id);
        }
        party.party_count=party.controlled_count=1;party.party_order[0]=1;
        windows.substitutions().configure(assets(region).substitutions,party::dialogue_values(party));
        if(bound_graphics) {
            std::array<d::WindowArtwork,1184> retained;
            for(unsigned cell=0;cell<retained.size();++cell)
                retained[cell]=dialogue_test_assets::pattern(cell+23);
            graphics=std::make_shared<d::WindowGraphics>(
                d::WindowInitializationResources::import(assets(region).input.image,region),output,retained);
            windows.set_graphics(graphics);
            publish_graphics();
        }
        open(0);
        output.policy().instant=false;output.policy().sound_mode=3;
        roster.initialize_enemy(8,1);roster.initialize_enemy(9,2);
        roster.at(0).action=10;roster.at(0).action_argument=1;
        action.attacker=0;action.target=8;action.enemy_count=2;
        names.fix_attacker(0);names.fix_target();
        prepared.set_number(0xfedcba98);prepared.set_item(7);
        if(attach) bind();
    }
    void publish_graphics(d::Conversation* parent=nullptr) {
        const auto mode=version==eb::GameVersion::US?d::ArtworkPublication::CommonThenGenerated:
                                                           d::ArtworkPublication::All;
        auto operation=parent?graphics->begin_publication_nested(mode,*parent):graphics->begin_publication(mode);
        while(operation->advance()!=d::Progress::Finished) {
            check(operation->effect().has_value(),"Bound graphics did not expose its artwork publication");
            operation->respond();
        }
    }
    void open(unsigned id) {
        auto operation=windows.begin({d::WindowAction::Open,d::WindowId{std::uint8_t(id)},{},0});
        while(operation->advance()!=d::OutputProgress::Complete) {
            check(operation->effect() && operation->effect()->kind==d::WindowEffectKind::ClearPartyBlink,
                  "Synthetic window setup requested an unsupported service");
            operation->respond();
        }
    }
    void bind() {
        dialogue=std::make_unique<s::BattleDialogue>(messages,prompts,prepared,party,input);
        shields=std::make_unique<b::Shields>(action,roster,names,*dialogue,assets(version).actions);
    }
};
d::Progress next(d::Conversation& conversation) {
    for(unsigned i=0;i<10000;++i) {
        const auto progress=conversation.advance(1);
        if(progress!=d::Progress::BudgetExhausted)return progress;
    }
    throw std::runtime_error("Conversation did not reach an actual effect");
}
void complete_text(Fixture& f,d::Conversation& conversation,const std::function<void(unsigned)>& callback={}) {
    unsigned ticks{};
    for(unsigned steps=0;steps<10000;++steps) {
        const auto progress=next(conversation);
        if(progress==d::Progress::Finished) {check(ticks>0,"Synthetic message had no real glyph effects");return;}
        const auto& event=*conversation.event();
        if(const auto* effect=std::get_if<d::TextEffect>(&event)) {
            check(effect->kind==d::TextEffectKind::WindowTick,"Unexpected audio in silent synthetic fixture");
            f.windows.draw_tick();f.windows.publish_scene();
            if(callback)callback(++ticks);else ++ticks;
        } else if(const auto* window=std::get_if<d::WindowEffect>(&event)) {
            check(window->kind==d::WindowEffectKind::WindowTick,"Unexpected window service");
            f.windows.draw_tick();f.windows.publish_scene();
        } else if(std::holds_alternative<d::PromptEffect>(event))f.prompts.state().pressed=0x80;
        else throw std::runtime_error("Shield text reached unsupported authored work");
        conversation.respond();
    }
    throw std::runtime_error("Synthetic message did not finish");
}
unsigned message_index(b::Shields::Operation& operation) {
    const auto snapshot=operation.conversation().snapshot();
    check(snapshot.frames.size()==1 && snapshot.frames[0].cursor.has_value(),"Shield did not start actual parser");
    return snapshot.frames[0].cursor->offset/64;
}
void wrapper(eb::GameVersion version) {
    for(const auto battle_mode:{0u,1u,0x8123u}) for(const auto automatic:{0u,1u,0xe7u})
    for(const bool held:{false,true}) {
        Fixture f(version);f.open(1);f.state.focus=d::WindowId{0};
        f.windows.draw_windows();f.windows.publish_scene();
        const auto before=f.windows.frame();
        f.party.auto_fight=std::uint8_t(automatic);f.input.state[0]=held?0x8000:0;
        f.input.pressed[0]=held?0:0x8000;f.windows.prompt_state().pressed=held?0:0x8000;
        f.windows.prompt_state().battle_mode=std::uint16_t(battle_mode);
        f.output.policy().prompt_mode=7;
        const auto number=0x89abcdefu;
        auto operation=f.dialogue->begin_number({1,192},number);
        check(operation->advance(0)==d::Progress::BudgetExhausted && f.party.auto_fight==automatic &&
                  f.prepared.number()==0xfedcba98 && f.output.policy().prompt_mode==7,
              "Zero wrapper budget mutated source values");
        check(operation->advance()==d::Progress::Suspended && operation->pending(),"Wrapper did not start text");
        check(f.party.auto_fight==(held&&automatic?0:automatic) && f.prepared.number()==number &&
                  f.output.policy().prompt_mode==(battle_mode?2:7),"Wrapper source order/input predicate differs");
        check(f.windows.frame()->pixels==before->pixels,"Auto-fight clear published without real source publication");
        f.windows.publish_scene();const auto after=f.windows.frame();unsigned changed{};
        auto expected=before->pixels,expected_priority=before->priority;
        for(unsigned i=0;i<before->pixels.size();++i) {
            const unsigned cell=(i/256/8)*32+(i%256/8);
            if(cell>=570 && cell<574 && held && automatic) {
                expected[i]=0;expected_priority[i]=0;
                changed+=after->pixels[i]!=before->pixels[i];
            }
        }
        check(after->pixels==expected && after->priority==expected_priority,
              "Auto-fight clear did not change exactly the four staged descriptor cells");
        check(!(held&&automatic)||changed>0,"Indicator fixture had no visible source cells to clear");
        const auto consumed=operation->conversation().snapshot().consumed_bytes;
        check(operation->advance()==d::Progress::Suspended && operation->conversation().snapshot().consumed_bytes==consumed,
              "Wrapper drove child text instead of retaining it");
        rejects([&]{operation->respond();},"Wrapper acknowledged unfinished child");
        complete_text(f,operation->conversation(),[&](unsigned tick){if(tick==1)f.output.policy().prompt_mode=9;});
        check(f.state.window().saved.working==number && f.state.window().active.working==7 &&
                  f.output.policy().prompt_mode==9,"Real prepared consumers or pending prompt lifetime differ");
        operation->respond();
        check(operation->complete() && !f.dialogue->busy() && f.output.policy().prompt_mode==0,
              "Completed wrapper did not clear actual prompt");
        rejects([&]{operation->respond();},"Completed wrapper acknowledged twice");
        auto reuse=f.dialogue->begin_text({1,256}); // Previous handle remains alive.
        reuse->advance();check(f.prepared.number()==number,"Text-only wrapper reset retained CNUM");
        complete_text(f,reuse->conversation());reuse->respond();
    }
}
bool cell_matches(const d::TextFrame& frame,const d::TextFrame& atlas,unsigned at,unsigned descriptor) {
    const unsigned image=descriptor&1023,palette=(descriptor>>10)&7;
    for(unsigned y=0;y<8;++y)for(unsigned x=0;x<8;++x) {
        const unsigned sx=descriptor&0x4000?7-x:x,sy=descriptor&0x8000?7-y:y;
        const auto pixel=atlas.pixels[(image/32*8+sy)*atlas.width+image%32*8+sx];
        const unsigned destination=(at/32*8+y)*frame.width+at%32*8+x;
        if(frame.pixels[destination]!=(pixel?palette*4+pixel:0) ||
           frame.priority[destination]!=(pixel?bool(descriptor&0x2000):false))return false;
    }
    return true;
}
void graphics_auto_clear(eb::GameVersion version) {
    Fixture f(version,true,false,true);f.open(1);
    // The top-right corner is cell573, one of C20293's four exact writes.
    // Imported geometry is relocated through its actual metadata owner.
    auto& rectangle=f.windows.metadata({1}).rectangle;rectangle.outer_x=24;rectangle.outer_y=17;
    f.windows.draw_windows();f.windows.publish_scene();
    const auto before=f.windows.frame();const auto atlas_before=f.graphics->frame();
    check(!cell_matches(*before,*atlas_before,573,0),"Auto-fight regression corner was already descriptor zero");
    f.party.auto_fight=1;f.input.state[0]=0x8000;
    auto operation=f.dialogue->begin_text({1,256});
    check(operation->advance()==d::Progress::Suspended,"Graphics-bound wrapper did not enter actual text");
    check(f.windows.frame()->pixels==before->pixels && f.windows.frame()->priority==before->priority,
          "Graphics-bound auto-fight clear published prematurely");
    auto staged=f.windows.scene();
    for(unsigned cell=570;cell<574;++cell)
        check(cell_matches(*staged,*atlas_before,cell,0),"Auto-fight descriptor zero lost its live atlas-zero pixels");
    check(std::any_of(atlas_before->pixels.begin(),atlas_before->pixels.begin()+8,[](auto p){return p!=0;}),
          "Descriptor-zero regression needs nonblank atlas-zero artwork");

    // Publish genuinely different atlas data during a real text callback.
    // Cleared descriptors must retain the live image identity across that
    // publication, then still choose a plain corner on the next redraw.
    auto& conversation=operation->conversation();
    check(next(conversation)==d::Progress::Suspended &&
              std::get<d::TextEffect>(*conversation.event()).kind==d::TextEffectKind::WindowTick,
          "Graphics-bound text did not yield its actual first glyph tick");
    d::PartyNameInputs names;
    for(unsigned i=0;i<4;++i)names.names[i]=f.party.name_field(i+1);
    f.graphics->prepare_nested(names,1,conversation);f.publish_graphics(&conversation);
    const auto atlas_after=f.graphics->frame();const auto updated=f.windows.scene();
    check(!cell_matches(*staged,*atlas_after,573,0),"Atlas-zero publication did not change the regression input");
    for(unsigned cell=570;cell<574;++cell)
        check(cell_matches(*updated,*atlas_after,cell,0),"Cleared auto-fight cell captured stale atlas-zero pixels");
    f.windows.draw_windows();
    check(cell_matches(*f.windows.scene(),*atlas_after,573,0x7c10),
          "Auto-fight descriptor zero redraw selected overlap instead of the ordinary right corner");
    f.windows.publish_scene();f.windows.draw_windows();
    check(cell_matches(*f.windows.frame(),*atlas_after,573,0x7c10) &&
              cell_matches(*f.windows.scene(),*atlas_after,573,0x7c10),
          "Redrawn auto-fight corner lost descriptor identity after publication or repeat draw");
    conversation.respond();complete_text(f,conversation);operation->respond();
}
void graphics_meter_clear(eb::GameVersion version) {
    Fixture f(version,true,false,true);f.open(1);
    auto image=assets(version).input.image;
    const unsigned labels=version==eb::GameVersion::US?0x3e3f8:0x3e3da;
    std::fill_n(image.begin()+labels,8,0);
    party::MeterWindows meters(f.windows,f.party,party::MeterWindowResources::import(image,version));
    auto& rectangle=f.windows.metadata({1}).rectangle;rectangle.outer_x=13;rectangle.outer_y=19;
    f.windows.draw_windows();f.windows.publish_scene();const auto before=f.windows.frame();
    const auto atlas=f.graphics->frame();
    meters.undraw(0); // Real producer of WindowHost::clear_meter_rect, 7x8.
    check(f.windows.frame()->pixels==before->pixels && f.windows.frame()->priority==before->priority,
          "Meter rectangle clear published before its source publication");
    for(unsigned row=19;row<27;++row)for(unsigned x=13;x<20;++x)
        check(cell_matches(*f.windows.scene(),*atlas,row*32+x,0),
              "Meter rectangle zero descriptor lost atlas-zero identity or attributes");
    f.windows.draw_window({1});
    check(cell_matches(*f.windows.scene(),*atlas,19*32+13,0x3c10),
          "Meter descriptor zero redraw selected overlap instead of the ordinary left corner");

    // DRAW_HP_PP_WINDOW's label descriptor0x3000 has the same image zero,
    // but palette4/priority make the descriptor nonzero: it must overlap.
    meters.draw(0);rectangle.outer_x=14;rectangle.outer_y=22;
    check(cell_matches(*f.windows.scene(),*atlas,22*32+14,0x3000),
          "Meter label did not produce the real nonzero descriptor using atlas image zero");
    f.windows.draw_window({1});
    check(cell_matches(*f.windows.scene(),*atlas,22*32+14,0x3c13) &&
              !cell_matches(*f.windows.scene(),*atlas,22*32+14,0x3c10),
          "Nonzero meter descriptor using atlas zero was incorrectly treated as an empty corner");
    meters.undraw(0);f.windows.draw_window({1});
    check(cell_matches(*f.windows.scene(),*atlas,22*32+14,0x3c10),
          "Meter clear after a styled atlas-zero cell retained its previous overlap identity");
}
void no_message(eb::GameVersion version) {
    Fixture f(version);
    f.roster.at(0).action=11;f.roster.at(0).action_argument=0xfe;
    f.action.target.reset();f.action.damage_reflected=0x1234;
    auto operation=f.shields->begin_nullify();
    check(operation->advance(0)==d::Progress::BudgetExhausted && f.action.shield_nullified==0 && f.prepared.item()==7,
          "Zero shield budget executed the producer");
    check(operation->advance()==d::Progress::Finished && !operation->nullified() &&
              f.action.shield_nullified==1 && f.prepared.item()==0xfe && f.action.damage_reflected==0x1234,
          "Non-PSI branch read target, changed reflected flag or lost CITEM");
    f.action.target=8;f.roster.at(0).action=10;
    for(unsigned status:{0u,3u,4u,0xffu}) {
        f.roster.at(8).afflictions[6]=std::uint8_t(status);f.roster.at(8).shield_hp=77;
        auto next_operation=f.shields->begin_nullify();next_operation->advance();
        check(next_operation->complete() && !next_operation->nullified() && f.roster.at(8).shield_hp==77,
              "Non-PSI shield status entered a message or decremented");
    }
    f.action.attacker.reset();f.action.target.reset();f.action.damage_reflected=0;
    auto weaken=f.shields->begin_weaken();weaken->advance();
    check(weaken->complete() && f.action.shield_nullified==0,"Zero reflected flag read unused selectors");
    rejects([&]{weaken->nullified();},"Void weaken operation invented a return value");
}
void absorb(eb::GameVersion version,unsigned hp,bool retarget) {
    Fixture f(version);f.roster.at(8).afflictions[6]=2;f.roster.at(8).shield_hp=17;
    f.roster.at(9).afflictions[6]=0xee;f.roster.at(9).shield_hp=std::uint8_t(hp);
    if(!retarget)f.roster.at(8).shield_hp=std::uint8_t(hp);
    const auto initial=f.prepared.number();
    auto operation=f.shields->begin_nullify();
    check(operation->advance()==d::Progress::Suspended && message_index(*operation)==1 &&
              f.prepared.item()==1 && f.action.shield_nullified==1,"PSI absorption did not enter correct real message");
    rejects([&]{operation->nullified();},"Pending shield produced a completed return");
    rejects([&]{operation->respond();},"Shield falsely acknowledged actual message");
    unsigned callbacks{};
    complete_text(f,operation->conversation(),[&](unsigned tick){if(tick==1){
        ++callbacks;if(retarget)f.action.target=9;f.prepared.set_item(2);
        f.prepared.copy_name(d::PreparedName::Target,std::array<std::uint8_t,2>{0x7a,0x79});
    }});
    check(callbacks==1 && f.state.window().active.argument==2,"Shield text did not read callback CITEM through PSI formatter");
    operation->respond();
    const auto progress=operation->advance();const unsigned slot=retarget?9:8;
    check(f.roster.at(slot).shield_hp==std::uint8_t(hp-1) && f.prepared.number()==initial,
          "Absorption used captured selector, saturated decrement or changed CNUM");
    if(hp==1) {
        check(progress==d::Progress::Suspended && message_index(*operation)==2 &&
                  f.roster.at(slot).afflictions[6]==0 && f.prepared.name(d::PreparedName::Target)[0]==0x7a,
              "Worn-off branch lost live target or prepared name retention");
        complete_text(f,operation->conversation());operation->respond();operation->advance();
    } else check(progress==d::Progress::Finished && f.roster.at(slot).afflictions[6]==(retarget?0xee:2),
                 "Nonzero shield lifetime cleared status or printed off message");
    check(operation->complete() && operation->nullified() && f.action.damage_reflected==0 &&
              f.action.shield_nullified==1 && !f.shields->busy(),"Absorb completion flags/return differ");
    if(retarget)check(f.roster.at(8).shield_hp==17,"Absorption decremented stale original target");
}
void reflect_then_weaken(eb::GameVersion version,unsigned hp) {
    Fixture f(version);f.roster.at(8).afflictions[6]=1;f.roster.at(8).shield_hp=5;
    f.roster.at(9).afflictions[6]=1;f.roster.at(9).shield_hp=std::uint8_t(hp);
    auto operation=f.shields->begin_nullify();operation->advance();
    check(message_index(*operation)==0 && f.action.damage_reflected==0,"Reflection flag changed before source text returned");
    complete_text(f,operation->conversation(),[&](unsigned tick){if(tick==1){
        f.action.attacker=1;f.action.target=9;
        f.party.name_field(2)[0]=0x7a;
    }});
    operation->respond();operation->advance();
    check(operation->complete() && !operation->nullified() && f.action.damage_reflected==1 &&
              f.action.attacker==9 && f.action.target==1 && f.roster.at(9).shield_hp==hp &&
              f.prepared.name(d::PreparedName::Target)[0]==0x7a,
          "Reflection swap failed to reread live selectors/party name or decremented too soon");
    f.action.damage_reflected=0x8001; // Source treats every nonzero word as set.
    auto weaken=f.shields->begin_weaken();const auto progress=weaken->advance();
    check(f.action.attacker==1 && f.action.target==9 && f.action.shield_nullified==0 &&
              f.roster.at(9).shield_hp==std::uint8_t(hp-1),"Weaken failed actual swap or byte decrement");
    if(hp==1) {
        check(progress==d::Progress::Suspended && message_index(*weaken)==2 &&
                  f.action.damage_reflected==0x8001 && f.roster.at(9).afflictions[6]==0,
              "Weaken cleared reflected flag before worn-off text returned");
        complete_text(f,weaken->conversation(),[&](unsigned tick){if(tick==1){f.action.damage_reflected=0x4321;f.action.target=3;}});
        weaken->respond();weaken->advance();
        check(f.action.target==3,"Weaken restored a selector overwritten by real callback");
    } else check(progress==d::Progress::Finished && f.roster.at(9).afflictions[6]==1,
                 "Weaken nonzero lifetime changed status or yielded text");
    check(weaken->complete() && f.action.damage_reflected==0 && f.roster.at(8).shield_hp==5,
          "Weaken completion changed stale target or retained reflected flag");
}
void ownership(eb::GameVersion version) {
    Fixture f(version);Fixture foreign(version);
    b::ActionState other_action; b::Roster other_roster(assets(version).enemies);
    rejects([&]{b::Shields bad(other_action,f.roster,f.names,*f.dialogue,assets(version).actions);},
            "Shields accepted unrelated current selectors");
    rejects([&]{b::Shields bad(f.action,other_roster,f.names,*f.dialogue,assets(version).actions);},
            "Shields accepted unrelated roster");
    rejects([&]{b::Shields bad(f.action,f.roster,f.names,*foreign.dialogue,assets(version).actions);},
            "Shields accepted another party/prepared owner");
    rejects([&]{b::Shields bad(f.action,f.roster,f.names,*f.dialogue,nullptr);},"Shields accepted missing resources");
    const auto opposite=version==eb::GameVersion::US?eb::GameVersion::JP:eb::GameVersion::US;
    rejects([&]{b::Shields bad(f.action,f.roster,f.names,*f.dialogue,assets(opposite).actions);},
            "Shields accepted wrong-region action messages");
    Fixture missing(version,false);missing.messages=program(version,false,2);
    missing.dialogue=std::make_unique<s::BattleDialogue>(missing.messages,missing.prompts,missing.prepared,missing.party,missing.input);
    rejects([&]{b::Shields bad(missing.action,missing.roster,missing.names,*missing.dialogue,assets(version).actions);},
            "Shields accepted unresolved later worn-off message");
    const auto prior_number=f.prepared.number();f.party.auto_fight=9;f.input.state[0]=0x8000;
    rejects([&]{f.dialogue->begin_number({3,0},123);},"Wrapper accepted absent program location");
    check(f.party.auto_fight==9 && f.prepared.number()==prior_number && !f.dialogue->busy(),
          "Rejected message changed source state or acquired a lease");
    f.state.stream_slot=0xfffe;
    rejects([&]{f.shields->begin_nullify();},"Invalid next source stream admitted shield mutation");
    check(!f.shields->busy() && f.action.shield_nullified==0 && f.prepared.item()==7,
          "Rejected shield admission changed producer values");f.state.stream_slot=0;
    auto wrapper_operation=f.dialogue->begin_text({1,256});wrapper_operation->advance();
    rejects([&]{f.shields->begin_nullify();},"Shield acquired occupied message wrapper");
    complete_text(f,wrapper_operation->conversation());wrapper_operation->respond();
    f.roster.at(8).afflictions[6]=2;f.roster.at(8).shield_hp=2;
    auto operation=f.shields->begin_nullify();
    rejects([&]{f.shields->begin_weaken();},"Concurrent shield mutation acquired shared state");
    rejects([&]{operation->conversation();},"Idle shield exposed a fabricated child");
    operation->advance();complete_text(f,operation->conversation());operation->respond();operation->advance();
    auto reuse=f.shields->begin_weaken();reuse->advance();
    check(reuse->complete() && !f.shields->busy(),"Completed shield handle retained active lease");
    rejects([&]{operation->respond();},"Completed shield acknowledged unrelated later operation");
    {
        Fixture abandoned(version);abandoned.roster.at(8).afflictions[6]=2;
        auto unfinished=abandoned.shields->begin_nullify();unfinished->advance();unfinished.reset();
        check(abandoned.shields->failed() && abandoned.dialogue->failed(),"Abandoned child did not invalidate producer/wrapper");
        rejects([&]{abandoned.shields->begin_nullify();},"Abandoned shield execution restarted");
    }
    {
        Fixture unbound(version,false);d::Conversation parent(unbound.messages,unbound.prompts);
        parent.start(d::EntryId{0});next(parent);
        rejects([&]{s::BattleDialogue bad(unbound.messages,unbound.prompts,unbound.prepared,unbound.party,unbound.input);},
                "Active output admitted constructor host mutation");
        check(!unbound.windows.prepared_message() &&
                  !unbound.windows.query_party({d::PartyQueryKind::ControlledCount}).has_value(),
              "Rejected wrapper constructor retained a borrowed owner");
        parent.respond();complete_text(unbound,parent);unbound.bind();
    }
}
void nested(eb::GameVersion version) {
    Fixture f(version);Fixture other(version);
    d::Conversation parent(f.messages,f.prompts);parent.start(d::EntryId{0});
    rejects([&]{f.shields->begin_nullify(parent);},"Budget-only parent admitted nested shield text");
    next(parent);
    d::Conversation foreign(other.messages,other.prompts);foreign.start(d::EntryId{0});next(foreign);
    rejects([&]{f.shields->begin_nullify(foreign);},"Foreign parent admitted shared shield text");
    rejects([&]{f.shields->begin_nullify();},"Root shield stole suspended parent output");
    f.roster.at(8).afflictions[6]=2;f.roster.at(8).shield_hp=1;
    auto operation=f.shields->begin_nullify(parent);unsigned messages{};
    while(!operation->complete()) {
        if(operation->advance()!=d::Progress::Suspended)continue;
        ++messages;
        rejects([&]{parent.advance();},"Parent advanced while shield child owned text");
        rejects([&]{parent.respond();},"Parent responded while shield child owned text");
        complete_text(f,operation->conversation());operation->respond();
        check(parent.event().has_value(),"Shield message consumed its suspended parent callback");
    }
    check(messages==2 && operation->nullified(),"Nested absorption lost real worn-off message");
    parent.respond();complete_text(f,parent);foreign.respond();complete_text(other,foreign);
}

// Bounded synthetic map/sprite imports, following the source-shaped builders
// in native_story_actor_frame_tests. No CPU or fake Scene implementation.
void put(std::vector<std::uint8_t> &bytes,unsigned at,unsigned value) {
    bytes.at(at)=std::uint8_t(value);bytes.at(at+1)=std::uint8_t(value>>8);
}
void pointer(std::vector<std::uint8_t> &bytes,unsigned at,unsigned offset) {
    const auto value=0xc00000+offset;put(bytes,at,value);put(bytes,at+2,value>>16);
}
void zero_run(std::vector<std::uint8_t> &bytes,unsigned &at,unsigned count) {
    while(count) { const auto length=std::min(count,1024u),encoded=length-1;
        bytes.at(at++)=std::uint8_t(0xe4|(encoded>>8));bytes.at(at++)=std::uint8_t(encoded);
        bytes.at(at++)=0;count-=length; }
    bytes.at(at)=0xff;
}
WorldMapArea make_area() {
    std::vector<std::uint8_t> bytes(0x20000);
    WorldMapLayout layout{{},0x1a000,0x1aa00,0x1c000,0x1c100,0x1c104,0x1c108,
                          0x1c400,0x1c430,0x1c600,0x1c10c,0x1c110,1};
    for(unsigned i=0;i<10;++i) layout.block_chunks[i]=i*0x2800;
    pointer(bytes,layout.graphics,0x1d000);pointer(bytes,layout.arrangements,0x1d500);
    pointer(bytes,layout.collision_pointers,0x1e000);pointer(bytes,layout.animation_properties,0x1c800);
    put(bytes,layout.event_pointers,0xc700);
    unsigned at=0x1d000;zero_run(bytes,at,0x7001);
    at=0x1d500;zero_run(bytes,at,64);
    return WorldMap(bytes,layout).prepare(0,{});
}
std::shared_ptr<SpriteResources> make_sprites() {
    std::vector<std::uint8_t> bytes(4096);
    SpriteCatalogLayout layout{0,73,8,2,1};
    pointer(bytes,0,32);pointer(bytes,4,32);pointer(bytes,8,128);
    bytes[32]=3;bytes[33]=0x20;bytes[35]=0x1a;bytes[40]=0xc0;
    for(unsigned i=0;i<16;++i) put(bytes,41+i*2,512|(i&1));
    bytes[128]=2;bytes[129]=1;
    for(unsigned mirror=0;mirror<2;++mirror) for(unsigned part=0;part<2;++part) {
        const auto at=130+(mirror*2+part)*5;
        bytes[at]=std::uint8_t(-24+part*16);bytes[at+2]=mirror?0x40:0;
        bytes[at+3]=std::uint8_t(-8);bytes[at+4]=part?0x80:0;
    }
    return std::make_shared<SpriteResources>(bytes,layout);
}
d::Progress next(s::Scene::Operation &operation) {
    for(unsigned i=0;i<10000;++i) {
        const auto result=operation.advance(1);
        if(result!=d::Progress::BudgetExhausted) return result;
    }
    throw std::runtime_error("Scene did not reach a real service");
}
void scene_actor_callback(eb::GameVersion version) {
    Fixture f(version,true,true);
    auto meter_resources=party::MeterWindowResources::import(assets(version).input.image,version);
    party::MeterWindows meters(f.windows,f.party,meter_resources);
    const std::vector<std::uint8_t> code{0x14,0,2,1,0,0x06,1,0x19,0,0};
    auto scripts=std::make_shared<ActionScriptData>(code,0,std::vector<std::uint32_t>{0});
    ActorWorld actors(make_sprites(),scripts,version);
    WorldActorSpec spec;spec.script=0;spec.action.position={100*65536+0x8000,100*65536+0x8000,0x8000};
    spec.behavior.tick=ActorTickCallback::WorldMaintenance;
    const auto caller=actors.create(spec);actors.actor(caller).appearance.select_four(0,0,0);
    auto area=make_area();AreaPalettes palettes;s::TickState clock;
    s::Scene scene(f.windows,f.party,f.random,meters,clock,f.input,actors,area,palettes);
    auto parent=scene.begin(s::TickKind::ActorFrame);
    check(next(*parent)==d::Progress::Suspended && parent->service()==s::SceneService::ActorEngine &&
              parent->actor_request()->actor==caller && clock.action_scripts_disabled==1 && actors.ticks()==0,
          "Scene did not suspend inside the real actor callback");
    // Source wrapper's valid zero battle-mode branch can finish using existing
    // Scene effects. Nonzero battle mode retains an explicit BattleHelper
    // service; this test never pretends to complete that unported owner.
    f.roster.at(8).afflictions[6]=2;f.roster.at(8).shield_hp=1;
    auto operation=f.shields->begin_nullify();unsigned messages{},frames{};
    while(!operation->complete()) {
        const auto before=scene.completed_frames();
        check(operation->advance(0)==d::Progress::BudgetExhausted && scene.completed_frames()==before,
              "Shield work-budget yield invented a Scene frame");
        if(operation->advance()!=d::Progress::Suspended)continue;
        auto child=scene.begin_nested(operation->conversation(),*parent);
        rejects([&]{parent->respond_actor();},"Actor parent resumed while shield child owned Scene");
        for(;;) {
            const auto progress=next(*child);if(progress==d::Progress::Finished)break;
            check(child->service()==s::SceneService::Frame && actors.ticks()==0 &&
                      clock.action_scripts_disabled==1 && actors.actor(caller).action().variables[0]==1,
                  "Nested shield message reentered actors or invented service completion");
            child->complete_frame({0,0});++frames;
        }
        check(operation->conversation().finished() && parent->service()==s::SceneService::ActorEngine,
              "Shield child lost its actual actor parent");
        child.reset();operation->respond();++messages;
    }
    check(messages==2 && frames>0 && scene.completed_frames()==frames && operation->nullified() &&
              f.roster.at(8).shield_hp==0 && f.roster.at(8).afflictions[6]==0 && actors.ticks()==0,
          "Scene did not finish both real absorption messages");
    parent->respond_actor();
    check(next(*parent)==d::Progress::Suspended && parent->service()==s::SceneService::Frame &&
              actors.ticks()==1 && clock.action_scripts_disabled==0,"Actor traversal did not resume exactly once");
    parent->complete_frame({0,0});
    check(next(*parent)==d::Progress::Finished && scene.completed_frames()==frames+1,
          "Shield Scene parent did not finish its own frame");
}
} // namespace
int main(int argc,char** argv) {
    try {
        if(argc==3) {
            const std::string mode=argv[1],region=argv[2];
            check(region=="us"||region=="jp","Unknown graphics regression region");
            const auto version=region=="us"?eb::GameVersion::US:eb::GameVersion::JP;
            if(mode=="--graphics-auto")graphics_auto_clear(version);
            else if(mode=="--graphics-meter")graphics_meter_clear(version);
            else throw std::runtime_error("Unknown focused graphics regression");
            std::cout<<"native battle shields: "<<checks<<" focused graphics checks passed\n";return 0;
        }
        check(argc==1,"Unexpected shield test arguments");
        for(const auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
            wrapper(version);no_message(version);
            graphics_auto_clear(version);graphics_meter_clear(version);
            for(unsigned hp:{0u,1u,2u,255u}) {
                absorb(version,hp,false);absorb(version,hp,true);reflect_then_weaken(version,hp);
            }
            ownership(version);nested(version);scene_actor_callback(version);
        }
        std::cout<<"native battle shields: "<<checks<<" checks passed\n";
    } catch(const std::exception& error) {std::cerr<<error.what()<<'\n';return 1;}
}
