#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/party/queries.hpp"
#include "native_dialogue_test_assets.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
namespace party = eb::native::party;
unsigned checks{};
void check(bool ok, const char *message) { ++checks; if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F action, const char *message) {
    bool caught{}; try { action(); } catch (const std::exception &) { caught = true; }
    check(caught,message);
}
auto program(eb::GameVersion version,std::vector<std::uint8_t> bytes) {
    return std::make_shared<Program>(version,std::vector<ContentBlock>{{0,0,std::move(bytes)}},
                                    std::vector<Location>{{0,0}});
}
void pending(Runtime &runtime) {
    const auto before=runtime.snapshot();const auto request=runtime.request();
    for (auto budget:{0u,1u,4096u})
        check(runtime.advance(budget)==Progress::Suspended && runtime.request()==request &&
              runtime.snapshot().consumed_bytes==before.consumed_bytes && runtime.snapshot().frames==before.frames,
              "Pending party query consumed bytes or changed its captured operands");
}
void operands(eb::GameVersion version) {
    for (unsigned value=0;value<256;++value) for (unsigned budget:{1u,4096u}) {
        const auto literal=std::uint8_t(value);
        for (unsigned command=0;command<3;++command) {
            State state;state.dummy.active={0xfabc0102,0xdabc0304,0x56};
            const auto bytes=command==0 ? std::vector<std::uint8_t>{0x19,0x10,literal,0x41,2} :
                command==1 ? std::vector<std::uint8_t>{0x19,0x16,literal,literal,0x41,2} :
                             std::vector<std::uint8_t>{0x1d,0x0d,literal,literal,literal,0x41,2};
            Runtime runtime(program(version,bytes),state);runtime.start(EntryId{0});
            while(runtime.advance(budget)==Progress::BudgetExhausted) {}
            const auto &r=*runtime.request();
            check(r.kind==RequestKind::PartyQuery && r.source==Location{0,0} && r.party_query,
                  "Party query lost its command source or typed request");
            const auto &q=*r.party_query;
            if(command==0) check(q.kind==PartyQueryKind::DisplayCharacter && q.position==(value?value:0x0304),
                                  "Formation position was normalized or used the wrong fallback word");
            else check(q.kind==(command==1?PartyQueryKind::Status:PartyQueryKind::StatusEquals) &&
                       q.character==(value?value:0x0102) && q.group==(value?value:0x0304) &&
                       q.expected_status==(command==1?0:value),"Status query changed raw bytes or resolved wrong fallbacks");
            pending(runtime);
            runtime.respond({0x0100});
            check(state.dummy.active.working==0x0100 && state.dummy.active.argument==0xdabc0304 &&
                  state.dummy.active.secondary==0x56,"Query result was not zero-extended or changed unrelated registers");
            while(runtime.advance(budget)==Progress::BudgetExhausted) {}
            check(runtime.request()->kind==RequestKind::Glyph && runtime.request()->glyph==0x41,
                  "Party query consumed the next glyph as an operand");
            runtime.respond();while(runtime.advance(budget)==Progress::BudgetExhausted) {}
            check(runtime.returned_cursor()==Location{0,std::uint16_t(bytes.size())},"Query changed the returned stream cursor");
        }
    }
}
void late_operands_and_live_focus(eb::GameVersion version) {
    State state;state.dummy.active={0xabc00001,0xdef00002,3};
    Runtime runtime(program(version,{0x1d,0x0d,0,0,1,2}),state);runtime.start(EntryId{0});
    check(runtime.advance(4)==Progress::BudgetExhausted && !runtime.request(),"Predicate resolved before its final byte");
    // Diagnostic scheduling probes, not source gameplay callbacks.
    state.dummy.active.working=0xface0006;state.dummy.active.argument=0xcafe0008;
    check(runtime.advance(1)==Progress::Suspended && runtime.request()->party_query->character==6 &&
          runtime.request()->party_query->group==8,"Fallback was captured before complete operands");
    state.windows.emplace(WindowId{7},WindowState{});state.focus=WindowId{7};
    state.window().active.working=0xffffffff;
    runtime.respond({1});
    check(state.window().active.working==1 && state.dummy.active.working==0xface0006,
          "Query publication reused a stale register bank");
    check(runtime.advance()==Progress::Finished,"Predicate did not return after response");
    State count;Runtime immediate(program(version,{0x19,0x20,0x1c,4,2}),count);immediate.start(EntryId{0});
    check(immediate.advance(2)==Progress::Suspended && immediate.request()->party_query->kind==PartyQueryKind::ControlledCount,
          "Controlled-count query consumed an operand");
    immediate.respond({0xff});
    check(immediate.advance(2)==Progress::Suspended && immediate.request()->kind==RequestKind::ShowMeters &&
          !immediate.request()->party_query && count.dummy.active.working==0xff,
          "Show-meters command inherited query state or consumed an operand");
    immediate.respond();check(immediate.advance()==Progress::Finished,"Show meters changed the stream extent");
    State unsupported;Runtime unknown(program(version,{0x19,0x11,0x17,2}),unsupported);unknown.start(EntryId{0});
    check(unknown.advance()==Progress::Suspended && unknown.request()->kind==RequestKind::UnsupportedCommand &&
          unknown.snapshot().consumed_bytes==2,"Adjacent unported selector was guessed or consumed operands");
    rejects([&]{unknown.respond();},"Unknown selector was silently acknowledged");
}
void native_binding(eb::GameVersion version) {
    dialogue_test_assets::WindowInput assets(version);dialogue_test_assets::add_text_fonts(assets);
    auto fonts=FontResources::import(assets.image,version);
    State state;TextOutput output(fonts,state);WindowHost host(assets.import(),state,output);
    party::State party(version),other(version);
    party.display_order={4,3,0,1,255,2};party.party_order={4,1,0,0,0,0};party.party_count=2;
    party.controlled_count=3;party.character(4).afflictions[0]=255;party.party_status=255;
    PartyQueryRequest query{PartyQueryKind::DisplayCharacter,1};
    check(!host.query_party(query),"Unbound host invented a party query result");
    host.bind_party(party);host.bind_party(party);
    check(host.query_party(query)==4,"Formation query substituted membership or control order");
    rejects([&]{host.bind_party(other);},"Recursive host accepted a different party identity");
    auto stream=program(version,{0x19,0x16,4,1,2});Conversation conversation(stream,host);conversation.start(EntryId{0});
    check(conversation.advance()==Progress::Finished && state.dummy.active.working==256,
          "Bound conversation did not execute raw status through shared party state");
    party.character(4).afflictions[0]=1;conversation.start(EntryId{0});
    check(conversation.advance()==Progress::Finished && state.dummy.active.working==2,
          "Conversation cached party data instead of reading the live owner");
    Conversation predicate(program(version,{0x1d,0x0d,4,1,2,2}),host);predicate.start(EntryId{0});
    check(predicate.advance()==Progress::Finished && state.dummy.active.working==1,
          "Status predicate compared authored code against the raw affliction byte");
    Conversation absent(program(version,{0x1d,0x0d,2,0xff,0,2}),host);absent.start(EntryId{0});
    check(absent.advance()==Progress::Finished && state.dummy.active.working==1,
          "Absent status predicate touched an unowned group or failed zero comparison");
    Conversation global(program(version,{0x19,0x16,0xff,8,2}),host);global.start(EntryId{0});
    check(global.advance()==Progress::Finished && state.dummy.active.working==256,
          "Global party status incorrectly required membership");
    State external_state;TextOutput external_output(fonts,external_state);
    Conversation external(program(version,{0x19,0x20,2}),external_state,external_output);external.start(EntryId{0});
    check(external.advance()==Progress::Suspended && std::get<Request>(*external.event()).kind==RequestKind::PartyQuery,
          "Output-only conversation swallowed a missing party service");
    external.respond({5});check(external.advance()==Progress::Finished && external_state.dummy.active.working==5,
          "External party response did not publish through Runtime");
}
}
int main() {
    try {
        for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
            operands(version);late_operands_and_live_focus(version);native_binding(version);
        }
        std::cout<<"Native dialogue party query: "<<checks<<" checks passed\n";
    } catch(const std::exception &error) { std::cerr<<error.what()<<'\n';return 1; }
}
