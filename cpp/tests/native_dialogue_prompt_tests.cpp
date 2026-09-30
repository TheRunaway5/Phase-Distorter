#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/prompt_host.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include "native_dialogue_test_assets.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <type_traits>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
std::string current_case;
void check(bool value,const char* message) { ++checks; if(!value) throw std::runtime_error(message); }
template<class F> void rejects(F function,const char* message) {
    bool rejected=false; try { function(); } catch(const std::exception&) { rejected=true; }
    check(rejected,message);
}
constexpr std::uint16_t accept=0x0080, up=0x0800, start=0x1000, b=0x8000, r=0x0010;
static_assert(!std::is_copy_constructible_v<PromptHost::Operation>);
struct Assets {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    std::shared_ptr<const MenuResources> menus;
    std::array<std::array<WindowArtwork,3>,5> prompt_pixels;
};
Assets make_assets(eb::GameVersion version) {
    dialogue_test_assets::WindowInput input(version);
    dialogue_test_assets::add_text_fonts(input);
    for(unsigned id=0;id<input.count;++id) {
        input.put(input.configs+id*8,1+(id%3)*9);
        input.put(input.configs+id*8+2,2+(id%3)*7);
        input.put(input.configs+id*8+4,8);
        input.put(input.configs+id*8+6,6);
    }
    const auto at=version==eb::GameVersion::US ? 0x3e416 : 0x3e3f8;
    // Three independently recorded descriptor words, backed by invented art.
    input.put(at,0x3c14); input.put(at+2,0x3c15); input.put(at+4,0xbc11);
    Assets result{FontResources::import(input.image,version),input.import(),MenuResources::import(input.image,version),{}};
    for(unsigned flavor=1;flavor<=5;++flavor)
        for(unsigned phase=0;phase<3;++phase)
            result.prompt_pixels[flavor-1][phase]=input.expected_art(phase==0?20:phase==1?21:17,flavor-1);
    return result;
}
const Assets& assets(eb::GameVersion version) {
    static const auto us=make_assets(eb::GameVersion::US),jp=make_assets(eb::GameVersion::JP);
    return version==eb::GameVersion::US ? us : jp;
}
std::shared_ptr<const Program> program(eb::GameVersion version,std::vector<std::uint8_t> bytes) {
    return std::make_shared<const Program>(version,std::vector<ContentBlock>{{0,0,std::move(bytes)}},
                                          std::vector<Location>{{0,0}});
}
struct Fixture {
    eb::GameVersion version;
    State state;
    TextOutput output;
    WindowHost windows;
    PromptHost prompts;
    explicit Fixture(eb::GameVersion region)
        : version(region),output(assets(region).fonts,state),windows(assets(region).windows,state,output),prompts(windows) {
        open(0); windows.load_artwork(3); tick();
        check(&prompts.state()==&windows.prompt_state(),"Prompt host duplicated authoritative window/input state");
    }
    void tick() { windows.draw_tick(); windows.publish_scene(); }
    void complete(WindowHost::Operation& operation) {
        for(unsigned i=0;i<128;++i) {
            if(operation.advance()==OutputProgress::Complete) return;
            if(operation.effect()->kind==WindowEffectKind::WindowTick) tick();
            operation.respond();
        }
        throw std::runtime_error("Window helper did not finish");
    }
    void open(unsigned id) { auto operation=windows.begin({WindowAction::Open,WindowId{id},{},0}); complete(*operation); }
    void respond(PromptHost::Operation& operation,std::optional<std::uint16_t> pressed={}) {
        if(const auto* effect=std::get_if<WindowEffect>(&*operation.event());
           effect && effect->kind==WindowEffectKind::WindowTick) tick();
        operation.respond(pressed);
    }
    void phase(unsigned slot,unsigned number,unsigned flavor=3) {
        const auto& record=windows.slot(slot);
        const auto geometry=windows.slot_output(slot).geometry;
        const unsigned px=(record.rectangle.outer_x+geometry.columns)*8;
        const unsigned py=(record.rectangle.outer_y+geometry.tile_rows+1)*8;
        const auto frame=windows.frame();
        const auto& art=assets(version).prompt_pixels[flavor-1][number];
        bool same=true;
        for(unsigned y=0;y<8;++y) for(unsigned x=0;x<8;++x) {
            const auto pixel=art[(number==2 ? 7-y : y)*8+x];
            const unsigned at=(py+y)*frame->width+px+x;
            same=same && frame->pixels.at(at)==(pixel ? 28+pixel : 0) &&
                 frame->priority.at(at)==(pixel ? 1 : 0);
        }
        check(same,"Published prompt pixels/attributes differ from independently imported synthetic descriptor");
    }
};
enum class Boundary { Window,World,Frame };
Boundary boundary(const PromptHost::Operation& operation) {
    check(operation.event().has_value(),"Prompt helper has no pending event");
    if(std::holds_alternative<PromptEffect>(*operation.event())) return Boundary::World;
    const auto kind=std::get<WindowEffect>(*operation.event()).kind;
    check(kind==WindowEffectKind::WindowTick || kind==WindowEffectKind::FrameWait,
          "Prompt emitted an unrelated window service");
    return kind==WindowEffectKind::WindowTick ? Boundary::Window : Boundary::Frame;
}
Progress next(PromptHost::Operation& operation,unsigned budget=1) {
    for(unsigned i=0;i<512;++i) {
        const auto value=operation.advance(budget);
        if(value!=Progress::BudgetExhausted) return value;
    }
    throw std::runtime_error("Unblocked prompt exhausted bounded continuation work");
}
void expect(PromptHost::Operation& operation,Boundary kind) {
    check(next(operation)==Progress::Suspended && boundary(operation)==kind,"Prompt service order differs");
}
void stable(Fixture& f,PromptHost::Operation& operation) {
    const auto pending=operation.event(); const auto state=f.prompts.state();
    const auto scene=f.windows.frame(); const auto pixels=scene->pixels;
    const auto cursor=f.output.window(*f.state.focus).cursor;
    for(unsigned i=0;i<4;++i) {
        check(operation.advance(i)==Progress::Suspended && operation.event()==pending && f.prompts.state()==state,
              "Pending helper advanced input/counters on repeated scheduling");
        check(f.windows.frame()->pixels==pixels && scene->pixels==pixels &&
              f.output.window(*f.state.focus).cursor==cursor,"Presentation sampling advanced prompt state");
    }
}
void fixed_delays(eb::GameVersion version) {
    for(unsigned count:{0u,1u,2u,255u,65535u}) {
        Fixture f(version); f.output.policy().instant=true; f.prompts.state().pressed=0xffff;
        f.prompts.state().rolling_disabled=7; f.prompts.state().half_meter_speed=3;
        auto operation=f.prompts.begin({PromptAction::Delay,std::uint16_t(count)});
        check(operation->advance(0)==Progress::BudgetExhausted && f.output.policy().instant,
              "Zero helper budget executed fixed-pause work");
        expect(*operation,Boundary::Window);
        check(!f.output.policy().instant,"Fixed pause did not clear instant before its initial window tick");
        stable(f,*operation); f.respond(*operation);
        unsigned worlds=0;
        for(;;) {
            const auto progress=next(*operation,32);
            if(progress==Progress::Finished) break;
            check(boundary(*operation)==Boundary::World,"Fixed delay substituted a frame or window service");
            ++worlds; check(worlds<=count,"Fixed pause did not finish after its captured count");
            f.respond(*operation,worlds&1 ? 0xffff : 0);
        }
        check(worlds==count && operation->result()==0,"Fixed pause was shortened by input or lost16-bit duration");
        check(f.prompts.state().rolling_disabled==7 && f.prompts.state().half_meter_speed==3,
              "Fixed pause changed meter policy");
    }
}
void timed_waits(eb::GameVersion version) {
    struct Test { std::uint16_t count,default_count,pressed; unsigned steps; };
    for(const auto test:std::array<Test,8>{{{0,65535,0,65535},{0,0,0,0},{1,7,0,1},{0,2,0,2},{2,7,up,2},
                                          {255,0,start,255},{5,0,accept,0},{2,0,r,2}}}) {
        Fixture f(version); auto& shared=f.prompts.state();
        shared.text_speed_based_wait=test.default_count; shared.pressed=test.pressed;
        shared.rolling_disabled=9; shared.half_meter_speed=8; f.output.policy().instant=true;
        auto operation=f.prompts.begin({PromptAction::TimedWait,test.count});
        unsigned worlds=0;
        while(next(*operation)!=Progress::Finished) {
            check(boundary(*operation)==Boundary::World && ++worlds<=test.steps,"Timed helper emitted wrong/excess service");
            shared.text_speed_based_wait=99; // Already captured for this invocation.
            f.respond(*operation,test.pressed);
        }
        check(worlds==test.steps && f.output.policy().instant && shared.rolling_disabled==9 && shared.half_meter_speed==8,
              "Timed wait recaptured default duration, cleared instant, or changed meters");
    }
    for(const auto button:{std::uint16_t(0x8000),std::uint16_t(0x2000),std::uint16_t(0x0080),std::uint16_t(0x0020)}) {
        Fixture f(version); auto operation=f.prompts.begin({PromptAction::TimedWait,4});
        expect(*operation,Boundary::World); f.respond(*operation,button);
        check(next(*operation)==Progress::Finished,"Timed wait ignored an accepted newly pressed button");
    }
    Fixture retained(version); retained.prompts.state().pressed=up;
    auto operation=retained.prompts.begin({PromptAction::TimedWait,2});
    expect(*operation,Boundary::World); retained.respond(*operation);
    check(retained.prompts.state().pressed==up,"Omitted response reset the shared input snapshot");
    expect(*operation,Boundary::World); retained.respond(*operation,0);
    check(next(*operation)==Progress::Finished && retained.prompts.state().pressed==0,
          "Explicit zero response did not replace shared input");
}
void locks_and_debug(eb::GameVersion version) {
    for(auto action:{PromptAction::TimedWait,PromptAction::Prompt}) {
        Fixture f(version); auto& shared=f.prompts.state();
        shared.input_lock=1; shared.debug=0; shared.battle_mode=1; shared.pressed=b|r;
        f.output.policy().instant=true;
        auto operation=f.prompts.begin({action,1,0,1});
        const auto before=f.windows.frame()->pixels;
        for(unsigned i=0;i<3;++i)
            check(operation->advance(19)==Progress::BudgetExhausted && !operation->event() && shared.input_lock==1 &&
                  f.output.policy().instant && f.windows.frame()->pixels==before,"Input lock fabricated frame work or cleared without debug");
        rejects([&]{operation->respond();},"Input lock accepted a nonexistent host event");
        shared.debug=1; shared.pressed=b;
        check(operation->advance(9)==Progress::BudgetExhausted && shared.input_lock==1,"B alone escaped the debug lock");
        shared.pressed=r;
        check(operation->advance(9)==Progress::BudgetExhausted && shared.input_lock==1,"R alone escaped the debug lock");
        shared.pressed=b|r|up;
        if(action==PromptAction::Prompt) {
            expect(*operation,Boundary::Window); f.respond(*operation,accept);
        }
        check(next(*operation)==Progress::Finished && !shared.input_lock,"New B+R did not clear lock and continue source input handling");
    }
    Fixture debug(version); auto& shared=debug.prompts.state();
    shared.debug=1; shared.battle_mode=0; shared.input_lock=1;
    auto operation=debug.prompts.begin({PromptAction::TimedWait,0});
    expect(*operation,Boundary::World); shared.debug=0; shared.battle_mode=1; debug.respond(*operation,up);
    expect(*operation,Boundary::World); debug.respond(*operation,accept);
    check(next(*operation)==Progress::Finished && shared.input_lock==1,
          "Captured debug input-only branch recaptured count/battle/lock policy");
    Fixture captured(version); auto& wait=captured.prompts.state();
    wait.input_lock=1; wait.text_speed_based_wait=9; wait.battle_mode=1;
    auto delayed=captured.prompts.begin({PromptAction::TimedWait,0});
    check(delayed->advance(20)==Progress::BudgetExhausted,"Locked timed wait created a world callback");
    wait.input_lock=0; wait.text_speed_based_wait=2;
    for(unsigned i=0;i<2;++i) { expect(*delayed,Boundary::World); wait.text_speed_based_wait=7; captured.respond(*delayed,0); }
    check(next(*delayed)==Progress::Finished,"Timed wait captured the default before its lock cleared");
}
void post_tick_branches(eb::GameVersion version) {
    for(bool force:{false,true}) for(unsigned mode:{0u,1u,2u}) {
        Fixture f(version); auto& shared=f.prompts.state();
        shared.text_speed_based_wait=2; shared.rolling_disabled=7; shared.half_meter_speed=9;
        f.output.policy().prompt_mode=std::uint16_t(mode);
        auto operation=f.prompts.begin({PromptAction::Prompt,0,0,std::uint16_t(force)});
        expect(*operation,Boundary::Window); f.respond(*operation,accept);
        check(next(*operation)==Progress::Finished,"Immediate accepted prompt did not complete after initial tick");
        const bool automatic=!force && mode;
        check(shared.rolling_disabled==(automatic?7:0) && shared.half_meter_speed==(automatic?9:0),
              "Automatic/normal prompt branches changed the wrong meter flags");
    }
    Fixture f(version); auto& shared=f.prompts.state();
    shared.text_speed_based_wait=0; shared.rolling_disabled=4; shared.half_meter_speed=6;
    auto operation=f.prompts.begin({PromptAction::Prompt,0,1,0});
    expect(*operation,Boundary::Window);
    f.output.policy().prompt_mode=2; shared.text_speed_based_wait=1; shared.input_lock=1;
    f.respond(*operation,0);
    check(operation->advance(30)==Progress::BudgetExhausted && !operation->event(),
          "Automatic prompt ignored a lock established by its initial window tick");
    shared.input_lock=0; shared.text_speed_based_wait=2;
    for(unsigned i=0;i<2;++i) { expect(*operation,Boundary::World); shared.text_speed_based_wait=20; f.respond(*operation,0); }
    check(next(*operation)==Progress::Finished && shared.rolling_disabled==4 && shared.half_meter_speed==6,
          "Prompt did not select the live post-tick automatic path or preserve meters");
}
void blinking(eb::GameVersion version) {
    for(unsigned accept_after:{0u,1u,14u,15u,16u,24u,25u,26u,50u}) {
        Fixture f(version); f.output.policy().prompt_mode=1; f.prompts.state().half_meter_speed=3;
        const auto slot=*f.windows.slot_for({0});
        auto operation=f.prompts.begin({PromptAction::Prompt,0,1,1});
        expect(*operation,Boundary::Window); f.respond(*operation,accept_after ? 0 : accept);
        const auto logical=f.windows.scene()->pixels; const auto text=f.output.frame({0})->pixels;
        std::shared_ptr<const TextFrame> frozen; std::vector<std::uint8_t> frozen_pixels;
        unsigned worlds=0;
        while(next(*operation)!=Progress::Finished) {
            check(boundary(*operation)==Boundary::World && worlds<accept_after,"Blinking prompt emitted wrong/excess service");
            f.phase(slot,worlds%25<15 ? 0 : 1);
            check(f.prompts.state().rolling_disabled==1 && f.prompts.state().half_meter_speed==3,
                  "Prompt meter pause changed half speed or was lost before input");
            if(!frozen) { frozen=f.windows.frame(); frozen_pixels=frozen->pixels; stable(f,*operation); }
            ++worlds; f.respond(*operation,worlds==accept_after ? accept : 0);
        }
        check(worlds==accept_after,"Prompt accepted at the wrong logical input boundary");
        f.phase(slot,accept_after%25<15 ? 2 : 1);
        check(!f.prompts.state().rolling_disabled && !f.prompts.state().half_meter_speed,
              "Normal prompt exit did not restore both meter flags");
        check(f.windows.scene()->pixels==logical && f.output.frame({0})->pixels==text &&
              (!frozen || frozen->pixels==frozen_pixels),"Prompt publication changed logical canvas or an immutable old frame");
    }
    for(unsigned flavor=1;flavor<=5;++flavor) {
        Fixture f(version); f.windows.load_artwork(flavor);
        auto operation=f.prompts.begin({PromptAction::Prompt,0,1,1});
        expect(*operation,Boundary::Window); f.respond(*operation,accept);
        check(next(*operation)==Progress::Finished,"Immediate flavoured prompt did not finish");
        f.phase(*f.windows.slot_for({0}),2,flavor);
    }
}
void shared_artwork(eb::GameVersion version) {
    Fixture f(version); const auto slot=*f.windows.slot_for({0});
    f.output.policy().prompt_mode=1; f.prompts.state().text_speed_based_wait=12;
    // Direct helper flags are words. Neither high-only show nor high-only
    // force may be byte-truncated into an automatic/no-marker invocation.
    auto operation=f.prompts.begin({PromptAction::Prompt,0,0x100,0x100});
    expect(*operation,Boundary::Window); f.respond(*operation,0);
    expect(*operation,Boundary::World); f.phase(slot,0);
    const auto frozen=f.windows.frame(); const auto before=frozen->pixels;
    f.windows.load_artwork(2);
    f.phase(slot,0,2);
    check(frozen->pixels==before,"Live prompt artwork replacement mutated an immutable old frame");
    f.respond(*operation,accept); check(next(*operation)==Progress::Finished,"Wide prompt flags selected automatic delay");
    f.phase(slot,2,2);
}
void captured_window(eb::GameVersion version) {
    Fixture f(version); f.open(1); f.state.focus=WindowId{0};
    auto operation=f.prompts.begin({PromptAction::Prompt,0,1,1});
    expect(*operation,Boundary::Window); f.state.focus=WindowId{1}; f.respond(*operation,0);
    expect(*operation,Boundary::World);
    const auto captured=*f.windows.slot_for({1}); f.phase(captured,0);
    f.state.focus=WindowId{0}; ++f.windows.metadata({1}).rectangle.outer_x;
    for(unsigned i=1;i<=15;++i) {
        f.respond(*operation,i==15 ? accept : 0);
        if(i<15) expect(*operation,Boundary::World);
    }
    check(next(*operation)==Progress::Finished,"Captured-window prompt did not accept at phase boundary");
    f.phase(captured,1);
    check(f.state.focus==WindowId{0},"Prompt restored focus instead of retaining only its captured physical record");

    Fixture reused(version); reused.open(1); reused.state.focus=WindowId{0};
    auto waiting=reused.prompts.begin({PromptAction::Prompt,0,1,1});
    expect(*waiting,Boundary::Window); reused.respond(*waiting,0); expect(*waiting,Boundary::World);
    const auto physical=*reused.windows.slot_for({0}); const auto pending=waiting->event();
    auto close=reused.prompts.begin_window({WindowAction::Close,WindowId{0},{},0},*waiting);
    reused.complete(*close);
    // JP CREATE snapshots the active register bank. After closing focus0 with
    // another window still open, select that live window explicitly rather
    // than invent an ambient OPEN_WINDOW_TABLE[-1] register-slot value.
    reused.state.focus=WindowId{1};
    auto reopen=reused.prompts.begin_window({WindowAction::Open,WindowId{2},{},0},*waiting);
    reused.complete(*reopen);
    check(reused.windows.slot_for({2})==physical && waiting->event()==pending,
          "Nested window reuse did not preserve the prompt's pending callback and physical slot");
    reused.state.focus=WindowId{1};
    for(unsigned i=1;i<=15;++i) {
        reused.respond(*waiting,i==15 ? accept : 0);
        if(i<15) expect(*waiting,Boundary::World);
    }
    check(next(*waiting)==Progress::Finished,"Prompt failed after source-compatible captured-slot reuse");
    reused.phase(physical,1);
}
void frame_delays(eb::GameVersion version) {
    struct Test { unsigned count,press_after; std::uint16_t initial; unsigned frames,result; };
    for(const auto test:std::array<Test,6>{{{0,0,up,0,0},{1,0,0,1,0},{2,0,up,0,0xffff},
                                          {3,1,0,1,0xffff},{1,1,0,1,0},{2,0,0,2,0}}}) {
        Fixture f(version); f.prompts.state().pressed=test.initial; f.output.policy().instant=true;
        auto operation=f.prompts.begin({PromptAction::FrameDelay,std::uint16_t(test.count)});
        unsigned frames=0;
        while(next(*operation)!=Progress::Finished) {
            check(boundary(*operation)==Boundary::Frame && ++frames<=test.frames,"Frame-only delay performed another service");
            rejects([&]{f.prompts.begin_nested({PromptAction::Delay,0},*operation);},
                    "Frame-only wait exposed a nested world callback boundary");
            f.respond(*operation,test.press_after && frames==test.press_after ? up : 0);
        }
        check(frames==test.frames && operation->result()==test.result && f.output.policy().instant,
              "Frame-only input/last-frame boundary or result changed");
    }
}
void nesting(eb::GameVersion version) {
    Fixture f(version);
    auto parent=f.prompts.begin({PromptAction::Delay,1}); expect(*parent,Boundary::Window);
    const auto pending=parent->event();
    auto child=f.prompts.begin_nested({PromptAction::Delay,0},*parent); expect(*child,Boundary::Window);
    rejects([&]{parent->advance(0);},"Parent prompt executed while a child owned output");
    rejects([&]{parent->respond(accept);},"Parent prompt consumed input while a child owned output");
    rejects([&]{f.prompts.begin({PromptAction::Delay,0});},"Root prompt bypassed active child ownership");
    f.respond(*child,up); check(next(*child)==Progress::Finished,"Nested zero pause did not finish");
    check(parent->event()==pending && f.prompts.state().pressed==up,"Child finish implicitly acknowledged parent or rolled back input");
    f.respond(*parent); expect(*parent,Boundary::World);
    auto script=program(version,{0x0f,2}); Conversation text(script,f.prompts);
    text.start_nested(EntryId{0},*parent);
    check(text.advance()==Progress::Finished && f.state.window().active.secondary==1,
          "Prompt world callback could not execute native nested text");
    check(parent->event().has_value(),"Nested text implicitly acknowledged parent world step");
    f.respond(*parent); check(next(*parent)==Progress::Finished,"Parent pause lost its captured count after nested text");
    Fixture poison(version); auto lost=poison.prompts.begin({PromptAction::Delay,1}); expect(*lost,Boundary::Window);
    auto live=poison.prompts.begin_nested({PromptAction::Delay,0},*lost); expect(*live,Boundary::Window);
    lost.reset();
    rejects([&]{live->advance(0);},"Destroyed parent left nested prompt execution alive");
    rejects([&]{live->respond();},"Destroyed parent left nested prompt input acknowledgment alive");
    check(poison.windows.frame()->width==256,"Poisoned prompt tree invalidated immutable frame sampling");
}
void shared_input_bridges(eb::GameVersion version) {
    Fixture f(version);
    auto parent=f.prompts.begin({PromptAction::TimedWait,4}); expect(*parent,Boundary::World);
    auto script=program(version,{0x11,2}); MenuHost menus(script,f.prompts,assets(version).menus);
    check(menus.prompts()==&f.prompts,"Menu service lost its borrowed prompt/input host");
    MenuModel model(f.windows,*assets(version).fonts); model.append_at({}, {},0,0);
    Conversation child(script,menus); child.start_nested(EntryId{0},*parent);
    unsigned inputs=0;
    for(unsigned attempts=0; attempts<1000 && !child.finished(); ++attempts) {
        const auto progress=child.advance(1);
        if(progress!=Progress::Suspended) continue;
        const auto* menu=std::get_if<MenuEffect>(&*child.event());
        if(menu && menu->kind==MenuEffectKind::Input) { ++inputs; child.respond({0,accept,0}); }
        else child.respond();
    }
    check(child.finished() && inputs==1 && f.prompts.state().pressed==accept,
          "Nested menu confirmation failed to publish its live pressed snapshot");
    f.respond(*parent);
    check(f.prompts.state().pressed==accept && next(*parent)==Progress::Finished,
          "Omitted parent response erased nested menu input or added a timed world step");

    Fixture glyph(version); glyph.output.policy().instant=false; glyph.output.policy().sound_mode=3;
    Conversation text(program(version,{0x71,0x13,2}),glyph.prompts); text.start(EntryId{0});
    unsigned windows=0;
    for(unsigned attempts=0; attempts<1000 && !text.finished(); ++attempts) {
        const auto progress=text.advance(1);
        if(progress!=Progress::Suspended) continue;
        const auto& event=*text.event();
        if(const auto* effect=std::get_if<TextEffect>(&event)) {
            check(effect->kind==TextEffectKind::WindowTick,"Glyph fixture unexpectedly emitted audio");
            ++windows; text.respond({0,accept,0});
            check(glyph.prompts.state().pressed==accept,"Ordinary glyph window tick lost the supplied input snapshot");
        } else {
            const auto* window_effect=std::get_if<WindowEffect>(&event);
            check(window_effect && window_effect->kind==WindowEffectKind::WindowTick,
                  "Later prompt ignored the earlier glyph input and polled the world again");
            ++windows; text.respond();
            check(glyph.prompts.state().pressed==accept,"Omitted prompt window response cleared established input");
        }
    }
    check(text.finished() && windows==2,"Glyph-to-prompt input handoff changed the source service sequence");
}
void conversation(eb::GameVersion version) {
    Fixture f(version); auto script=program(version,{0x10,2,0x0f,0x13,0x0f,2});
    Conversation text(script,f.prompts); text.start(EntryId{0});
    std::vector<Boundary> trace;
    for(unsigned loops=0;loops<1000;++loops) {
        const auto progress=text.advance(1);
        if(progress==Progress::Finished) break;
        if(progress==Progress::BudgetExhausted) continue;
        const auto& event=*text.event();
        if(const auto* window=std::get_if<WindowEffect>(&event)) {
            check(window->kind==WindowEffectKind::WindowTick,"Conversation pause substituted a different window effect");
            trace.push_back(Boundary::Window); f.tick();
        } else {
            check(std::holds_alternative<PromptEffect>(event),"Conversation leaked an unhandled pause/prompt request");
            trace.push_back(Boundary::World);
        }
        if(trace.size()<=3)
            check(f.state.window().active.secondary==0 && text.snapshot().consumed_bytes==2,
                  "Conversation acknowledged fixed pause before all effects completed");
        else check(f.state.window().active.secondary==1,"Conversation acknowledged normal prompt before input");
        const auto snapshot=text.snapshot(); const auto input=f.prompts.state();
        const auto frame=f.windows.frame()->pixels;
        check(text.advance(0)==Progress::Suspended && text.snapshot().frames==snapshot.frames &&
              text.snapshot().consumed_bytes==snapshot.consumed_bytes && f.prompts.state()==input &&
              f.windows.frame()->pixels==frame,"Suspended conversation prompt advanced through sampling/zero work");
        text.respond({0,trace.size()==4 ? accept : std::uint16_t(0),0});
    }
    check(text.finished() && trace==std::vector<Boundary>{Boundary::Window,Boundary::World,Boundary::World,Boundary::Window} &&
          f.state.window().active.secondary==2,"Conversation did not preserve complete source helper/command order");
    Fixture controls(version);
    auto commands=program(version,{0x1f,0x62,2,0x1f,0x50,0x1f,0x51,0x1f,0x60,2,0x0f,2});
    Conversation wait(commands,controls.prompts); wait.start(EntryId{0}); unsigned worlds=0;
    for(unsigned loops=0;loops<1000 && !wait.finished();++loops) {
        const auto progress=wait.advance(1);
        if(progress!=Progress::Suspended) continue;
        check(std::holds_alternative<PromptEffect>(*wait.event()),"Timed command leaked unsupported service or added an initial window tick");
        ++worlds; wait.respond();
    }
    check(wait.finished() && worlds==2 && controls.output.policy().prompt_mode==2 &&
          !controls.prompts.state().input_lock && controls.state.window().active.secondary==1,
          "Dialogue prompt mode/lock/unlock/timed-wait commands lost shared state or ordering");
}
}
int main() {
    try {
        for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
            const auto run=[&](const char* name,auto function) {
                current_case=std::string(version==eb::GameVersion::US ? "US " : "JP ")+name;
                function(version);
            };
            run("fixed delays",fixed_delays); run("timed waits",timed_waits);
            run("locks/debug",locks_and_debug); run("post-tick branches",post_tick_branches);
            run("blinking",blinking); run("shared artwork",shared_artwork);
            run("captured window",captured_window); run("frame delays",frame_delays);
            run("nesting",nesting); run("shared input",shared_input_bridges); run("conversation",conversation);
        }
        std::cout<<"PASS "<<checks<<" native pause, prompt, input, publication and nested ownership checks\n";
        return 0;
    } catch(const std::exception& error) { std::cerr<<current_case<<": "<<error.what()<<'\n'; return 1; }
}
