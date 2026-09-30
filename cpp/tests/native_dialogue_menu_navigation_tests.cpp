#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/menu_host.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include "eb/native/dialogue/menu_navigation.hpp"
#include "native_dialogue_test_assets.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool ok,const char* message) { ++checks; if(!ok) throw std::runtime_error(message); }
template<class F> void rejects(F f,const char* message) {
    bool rejected=false; try { f(); } catch(const std::exception&) { rejected=true; }
    check(rejected,message);
}
dialogue_test_assets::WindowInput assets(eb::GameVersion version) {
    dialogue_test_assets::WindowInput result(version);
    dialogue_test_assets::add_text_fonts(result);
    // Every fixed image looks identical. Navigation must use source glyph
    // identity, never color/shape matching or native menu-record coordinates.
    const bool jp=version==eb::GameVersion::JP;
    std::vector<std::uint8_t> fixed(jp ? 0x2a00 : 0x1a00,255);
    const auto compressed=dialogue_test_assets::pack(fixed,jp ? 0x10c2 : 0x754);
    std::copy(compressed.begin(),compressed.end(),result.image.begin()+0x200000);
    result.put(result.configs+4,10); result.put(result.configs+6,10); // 8 columns, four text lines
    const auto marker=jp ? 0x3e3e8 : 0x3e406;
    for(unsigned i=0;i<4;++i) result.put(marker+i*2,64);
    const auto label=jp ? 0x3e42e : 0x3e44c;
    std::fill_n(result.image.begin()+label,4,0);
    return result;
}
void finish(TextOutput& output) {
    unsigned effects=0;
    while(output.advance()==OutputProgress::Suspended) {
        check(++effects<64,"Fixed glyph did not finish"); output.respond();
    }
}
struct Canvas {
    State state;
    TextOutput output;
    explicit Canvas(std::shared_ptr<const FontResources> fonts) : output(std::move(fonts),state) {
        state.windows[WindowId{0}]={}; state.focus=WindowId{0};
        output.define_window({0},{8,8});
    }
    void glyph(TextCursor cursor,std::uint16_t code=47) {
        output.set_cursor({0},cursor); output.begin_fixed_glyph(code); finish(output);
    }
};
void marker_identity(std::shared_ptr<const FontResources> fonts) {
    Canvas canvas(fonts);
    canvas.glyph({0,0},47); canvas.glyph({1,0},46); canvas.glyph({2,0},33);
    const auto pixels=canvas.output.frame({0});
    for(unsigned y=0;y<16;++y) for(unsigned x=0;x<8;++x)
        check(pixels->pixels[y*pixels->width+x]==pixels->pixels[y*pixels->width+8+x],
              "Lookalike marker fixture artwork differs");
    check(canvas.output.selection_marker_at({0},{0,0}) &&
          !canvas.output.selection_marker_at({0},{1,0}),"Marker search inferred identity from identical artwork");
    check(canvas.output.selection_marker_at({0},{2,0})==(fonts->version()==eb::GameVersion::US),
          "US selected tile65 / JP selected character33 marker distinction changed");
    auto style=canvas.output.window({0}).style;
    style.palette=6; style.priority=true; style.flip_horizontal=true; style.flip_vertical=true;
    canvas.output.set_style({0},style); canvas.glyph({3,0});
    check(canvas.output.selection_marker_at({0},{3,0}),"Marker identity incorrectly depends on palette or flip bits");
    const auto frozen=canvas.output.frame({0});
    const auto frozen_pixels=frozen->pixels;
    canvas.output.set_style({0},{}); canvas.glyph({0,0},46);
    check(!canvas.output.selection_marker_at({0},{0,0}),"Replacing a marker retained stale navigation identity");
    check(frozen->pixels==frozen_pixels && frozen->pixels==canvas.output.frame({0})->pixels,
          "Replacing identical artwork unexpectedly changed the presentation fixture");
    rejects([&]{canvas.output.selection_marker_at({0},{8,0});},"Out-of-content marker query accepted");
}
void sparse_search(std::shared_ptr<const FontResources> fonts) {
    struct Scenario { TextCursor start; MenuDirection direction; std::vector<TextCursor> markers; TextCursor expected; };
    // Hand-picked source C20B65 cases distinguish aligned-first and complete
    // preceding-side passes from nearest-neighbor/row-major algorithms.
    const std::vector<Scenario> cases{
        {{3,3},MenuDirection::Up,{{3,0},{2,2}},{3,0}},
        {{3,3},MenuDirection::Up,{{0,0},{4,2}},{0,0}},
        {{3,3},MenuDirection::Up,{{1,2},{2,2},{2,1}},{2,2}},
        {{3,0},MenuDirection::Down,{{3,3},{2,1}},{3,3}},
        {{3,0},MenuDirection::Down,{{0,3},{4,1}},{0,3}},
        {{1,2},MenuDirection::Right,{{6,2},{2,1}},{6,2}},
        {{1,2},MenuDirection::Right,{{5,0},{2,3}},{5,0}},
        {{1,2},MenuDirection::Right,{{2,0},{2,1},{4,1}},{2,1}},
        {{6,2},MenuDirection::Left,{{0,2},{5,1}},{0,2}},
        {{6,2},MenuDirection::Left,{{0,0},{5,3}},{0,0}}
    };
    for(const auto& test:cases) {
        Canvas canvas(fonts); for(auto marker:test.markers) canvas.glyph(marker);
        const auto before=canvas.output.window({0}); const auto frame=canvas.output.frame({0});
        check(find_menu_marker(canvas.output,{0},test.start,test.direction)==test.expected,
              "Sparse navigation changed source ray/side scan precedence");
        check(canvas.output.window({0})==before && frame->pixels==canvas.output.frame({0})->pixels,
              "Read-only navigation changed cursor or canvas");
    }
    Canvas empty(fonts);
    check(!find_menu_marker(empty.output,{0},{3,2},MenuDirection::Up),"Blank cells became navigation markers");
}
void wrap_policy(std::shared_ptr<const FontResources> fonts) {
    struct Edge { TextCursor start,origin,aligned,diagonal; MenuDirection direction; };
    const std::array<Edge,4> edges{{
        {{3,0},{3,4},{3,3},{4,3},MenuDirection::Up},
        {{3,3},{3,0xffff},{3,0},{4,0},MenuDirection::Down},
        {{0,2},{8,2},{7,2},{7,3},MenuDirection::Left},
        {{7,2},{0xffff,2},{0,2},{0,3},MenuDirection::Right}
    }};
    for(const auto& edge:edges) {
        Canvas canvas(fonts); canvas.glyph(edge.aligned);
        check(!find_menu_marker(canvas.output,{0},edge.start,edge.direction),
              "Held direction wrapped without a press-provided origin");
        check(find_menu_marker(canvas.output,{0},edge.start,edge.direction,edge.origin)==edge.aligned,
              "Pressed edge did not wrap to its aligned marker");
        Canvas off_axis(fonts); off_axis.glyph(edge.diagonal);
        check(!find_menu_marker(off_axis.output,{0},edge.start,edge.direction,edge.origin),
              "MOVE_CURSOR accepted a wrapped marker outside the original row/column");
    }
}
struct MenuFixture {
    dialogue_test_assets::WindowInput input;
    State state;
    std::shared_ptr<const FontResources> fonts;
    TextOutput output;
    WindowHost windows;
    MenuModel model;
    MenuHost menu;
    explicit MenuFixture(eb::GameVersion version)
        : input(assets(version)),fonts(FontResources::import(input.image,version)),output(fonts,state),
          windows(input.import(),state,output),model(windows,*fonts),
          menu(std::make_shared<Program>(version,std::vector<ContentBlock>{{0,0,{2}}}),windows,
               MenuResources::import(input.image,version)) {
        auto open=windows.begin({WindowAction::Open,WindowId{0},{},0});
        while(open->advance()==OutputProgress::Suspended) open->respond();
    }
    void add(TextCursor point,std::uint16_t code=47) {
        model.append_at({}, {},point.column,point.line);
        output.set_cursor({0},point); output.begin_fixed_glyph(code); finish(output);
    }
    std::vector<std::uint16_t> sounds;
    void poll(MenuHost::Operation& operation) {
        for(unsigned steps=0;steps<200;++steps) {
            const auto progress=operation.advance(17);
            check(progress!=Progress::Finished,"Selection ended before its next input boundary");
            if(progress==Progress::BudgetExhausted) continue;
            const auto& event=*operation.event();
            if(const auto* effect=std::get_if<MenuEffect>(&event)) {
                if(effect->kind==MenuEffectKind::Input) return;
                if(effect->kind==MenuEffectKind::Sound) sounds.push_back(effect->value);
            }
            operation.respond();
        }
        throw std::runtime_error("Selection did not reach an input boundary");
    }
    std::uint16_t confirm(MenuHost::Operation& operation) {
        operation.respond({std::uint16_t(MenuButton::A),0,0});
        for(unsigned steps=0;steps<200;++steps) {
            const auto progress=operation.advance(17);
            if(progress==Progress::Finished) return operation.result();
            if(progress==Progress::Suspended) {
                if(const auto* effect=std::get_if<MenuEffect>(&*operation.event()))
                    check(effect->kind!=MenuEffectKind::Input,"Confirm unexpectedly returned to input");
                operation.respond();
            }
        }
        throw std::runtime_error("Confirm did not finish");
    }
};
std::uint16_t bits(std::initializer_list<MenuButton> buttons) {
    std::uint16_t value=0; for(auto button:buttons) value|=std::uint16_t(button); return value;
}
void input_priority(eb::GameVersion version) {
    struct Case { std::uint16_t pressed,held,result,sound; };
    const std::array<Case,6> cases{{
        {bits({MenuButton::Up,MenuButton::Left,MenuButton::Down,MenuButton::Right,MenuButton::A}),0,2,3},
        {bits({MenuButton::Left,MenuButton::Down,MenuButton::Right}),0,3,2},
        {bits({MenuButton::Down,MenuButton::Right}),0,4,3},
        {bits({MenuButton::Right}),bits({MenuButton::Up}),5,2},
        {bits({MenuButton::A}),bits({MenuButton::Left}),3,2},
        {0,bits({MenuButton::Up,MenuButton::Left,MenuButton::Down,MenuButton::Right}),2,3}
    }};
    for(const auto& test:cases) {
        MenuFixture f(version);
        for(auto point:std::array<TextCursor,5>{{{3,2},{3,1},{1,2},{3,3},{5,2}}}) f.add(point);
        auto operation=f.menu.begin(); f.poll(*operation);
        operation->respond({test.pressed,test.held,0}); f.poll(*operation);
        check(f.sounds==std::vector<std::uint16_t>{test.sound},"Input priority emitted the wrong directional sound");
        check(f.confirm(*operation)==test.result,"Pressed/held direction priority selected the wrong ordinal");
    }
    for(bool pressed_edge:{false,true}) {
        MenuFixture f(version); f.add({3,0}); f.add({3,3});
        auto operation=f.menu.begin(); f.poll(*operation);
        operation->respond({pressed_edge ? bits({MenuButton::Up}) : std::uint16_t(0),
                            pressed_edge ? std::uint16_t(0) : bits({MenuButton::Up}),0});
        f.poll(*operation);
        check(f.sounds.size()==unsigned(pressed_edge),"Held edge emitted a wrap/movement sound");
        check(f.confirm(*operation)==(pressed_edge ? 2 : 1),"Pressed wrap/held nonwrap changed selection result");
    }
    MenuFixture f(version); f.add({3,2}); f.add({3,1},46); // Record exists; visible marker does not.
    auto operation=f.menu.begin(); f.poll(*operation);
    operation->respond({0,bits({MenuButton::Up}),0}); f.poll(*operation);
    check(f.sounds.empty() && f.confirm(*operation)==1,"Menu moved using option coordinates without a rendered marker");
}
void callback_order(eb::GameVersion version) {
    MenuFixture f(version); f.add({1,1});
    auto open=f.windows.begin({WindowAction::Open,WindowId{2},{},0});
    while(open->advance()==OutputProgress::Suspended) open->respond();
    f.state.focus=WindowId{0};
    f.windows.metadata({0}).cursor_callback=MenuCallbackId{9};
    auto operation=f.menu.begin();
    check(operation->advance()==Progress::Suspended &&
          *operation->event()==MenuEvent{MenuEffect{MenuEffectKind::Callback,1,MenuCallbackId{9}}},
          "Selection did not invoke the initial callback before marker/tick publication");
    f.state.focus=WindowId{2}; operation->respond(); f.poll(*operation);
    check(f.state.focus==WindowId{0},"Cursor callback did not restore the captured window ID");
    // Even failed movement returns through setup/callback. The selected pool
    // record is shared, so a callback argument must use its current result mode.
    f.windows.menu_options()[0].flags=2; f.windows.menu_options()[0].userdata=0xbeef;
    operation->respond({0,bits({MenuButton::Up}),0});
    check(operation->advance()==Progress::Suspended &&
          *operation->event()==MenuEvent{MenuEffect{MenuEffectKind::Callback,0xbeef,MenuCallbackId{9}}},
          "Failed movement skipped/reordered the live selected-option callback");
    check(f.sounds.empty(),"Failed movement emitted a cursor sound");
    f.state.focus=WindowId{2}; operation->respond(); f.poll(*operation);
    check(f.state.focus==WindowId{0} && f.confirm(*operation)==0xbeef,
          "Callback focus restoration or shared userdata result was lost");
}
void ownership_boundaries(eb::GameVersion version) {
    MenuFixture f(version); f.add({1,1});
    auto parent=f.menu.begin(); f.poll(*parent);
    const auto pending=*parent->event();
    auto child=f.menu.begin_nested(1,*parent); f.poll(*child);
    const auto frame=f.output.frame({0});
    rejects([&]{parent->advance(0);},"Suspended parent advanced while a nested menu owned output");
    rejects([&]{parent->respond();},"Suspended parent consumed its input while child owned output");
    rejects([&]{f.menu.begin();},"Root menu acquired output while a nested menu owned it");
    check(parent->event()==pending && frame->pixels==f.output.frame({0})->pixels,"Rejected parent execution mutated pending input");
    child->respond({bits({MenuButton::B}),0,0});
    for(unsigned attempts=0; !child->complete(); ++attempts) {
        check(attempts<100,"Nested cancellation did not finish");
        if(child->advance()==Progress::Suspended) child->respond();
    }
    check(child->result()==0 && parent->event()==pending,"Child return acknowledged or replaced parent input");
    check(f.confirm(*parent)==1,"Parent did not resume its original selection after child completion");
    MenuFixture abandoned(version); abandoned.add({1,1});
    auto abandoned_parent=abandoned.menu.begin(); abandoned.poll(*abandoned_parent);
    auto abandoned_child=abandoned.menu.begin_nested(1,*abandoned_parent); abandoned.poll(*abandoned_child);
    abandoned_parent.reset();
    rejects([&]{abandoned_child->advance(0);},"Destroyed parent left child execution usable");
    rejects([&]{abandoned_child->respond();},"Destroyed parent left child input response usable");
    rejects([&]{abandoned.menu.begin();},"Abandoned execution tree allowed a fresh root menu");
    check(abandoned.output.frame({0})->width==64,"Abandoned execution tree invalidated read-only presentation");
}
}
int main() {
    try {
        for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
            const auto input=assets(version); const auto fonts=FontResources::import(input.image,version);
            marker_identity(fonts); sparse_search(fonts); wrap_policy(fonts);
            input_priority(version); callback_order(version); ownership_boundaries(version);
        }
        std::cout<<"PASS "<<checks<<" native menu marker provenance, sparse search, input priority and ownership checks\n";
        return 0;
    } catch(const std::exception& error) { std::cerr<<error.what()<<'\n'; return 1; }
}
