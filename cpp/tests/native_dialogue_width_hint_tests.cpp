// US CC1C11 width-hint parsing and native synchronous layout. Synthetic
// imported fonts only; the separate source oracle verifies original execution.
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool ok,const char* message) {++checks;if(!ok)throw std::runtime_error(message);}
template<class F> void rejects(F&& call,const char* message) {
    bool rejected{};try{call();}catch(const std::exception&){rejected=true;}check(rejected,message);
}
std::uint8_t main_width(unsigned index) {
    return index<96 ? std::uint8_t(index==35?0:index%15+1) : std::uint8_t(16+index-96);
}
std::shared_ptr<const FontResources> fonts(eb::GameVersion version) {
    static const auto us=[] {
        dialogue_test_assets::WindowInput content(eb::GameVersion::US);
        dialogue_test_assets::add_text_fonts(content);
        constexpr std::array<unsigned,5> metrics{0x210c7a,0x201359,0x2118da,0x211f3a,0x21229a};
        constexpr std::array<unsigned,5> advances{0,12,7,6,9};
        for(unsigned font=1;font<5;++font) std::fill_n(content.image.begin()+metrics[font],96,advances[font]);
        for(unsigned i=0;i<128;++i) content.image[metrics[0]+i]=main_width(i);
        return FontResources::import(content.image,eb::GameVersion::US);
    }();
    static const auto jp=[] {
        dialogue_test_assets::WindowInput content(eb::GameVersion::JP);
        dialogue_test_assets::add_text_fonts(content);
        return FontResources::import(content.image,eb::GameVersion::JP);
    }();
    return version==eb::GameVersion::US?us:jp;
}
std::shared_ptr<const Program> program(eb::GameVersion version,std::vector<std::uint8_t> bytes) {
    return std::make_shared<const Program>(version,std::vector<ContentBlock>{{1,0,std::move(bytes)}},
                                          std::vector<Location>{{1,0}});
}
struct Fixture {
    State state;
    TextOutput output;
    explicit Fixture(eb::GameVersion version=eb::GameVersion::US,WindowGeometry geometry={8,4})
        :output(fonts(version),state) {
        state.windows[{1}]={};state.focus=WindowId{1};
        output.define_window({1},geometry);
    }
};
Request glyph(std::uint8_t character) {Request r;r.kind=RequestKind::Glyph;r.glyph=character;return r;}
void emit(TextOutput& output,std::uint8_t character) {
    output.begin(glyph(character));
    check(output.advance()==OutputProgress::Complete && !output.effect(),"Instant fixture glyph yielded a footer");
}
bool same(const Snapshot& a,const Snapshot& b) {
    return a.frames==b.frames && a.returned_cursor==b.returned_cursor &&
           a.consumed_bytes==b.consumed_bytes && a.completed_stages==b.completed_stages;
}
Progress next(Runtime& runtime,unsigned budget=1) {
    for(unsigned i=0;i<100;++i) {const auto p=runtime.advance(budget);if(p!=Progress::BudgetExhausted)return p;}
    throw std::runtime_error("Runtime did not reach width-hint boundary");
}
Progress next(Conversation& conversation,unsigned budget=1) {
    for(unsigned i=0;i<1000;++i) {const auto p=conversation.advance(budget);if(p!=Progress::BudgetExhausted)return p;}
    throw std::runtime_error("Conversation did not finish bounded width hints");
}

