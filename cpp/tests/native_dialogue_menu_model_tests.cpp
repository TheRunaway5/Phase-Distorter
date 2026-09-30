#include "eb/native/dialogue/menu_model.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "native_dialogue_test_assets.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool ok,const char* message) { ++checks; if(!ok) throw std::runtime_error(message); }
template<class F> void rejects(F operation,const char* message) {
    bool rejected=false; try {operation();} catch(const std::exception&) {rejected=true;}
    check(rejected,message);
}
dialogue_test_assets::WindowInput assets(eb::GameVersion version,unsigned width,unsigned height) {
    dialogue_test_assets::WindowInput result(version);
    dialogue_test_assets::add_text_fonts(result);
    result.put(result.configs+4,width+2); result.put(result.configs+6,height+2);
    if(version==eb::GameVersion::US) std::fill_n(result.image.begin()+0x201359,96,9);
    return result;
}
struct Fixture {
    dialogue_test_assets::WindowInput input;
    State state;
    std::shared_ptr<const FontResources> fonts;
    TextOutput output;
    WindowHost host;
    MenuModel model;
    explicit Fixture(eb::GameVersion version,unsigned width=18,unsigned height=8)
        : input(assets(version,width,height)),fonts(FontResources::import(input.image,version)),
          output(fonts,state),host(input.import(),state,output),model(host,*fonts) {
        open(0); output.policy().character_padding=1;
    }
    void open(unsigned id) {
        auto operation=host.begin({WindowAction::Open,WindowId{id},{},0});
        while(operation->advance()==OutputProgress::Suspended) operation->respond();
        check(operation->succeeded(),"Synthetic menu window did not open");
    }
    void close(unsigned id) {
        auto operation=host.begin({WindowAction::Close,WindowId{id},{},0});
        while(operation->advance()==OutputProgress::Suspended) operation->respond();
    }
    WindowMetadata& window(unsigned id=0) { return host.metadata(WindowId{id}); }
};
void constructors(eb::GameVersion version) {
    Fixture f(version);
    auto& pool=f.host.menu_options();
    for(unsigned i=0;i<pool.size();++i) {
        pool[i].x=0x1234; pool[i].y=0x5678; pool[i].userdata=0x9abc; pool[i].pixel_align=7;
        pool[i].label.fill(0x9d);
    }
    const std::array<std::uint8_t,4> label{0x71,0x72,0,0x73};
    const auto first=f.model.append(label,Location{12,0xabcd});
    check(first==0 && f.model.first_free()==1 && f.window().first_option==0 && f.window().last_option==0,
          "Base constructor did not take the first free shared slot");
    check(pool[0].flags==1 && !pool[0].next && !pool[0].previous && pool[0].page==1 && pool[0].sound_effect==1 &&
          pool[0].selected_text==Location{12,0xabcd} && pool[0].label[0]==0x71 && pool[0].label[1]==0x72 &&
          pool[0].label[2]==0 && pool[0].label[3]==0x9d,
          "Base constructor lost source initialization or retained label suffix");
    check(pool[0].x==0x1234 && pool[0].y==0x5678 && pool[0].userdata==0x9abc && pool[0].pixel_align==7,
          "Base constructor reset fields that source leaves untouched");
    f.host.menu_state().force_left_alignment=true;
    const auto second=f.model.append_at(label,{},0xffff,0x8001);
    check(second==1 && pool[0].next==1 && pool[1].previous==0 && !pool[1].next &&
          f.window().last_option==1 && pool[1].y==0x8001 &&
          pool[1].x==(version==eb::GameVersion::US ? 8191 : 65535) && pool[1].pixel_align==7,
          "Coordinate wrapper lost regional left-alignment or source links");
    f.host.menu_state().force_left_alignment=false;
    const auto third=f.model.append_value(label,Location{3,4},0xbeef,13,9);
    check(third==2 && pool[2].flags==2 && pool[2].userdata==0xbeef && pool[2].x==13 && pool[2].y==9 &&
          pool[2].pixel_align==(version==eb::GameVersion::US ? 0 : 7),
          "Userdata wrapper did not preserve its source field widths");
    check(f.model.chain(0)==std::vector<unsigned>{0,1,2} && f.model.count(0)==3 && f.model.count({})==0 &&
          f.model.index_at(0,2)==2,"Count/index traversal conflated list ordinals with pool IDs");
    f.close(0); f.open(0);
    check(f.model.first_free()==0 && pool[0].label[3]==0x9d && !pool[0].flags,
          "Window cleanup discarded retained pool records instead of freeing their status");
    const std::array<std::uint8_t,1> shortened{0x74};
    f.model.append(shortened);
    check(pool[0].label[0]==0x74 && pool[0].label[1]==0 && pool[0].label[2]==0 && pool[0].label[3]==0x9d,
          "Reused short label did not retain its source suffix");
    const auto before=pool;
    std::vector<std::uint8_t> too_long(version==eb::GameVersion::US ? 26 : 25, 0x71);
    rejects([&]{f.model.append(too_long);},"Unterminated overflowing label entered a valid pool slot");
    check(pool==before && f.window().last_option==0,"Rejected overlong label mutated the shared pool");
}
void fallback_records(eb::GameVersion version) {
    Fixture f(version);
    const std::array<std::uint8_t,1> label{0x71},other{0x72};
    for(unsigned i=0;i<70;++i) {
        check(f.model.first_free()==i && f.model.append_value(label,Location{1,std::uint16_t(i)},std::uint16_t(i),2,3)==i,
              "Shared allocation skipped or reused an occupied option slot");
    }
    const auto full=f.host.menu_options();
    check(!f.model.first_free() && f.model.count(0)==70 && f.model.append(other,Location{9,9})==69 &&
          f.host.menu_options()==full,"Full-pool base constructor changed its fallback record");
    const auto fallback=f.model.append_at(other,Location{9,9},15,0xfffe,true);
    const auto& record=f.host.menu_options()[69];
    check(fallback==69 && record.x==(version==eb::GameVersion::US ? 1 : 15) && record.y==0xfffe &&
          record.pixel_align==(version==eb::GameVersion::US ? 7 : 0) && record.label==full[69].label &&
          record.selected_text==full[69].selected_text && record.previous==68 && !record.next &&
          f.window().last_option==69,"Full-pool coordinate wrapper failed to mutate only fallback fields");
    f.state.focus.reset();
    check(f.model.append_value(other,{},0xffff,7,8)==69 && f.host.menu_options()[69].userdata==0xffff &&
          f.host.menu_options()[69].flags==2 && f.host.menu_options()[69].label==full[69].label &&
          f.host.menu_options()[69].selected_text==full[69].selected_text,
          "No-focus wrapper failed to publish userdata into the source fallback record");
    f.model.select_initial(0xffff);
    Fixture empty(version);
    empty.state.focus.reset();
    check(empty.model.append_value(other,{},123,4,5)==69 && empty.host.menu_options()[69].flags==2 &&
          empty.model.first_free()==0 && empty.host.menu_options()[69].label[0]==0,
          "No-focus constructor linked or copied a label into an unused fallback record");
}
void regular_layout(eb::GameVersion version) {
    Fixture f(version);
    const std::array<std::uint8_t,2> label{0x71,0x72},page{0x73,0x74};
    f.window().selected_option=3; f.window().page_number=7;
    f.model.layout({0,0,true,false},page); // Empty list returns before layout arguments are used.
    check(f.window().layout_columns==1 && f.window().selected_option==3 && f.window().page_number==7,
          "Empty layout changed selection or consumed invalid unused dimensions");
    for(unsigned i=0;i<9;++i) f.model.append(label);
    const auto frame=f.output.frame(WindowId{0});
    f.model.layout({2,2,false,false},page);
    const std::array<unsigned,9> pages{1,1,1,1,2,2,2,2,3},ys{0,0,1,1,0,0,1,1,0};
    for(unsigned i=0;i<9;++i) {
        const auto& option=f.host.menu_options()[i];
        check(option.x==(i%2 ? 10 : 0) && option.y==ys[i] && option.page==pages[i],
              "Regular layout changed row-major placement, spacing or reserved page rows");
    }
    const auto& control=f.host.menu_options()[9];
    check(control.flags==2 && control.previous==8 && !control.next && control.page==0 && control.x==0 &&
          control.y==3 && control.userdata==0 && control.label[0]==0x73 && control.label[1]==0x74 &&
          !control.selected_text && f.window().last_option==9 && f.window().layout_columns==2,
          "Page-control option was not appended through the original userdata constructor");
    check(f.output.frame(WindowId{0})->pixels==frame->pixels && f.output.window(WindowId{0}).cursor==TextCursor{},
          "Pure menu layout performed printing or moved the text cursor");
    f.model.select_initial(4);
    check(f.window().selected_option==4 && f.window().page_number==2,"Initial ordinal did not select its option's page");
    f.model.select_initial(9);
    check(f.window().page_number==0,"Initial page-control selection was normalized to page1");
    f.model.select_initial(0xffff);
    check(f.window().selected_option==9 && f.window().page_number==0,"ffff initial selection reset state");
    const auto before=f.host.menu_options();
    rejects([&]{f.model.layout({0,0,false,false},page);},"Nonempty zero-column layout was accepted");
    check(before==f.host.menu_options(),"Rejected nonterminating layout changed option records");

    Fixture fits(version);
    for(unsigned i=0;i<8;++i) fits.model.append(label);
    fits.model.prepare_selection(2,false,7,page);
    check(fits.model.count(0)==8 && fits.window().last_option==7 && fits.window().selected_option==7 &&
          fits.window().page_number==1 && fits.host.menu_options()[7].y==3,
          "Exactly fitting layout added a page control or ignored the requested initial ordinal");
}
void centered_layout(eb::GameVersion version) {
    Fixture f(version);
    for(unsigned length=1;length<=4;++length) f.model.append(std::vector<std::uint8_t>(length,0x71));
    f.model.layout({4,0,true,false},{});
    const std::array<unsigned,4> expected=version==eb::GameVersion::US ?
        std::array<unsigned,4>{0,3,8,13} : std::array<unsigned,4>{1,5,8,12};
    for(unsigned i=0;i<4;++i)
        check(f.host.menu_options()[i].x==expected[i] && !f.host.menu_options()[i].y && f.host.menu_options()[i].page==1,
              "Regional centered-label layout differs from source arithmetic");
    if(version==eb::GameVersion::US) {
        f.output.set_style(WindowId{0},{1});
        f.model.layout({4,0,true,false},{});
        const std::array<unsigned,4> saturn{0,3,7,13};
        for(unsigned i=0;i<4;++i) check(f.host.menu_options()[i].x==saturn[i],"Centering cached a previous font's metrics");
        f.host.menu_state().force_normal_font=true;
        f.model.layout({4,0,true,false},{});
        for(unsigned i=0;i<4;++i) check(f.host.menu_options()[i].x==expected[i],"Centering ignored the shared normal-font override");
        f.model.append(std::array<std::uint8_t,1>{0x71});
        const auto pool=f.host.menu_options();
        rejects([&]{f.model.layout({1,0,true,false},{});},"US centered layout wrote beyond its four-option scratch domain");
        check(pool==f.host.menu_options(),"Rejected centered scratch overflow changed source option fields");
    }
    Fixture narrow(version,4,8);
    for(unsigned i=0;i<4;++i) narrow.model.append(std::vector<std::uint8_t>(10,0x71));
    narrow.model.layout({4,0,true,false},{});
    for(unsigned i=0;i<4;++i)
        check(narrow.host.menu_options()[i].x==(version==eb::GameVersion::US ? 12+i : 32763+i),
              "Oversized label centering lost byte/word wrap before source unsigned shifts");
}
void widths_and_borrowing(eb::GameVersion version) {
    Fixture f(version);
    const std::array<std::uint8_t,5> label{0x71,0x72,0,0x73,0x74};
    check(f.model.label_width(label)==(version==eb::GameVersion::US ? 10 : 2),
          "Menu label width did not stop at its terminator");
    check(f.model.label_width(label,1)==(version==eb::GameVersion::US ? 5 : 1),
          "Menu label width ignored its bounded source length");
    if(version==eb::GameVersion::US) {
        f.output.set_style(WindowId{0},{1});
        check(f.model.label_width(label)==20 && f.model.label_width(label,30,true)==10,
              "Source width calculation lost selected/forced font behavior");
        f.host.menu_state().force_normal_font=true;
        f.output.policy().character_padding=255;
        check(f.model.label_width(std::vector<std::uint8_t>(300,0x71),300)==12164,
              "Label width did not wrap its16-bit source sum or reread shared padding");
    }
    f.model.append(std::array<std::uint8_t,1>{0x71});
    f.host.menu_options()[0].next=7;
    f.host.menu_options()[7].next.reset();
    check(f.model.chain(0)==std::vector<unsigned>{0,7},"Model cached a duplicate option chain");
    f.host.menu_options()[7].next=0;
    rejects([&]{f.model.count(0);},"Cyclic chain was silently counted as a valid source menu");
}
void full_pool_page_control(eb::GameVersion version) {
    Fixture f(version);
    const std::array<std::uint8_t,1> label{0x71},page{0x72};
    for(unsigned i=0;i<9;++i) f.model.append(label);
    f.open(5);
    for(unsigned i=9;i<70;++i) f.model.append_value(label,Location{1,2},456,1,2);
    f.state.focus=WindowId{0};
    f.model.layout({2,0,false,false},page);
    check(f.window().last_option==8 && f.host.menu_options()[8].page==0 && f.host.menu_options()[8].next==std::nullopt &&
          f.host.menu_options()[69].userdata==0 && f.host.menu_options()[69].x==0 && f.host.menu_options()[69].y==3 &&
          f.host.menu_options()[69].label[0]==0x71 && f.host.menu_options()[69].selected_text==Location{1,2} &&
          f.window(5).last_option==69,
          "Full-pool pagination conflated fallback record writes with focused-list tail publication");
}
}
int main() {
    try {
        for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
            constructors(version); fallback_records(version); regular_layout(version);
            centered_layout(version); widths_and_borrowing(version); full_pool_page_control(version);
        }
        std::cout<<"PASS "<<checks<<" native menu allocation, regional layout, selection, width and shared-state checks\n";
    } catch(const std::exception& error) {std::cerr<<error.what()<<'\n';return 1;}
}
