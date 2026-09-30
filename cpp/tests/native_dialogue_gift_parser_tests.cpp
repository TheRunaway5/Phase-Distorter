#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/party/state.hpp"
#include "native_dialogue_test_assets.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
namespace party=eb::native::party;
unsigned checks{};
void check(bool ok,const char* message) {++checks;if(!ok)throw std::runtime_error(message);}
template<class F> void rejects(F action,const char* message) {
    bool rejected{};try{action();}catch(const std::exception&){rejected=true;}check(rejected,message);
}
auto program(eb::GameVersion region,std::vector<std::uint8_t> bytes) {
    return std::make_shared<Program>(region,std::vector<ContentBlock>{{0,0,std::move(bytes)}},std::vector<Location>{{0,0}});
}
void until_service(Runtime& runtime,unsigned budget) {while(runtime.advance(budget)==Progress::BudgetExhausted){}}
void item_operands(eb::GameVersion region) {
    for(unsigned literal=0;literal<256;++literal)for(unsigned budget:{1u,4096u})for(unsigned selector:{3u,8u,14u}) {
        State state;state.dummy.active={0xface0123,0xfedc0456,0x78};
        const auto byte=std::uint8_t(literal);
        const std::vector<std::uint8_t> bytes=selector==3?
            std::vector<std::uint8_t>{0x1d,3,byte,0x41,2}:
            std::vector<std::uint8_t>{0x1d,std::uint8_t(selector),byte,byte,0x41,2};
        Runtime vm(program(region,bytes),state);vm.start(EntryId{0});until_service(vm,budget);
        const auto request=*vm.request();
        check(request.kind==RequestKind::ItemCommand&&request.item_command&&request.source==Location{0,0},
              "Item operand handler did not retain its typed request and command source");
        const auto& command=*request.item_command;
        if(selector==3)check(command.kind==ItemCommandKind::FindSpace&&command.character==(literal?literal:0x456),
                             "FindSpace truncated a fallback word or chose the wrong register");
        if(selector==8)check(command.kind==ItemCommandKind::AddMoney&&command.amount==(literal?literal*257:0xfedc0456u),
                             "Wallet operand lost the full fallback DWORD or little-endian literal");
        if(selector==14)check(command.kind==ItemCommandKind::Give&&command.character==(literal?literal:0x123)&&
                              command.item==(literal?literal:0x456),"Give operands did not retain source fallback words");
        const auto consumed=vm.snapshot().consumed_bytes;
        for(auto b:{0u,1u,4096u})check(vm.advance(b)==Progress::Suspended&&vm.request()==request&&
                                      vm.snapshot().consumed_bytes==consumed,"Pending item command advanced authored data");
        rejects([&]{vm.respond();},"Item command accepted an omitted native result");
        check(state.dummy.active.working==0xface0123&&state.dummy.active.argument==0xfedc0456,
              "Rejected item result changed registers");
        Response response;response.item_result=ItemCommandResult{0x87654321,selector==14?std::optional<std::uint32_t>{13}:std::nullopt};
        vm.respond(response);
        check(state.dummy.active.working==0x87654321&&state.dummy.active.argument==(selector==14?13u:0xfedc0456u)&&
              state.dummy.active.secondary==0x78,"Item result publication lost DWORDs or changed unrelated registers");
        until_service(vm,budget);check(vm.request()->kind==RequestKind::Glyph&&vm.request()->glyph==0x41,
                                     "Item handler consumed its following glyph as an operand");
        vm.respond();until_service(vm,budget);check(vm.returned_cursor()==Location{0,std::uint16_t(bytes.size())},
                                                  "Item handler changed returned cursor extent");
    }
}
void publication(eb::GameVersion region) {
    State state;state.dummy.active={5,9,0x77};
    Runtime vm(program(region,{0x1d,14,0,0,2}),state);std::vector<Event> events;vm.observe([&](const Event& e){events.push_back(e);});
    vm.start(EntryId{0});until_service(vm,1);
    check(vm.request()->item_command->character==5&&vm.request()->item_command->item==9,"Give did not capture original operands");
    // The real gift service may refresh party/world state before returning.
    // Publication resolves the resulting live focus, not the old input bank.
    state.windows.emplace(WindowId{7},WindowState{});state.focus=WindowId{7};state.window().active={0x11111111,0x22222222,0x33};
    Response bad;bad.item_result=ItemCommandResult{1,{}};
    rejects([&]{vm.respond(bad);},"Give accepted missing post-receipt argument");
    Response result;result.item_result=ItemCommandResult{2,14};vm.respond(result);
    check(state.window().active.working==2&&state.window().active.argument==14&&state.window().active.secondary==0x33&&
          state.dummy.active==Registers{5,9,0x77},"Receipt wrote stale focus or changed other register banks");
    check(events.size()==2&&events[0].reg==RegisterKind::Argument&&events[0].value==14&&
          events[1].reg==RegisterKind::Working&&events[1].value==2,"Give published working before argument");
    check(vm.advance()==Progress::Finished,"Give did not return after completed service");
    for(unsigned selector:{3u,8u}) {
        State s;Runtime noarg(program(region,selector==3?std::vector<std::uint8_t>{0x1d,3,1,2}:
                                                         std::vector<std::uint8_t>{0x1d,8,1,0,2}),s);
        noarg.start(EntryId{0});until_service(noarg,1);
        rejects([&]{noarg.respond(result);},"Non-receipt command accepted an extra argument result");
    }
}
void gift_actions(eb::GameVersion region) {
    for(unsigned selector=0xa0;selector<=0xa2;++selector) {
        State state;state.dummy.active={0xdeadbeef,0xcafebabe,0x1234};
        Runtime vm(program(region,{0x1f,std::uint8_t(selector),0x41,2}),state);vm.start(EntryId{0});until_service(vm,1);
        check(vm.request()->kind==RequestKind::NpcGift&&vm.request()->npc_gift==
              (selector==0xa0?NpcGiftAction::Open:selector==0xa1?NpcGiftAction::Close:NpcGiftAction::IsOpen)&&
              vm.snapshot().consumed_bytes==2,"Gift action consumed an operand or requested the wrong service");
        vm.respond({1});check(state.dummy.active.working==(selector==0xa2?1u:0xdeadbeefu)&&
                             state.dummy.active.argument==0xcafebabe&&state.dummy.active.secondary==0x1234,
                             "Open/close gift action invented a register result");
        until_service(vm,1);check(vm.request()->kind==RequestKind::Glyph,"Gift action skipped the next glyph");
    }
    State state;Runtime unknown(program(region,{0x1f,0xa3,0x40,2}),state);unknown.start(EntryId{0});until_service(unknown,1);
    check(unknown.request()->kind==RequestKind::UnsupportedCommand&&unknown.snapshot().consumed_bytes==2,
          "Adjacent unported gift command consumed unknown inline data");
    rejects([&]{unknown.respond();},"Unported gift command was silently acknowledged");
}
void party_count(eb::GameVersion region) {
    dialogue_test_assets::WindowInput assets(region);dialogue_test_assets::add_text_fonts(assets);
    auto fonts=FontResources::import(assets.image,region);State state;TextOutput output(fonts,state);WindowHost windows(assets.import(),state,output);
    party::State party(region);windows.bind_party(party);
    for(unsigned count:{0u,1u,4u,255u})for(std::uint32_t amount:{0u,1u,4u,255u,256u,0x80000000u,0xffffffffu}) {
        party.controlled_count=std::uint8_t(count);state.dummy.active={0xfaceb00c,amount,0x7a};
        Conversation text(program(region,{0x1d,0x19,0,2}),windows);text.start(EntryId{0});
        check(text.advance()==Progress::Finished&&state.dummy.active.working==unsigned(count<amount)&&
              state.dummy.active.argument==amount&&state.dummy.active.secondary==0x7a,
              "1D19 failed full unsigned32 comparison against live controlled count");
    }
    for(unsigned literal=1;literal<256;++literal) {
        party.controlled_count=std::uint8_t(literal-1);state.dummy.active.argument=0xffffffff;
        Conversation text(program(region,{0x1d,0x19,std::uint8_t(literal),2}),windows);text.start(EntryId{0});
        check(text.advance()==Progress::Finished&&state.dummy.active.working==1,"1D19 ignored its nonzero literal");
    }
}
}
int main() {
    try {for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}){item_operands(region);publication(region);gift_actions(region);party_count(region);}
         std::cout<<"Native gift command parser: "<<checks<<" checks passed\n";
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