Request hint(std::uint16_t value) {Request r;r.kind=RequestKind::WidthHint;r.count=value;return r;}
bool wraps(unsigned columns,unsigned column,unsigned fraction,unsigned padding,std::uint16_t value) {
    const auto used=std::uint16_t((std::uint16_t(column-1)*8u)+fraction);
    const auto total=std::uint16_t(used+padding+main_width((unsigned(value)-0x50)&127));
    return std::uint16_t(columns*8u)<total;
}
void parser_bytes_and_fallback() {
    for(unsigned operand=0;operand<256;++operand) for(unsigned budget:{1u,4096u}) {
        State state;state.dummy.active={0xface0123,0xcafeff73,0x4567};
        const auto before=state.dummy.active;state.upcoming_word_length=53;state.word_wrap=true;
        Runtime runtime(program(eb::GameVersion::US,{0x1c,0x11,std::uint8_t(operand),2}),state);
        unsigned writes{};runtime.observe([&](const Event& e){writes+=e.kind==EventKind::RegisterChanged;});
        runtime.start(EntryId{0});const auto initial=runtime.snapshot();
        check(runtime.advance(0)==Progress::BudgetExhausted && same(initial,runtime.snapshot()),
              "Zero budget consumed width-hint bytes");
        check(next(runtime,budget)==Progress::Suspended && runtime.request()->kind==RequestKind::WidthHint,
              "US width hint was not decoded as its own layout request");
        const auto request=*runtime.request();
        check(request.command==0x1c && request.selector==0x11 && request.source==Location{1,0} &&
              request.count==(operand?operand:0xff73) && runtime.snapshot().consumed_bytes==3,
              "Width hint lost provenance, one-byte extent or live argument fallback");
        check(state.upcoming_word_length==52,"Width hint operand decremented the generic command lookahead count");
        const auto pending=runtime.snapshot();
        for(unsigned i=0;i<3;++i) check(runtime.advance(i)==Progress::Suspended && runtime.request()==request &&
                                      same(pending,runtime.snapshot()),"Pending hint consumed bytes or changed");
        runtime.respond({0xbeef});
        check(state.upcoming_word_length==52,"Hint acknowledgment changed the word count");
        check(next(runtime,budget)==Progress::Finished && runtime.returned_cursor()==Location{1,4} &&
              state.dummy.active==before && state.upcoming_word_length==51 && writes==0,
              "Hint acknowledgment printed operand, changed registers/word count or consumed wrong terminator");
    }
    State state;state.windows[{3}]={};state.focus=WindowId{3};state.window().active.argument=0xaaaa0001;
    Runtime live(program(eb::GameVersion::US,{0x1c,0x11,0,2}),state);live.start(EntryId{0});
    while(live.snapshot().consumed_bytes<2) check(live.advance(1)==Progress::BudgetExhausted,"Hint gathered operand before selector boundary");
    check(!live.request() && live.snapshot().consumed_bytes==2,"Hint emitted before consuming operand");
    state.window().active.argument=0xbeef80ff;
    check(next(live)==Progress::Suspended && live.request()->count==0x80ff,
          "Zero literal sampled argument before actual operand consumption");
    state.window().active.argument=0x11112222;
    check(live.advance()==Progress::Suspended && live.request()->count==0x80ff,
          "Pending resolved hint reread later argument mutation");
    live.respond();check(next(live)==Progress::Finished,"Live argument fixture failed to finish");
    for(const auto& bytes:{std::vector<std::uint8_t>{0x1c},std::vector<std::uint8_t>{0x1c,0x11}}) {
        State truncated;Runtime r(program(eb::GameVersion::US,bytes),truncated);r.start(EntryId{0});
        rejects([&]{(void)next(r);},"Truncated width hint guessed missing authored data");
        check(!r.request() && r.snapshot().consumed_bytes==bytes.size(),"Truncated hint fabricated a layout request");
    }
}
void dictionary_operands() {
    for(bool split:{false,true}) for(unsigned budget:{1u,4096u}) {
        const auto primary=split?std::vector<std::uint8_t>{0x15,0,0x17,0x71,2}:
                                 std::vector<std::uint8_t>{0x15,0,0x71,2};
        const auto tail=split?std::vector<std::uint8_t>{0x1c,0x11,0}:
                              std::vector<std::uint8_t>{0x1c,0x11,0x16,0};
        const auto scripts=std::make_shared<const Program>(eb::GameVersion::US,
            std::vector<ContentBlock>{{1,0,primary},{2,0,tail}},std::vector<Location>{{1,0}},
            std::vector<ReferenceBinding>{},std::vector<Location>{{2,0}});
        State state;Runtime r(scripts,state);r.start(EntryId{0});
        check(next(r,budget)==Progress::Suspended && r.request()->kind==RequestKind::WidthHint &&
              r.request()->count==(split?0x17u:0x16u) && r.request()->source==Location{1,0} &&
              r.snapshot().consumed_bytes==5,
              "Dictionary hint expanded a raw operand or failed to resume its primary operand");
        r.respond();check(next(r,budget)==Progress::Suspended && r.request()->kind==RequestKind::Glyph &&
                          r.request()->glyph==0x71,"Dictionary hint lost the following primary glyph");
        r.respond();check(next(r,budget)==Progress::Finished &&
                          r.returned_cursor()==Location{1,std::uint16_t(primary.size())},
                          "Dictionary hint consumed the wrong primary extent");
    }
    State state;
    const auto scripts=std::make_shared<const Program>(eb::GameVersion::US,
        std::vector<ContentBlock>{{7,0xfffe,{0x1c,0x11}},{7,0,{0x71,2}}},
        std::vector<Location>{{7,0xfffe}});
    Runtime r(scripts,state);r.start(EntryId{0});
    check(next(r)==Progress::Suspended && r.request()->kind==RequestKind::WidthHint &&
          r.request()->count==0x71 && r.request()->source==Location{7,0xfffe},
          "Width-hint operand failed the primary stream's low-word wrap");
    r.respond();check(next(r)==Progress::Finished && r.returned_cursor()==Location{7,2},
                      "Wrapped hint consumed an extra primary byte");
}
void output_matrix() {
    const auto resource=fonts(eb::GameVersion::US);
    for(unsigned index=0;index<128;++index)
        check(resource->word_widths(0)[index]==main_width(index),"Imported main width table lost graphic-prefix continuation");
    for(unsigned font=0;font<5;++font) for(unsigned column:{0u,1u,7u,8u})
        for(unsigned fraction=0;fraction<8;++fraction) for(unsigned padding:{0u,1u,255u})
            for(unsigned operand=0;operand<256;++operand) {
                Fixture f;f.output.set_style({1},{std::uint16_t(font),3,true,true,false});
                f.output.set_cursor({1},{std::uint16_t(column),0},fraction);
                f.output.policy().character_padding=std::uint8_t(padding);
                f.output.policy().instant=false;f.output.policy().text_speed=3;f.output.policy().sound_mode=2;
                const auto original=f.output.window({1});const auto frame=f.output.frame({1});
                const auto comp=f.output.composition_snapshot();const auto last=f.output.last_character();
                const auto pixel=f.output.last_pixel_offset_set();const auto redraw=f.output.redraw_pending();
                f.state.upcoming_word_length=99;
                f.output.begin(hint(std::uint16_t(operand)));
                check(f.output.complete() && !f.output.effect() && f.output.advance()==OutputProgress::Complete,
                      "Width hint ran a glyph sound/tick footer");
                const bool wrapped=wraps(8,column,fraction,padding,std::uint16_t(operand));
                check(f.output.window({1}).cursor==(wrapped?TextCursor{0,1}:original.cursor) &&
                      f.output.fractional_offset()==(wrapped?0:fraction) && f.output.indent_pending()==wrapped,
                      "Width hint lost main-font, padding, modular cursor arithmetic or exact boundary");
                check(f.output.window({1}).style==original.style && f.output.last_character()==last &&
                      f.output.last_pixel_offset_set()==pixel && f.state.upcoming_word_length==99 &&
                      f.output.redraw_pending()==redraw,
                      "Width hint changed font, glyph identity, saved padding, word count or redraw state");
                const auto after=f.output.frame({1});
                check(after->pixels==frame->pixels && after->priority==frame->priority,
                      "Non-scrolling hint rendered glyph pixels");
                if(!wrapped) check(f.output.composition_snapshot()==comp,"Fitting hint mutated partial composition");
                const auto cursor=f.output.window({1}).cursor;
                check(f.output.advance()==OutputProgress::Complete && f.output.window({1}).cursor==cursor,
                      "Repeated completion replayed width-hint newline");
            }
    // Direct helper consumes a word even though its nonzero authored literal is
    // one byte. High-byte fallback data must use the same 128-entry masking.
    for(std::uint16_t value:{std::uint16_t(0x100),std::uint16_t(0x8071),std::uint16_t(0xffff)}) {
        Fixture f;f.output.set_cursor({1},{8,0},7);f.output.begin(hint(value));
        check(f.output.window({1}).cursor==(wraps(8,8,7,0,value)?TextCursor{0,1}:TextCursor{8,0}),
              "Full-word width hint truncated or sign-extended its table index");
    }
}
void newline_scroll_and_indent() {
    Fixture f(eb::GameVersion::US,{4,4});emit(f.output,0x71);
    f.output.set_cursor({1},{0,1});emit(f.output,0x72);
    const auto before=f.output.frame({1});
    f.output.set_cursor({1},{4,1},7);
    const auto last=f.output.last_character();
    f.output.begin(hint(0x71));
    check(f.output.complete() && f.output.window({1}).cursor==TextCursor{0,1} &&
          f.output.indent_pending() && f.output.fractional_offset()==0 && f.output.last_character()==last,
          "Overflow hint did not execute actual last-line scroll and indentation");
    const auto scrolled=f.output.frame({1});
    for(unsigned y=0;y<16;++y) for(unsigned x=0;x<scrolled->width;++x)
        check(scrolled->pixels[y*scrolled->width+x]==before->pixels[(y+16)*before->width+x],
              "Hint scroll failed to promote the existing lower text row");
    const auto after_scroll=scrolled->pixels;emit(f.output,0x50);
    check(f.output.window({1}).cursor==TextCursor{0,1} && f.output.indent_pending() &&
          f.output.last_character()==last && f.output.frame({1})->pixels==after_scroll,
          "Actual following space ignored pending source indentation");
    emit(f.output,0x71);
    check(!f.output.indent_pending() && f.output.window({1}).cursor==TextCursor{2,1} &&
          f.output.fractional_offset()==2 && f.output.last_pixel_offset_set()==6 && f.output.last_character()==0x71,
          "Actual following glyph did not consume the source six-pixel indent");
    check(before->pixels!=f.output.frame({1})->pixels && scrolled->pixels==after_scroll,
          "Layout or later glyph mutated previously frozen frame data");
    Fixture no_wrap;no_wrap.output.set_cursor({1},{8,0},7);no_wrap.output.begin(hint(0x71));
    check(no_wrap.output.indent_pending(),"Fixture failed to establish pending indent");
    no_wrap.output.begin(hint(0)); // table index48=4, column0 underflows and wraps again.
    const auto line=no_wrap.output.window({1}).cursor.line;
    no_wrap.output.begin(hint(0x0f)); // index63=4 also uses the full helper semantics.
    check(no_wrap.output.indent_pending() && no_wrap.output.window({1}).cursor.line==line,
          "Repeated last-row overflow lost indentation or scrolled past the window");
    no_wrap.output.set_cursor({1},{1,1},2);
    const auto fitting=no_wrap.output.composition_snapshot();
    no_wrap.output.begin(hint(0x71));
    check(no_wrap.output.indent_pending() && no_wrap.output.window({1}).cursor==TextCursor{1,1} &&
          no_wrap.output.composition_snapshot()==fitting,
          "An actual fitting hint cleared preexisting indentation or partial composition");
}
void restored_raw_coordinates() {
    dialogue_test_assets::WindowInput input(eb::GameVersion::US);
    input.put(input.configs+4,10);input.put(input.configs+6,6);
    const auto resources=input.import();
    for(std::uint16_t column:{std::uint16_t(0x2000),std::uint16_t(0x2001),
                             std::uint16_t(0x8001),std::uint16_t(0xffff)})
        for(unsigned fraction:{0u,7u}) {
            State state;TextOutput output(fonts(eb::GameVersion::US),state);
            WindowHost windows(resources,state,output);
            auto open=windows.begin({WindowAction::Open,WindowId{0},{},0});
            while(open->advance()==OutputProgress::Suspended)open->respond();
            check(open->succeeded(),"Raw restoration fixture could not open its real window");
            output.set_cursor({0},{1,0},fraction);
            const auto before=output.frame({0});
            Conversation restore(program(eb::GameVersion::US,{2}),windows);restore.start(EntryId{0});
            auto saved=windows.save_attributes();saved.cursor={column,0};
            state.streams.at(state.stream_slot).saved_window=saved;
            check(next(restore)==Progress::Finished && output.window({0}).cursor==saved.cursor &&
                  output.fractional_offset()==fraction,"Actual window restore clipped authored cursor words");
            output.begin(hint(0x71));const bool wrapped=wraps(8,column,fraction,0,0x71);
            check(output.complete() && !output.effect() &&
                  output.window({0}).cursor==(wrapped?TextCursor{0,1}:saved.cursor) &&
                  output.fractional_offset()==(wrapped?0:fraction) && output.indent_pending()==wrapped,
                  "Width hint validated or clamped a raw restored source coordinate");
            check(output.frame({0})->pixels==before->pixels,
                  "A metadata-only raw restore or hint painted an out-of-rectangle cell");
        }
}
void conversations_and_ownership() {
    for(unsigned budget:{1u,4096u}) {
        Fixture f;f.output.set_cursor({1},{8,0},7);f.output.policy().instant=false;
        f.output.policy().text_speed=3;f.output.policy().sound_mode=2;
        const auto image=f.output.frame({1});const auto registers=f.state.window().active;
        Conversation c(program(eb::GameVersion::US,{0x1c,0x11,0x71,2}),f.state,f.output);
        c.start(EntryId{0});const auto initial=c.snapshot();
        check(c.advance(0)==Progress::BudgetExhausted && same(initial,c.snapshot()),"Zero conversation budget performed hint layout");
        rejects([&]{f.output.begin(hint(0x71));},"Standalone hint stole a conversation's output owner");
        rejects([&]{c.respond();},"Width hint invented an external conversation response");
        check(next(c,budget)==Progress::Finished && !c.event() && c.snapshot().returned_cursor==Location{1,4} &&
              f.output.window({1}).cursor==TextCursor{0,1} && f.output.indent_pending(),
              "Conversation leaked width hint or skipped actual synchronous layout");
        check(f.output.frame({1})->pixels==image->pixels && f.state.window().active==registers,
              "Width-only conversation drew glyphs or published registers");
        const auto done=c.snapshot();check(c.advance()==Progress::Finished && same(done,c.snapshot()),
                                          "Finished width-only conversation replayed bytes");
    }
    Fixture f;f.output.set_cursor({1},{6,0},7);
    f.output.policy().instant=false;f.output.policy().sound_mode=3;f.output.policy().text_speed=0;
    Conversation parent(program(eb::GameVersion::US,{0x71,2}),f.state,f.output);
    parent.start(EntryId{0});
    check(next(parent)==Progress::Suspended && std::holds_alternative<TextEffect>(*parent.event()) &&
          std::get<TextEffect>(*parent.event()).kind==TextEffectKind::WindowTick,
          "Nested hint fixture lacks actual parent glyph tick");
    const auto event=parent.event();const auto snapshot=parent.snapshot();
    Conversation child(program(eb::GameVersion::US,{0x1c,0x11,0x4f,2}),f.state,f.output);
    child.start_nested(EntryId{0},parent);
    rejects([&]{parent.advance();},"Parent advanced while nested width hint owns output");
    check(next(child)==Progress::Finished && !child.event(),"Nested width hint created extra sound/frame effect");
    check(parent.event()==event && same(parent.snapshot(),snapshot) && f.output.indent_pending(),
          "Nested hint lost parent event or failed to update shared layout");
    parent.respond();check(next(parent)==Progress::Finished,"Parent glyph failed to return after nested hint");
    Fixture busy;busy.output.policy().instant=false;busy.output.policy().sound_mode=2;
    busy.output.begin(glyph(0x71));check(busy.output.advance()==OutputProgress::Suspended,"Busy glyph lacked audio boundary");
    rejects([&]{busy.output.begin(hint(0x71));},"Hint replaced a pending glyph continuation");
    while(busy.output.advance()==OutputProgress::Suspended)busy.output.respond();
}
void japanese_and_missing_owner() {
    State state;Runtime jp(program(eb::GameVersion::JP,{0x1c,0x11,2}),state);jp.start(EntryId{0});
    check(next(jp)==Progress::Suspended && jp.request()->kind==RequestKind::RefreshParty &&
          jp.snapshot().consumed_bytes==2,"JP party-name command acquired a US operand");
    jp.respond();check(jp.request()->kind==RequestKind::PartyQuery,"JP formation lost first-conscious query");
    jp.respond({1});check(jp.request()->kind==RequestKind::Substitution && jp.request()->count==1,
                         "JP formation lost name substitution");
    jp.respond();check(jp.request()->kind==RequestKind::PartyQuery,"JP formation lost late conscious-count query");
    jp.respond({1});check(next(jp)==Progress::Finished && jp.returned_cursor()==Location{1,3},
                         "JP operandless formation consumed its following terminator");
    Fixture japanese(eb::GameVersion::JP);const auto before=japanese.output.window({1});
    rejects([&]{japanese.output.begin(hint(0x71));},"JP output accepted the US width helper");
    check(japanese.output.window({1})==before,"Rejected regional helper mutated JP layout");
    Fixture absent;absent.state.focus.reset();
    rejects([&]{absent.output.begin(hint(0x71));},"Width helper invented an ambient US window owner");
    check(absent.output.window({1}).cursor==TextCursor{},"Missing-focus helper mutated an unrelated window");
}
} // namespace
int main() {
    try {
        parser_bytes_and_fallback();dictionary_operands();output_matrix();newline_scroll_and_indent();
        restored_raw_coordinates();
        conversations_and_ownership();japanese_and_missing_owner();
        std::cout<<"native dialogue width-hint checks="<<checks<<"\n";
    }catch(const std::exception& e){std::cerr<<e.what()<<"\n";return 1;}
}
