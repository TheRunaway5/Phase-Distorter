#include "native_dialogue_item_query_fixture.hpp"
int main() {
    using namespace item_query_test;
    try {
        for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
            d::State state;
            state.dummy.active={0xabcdef01,0x43210007,0x9876};
            d::Runtime parser(program(version,{0x19,0x21,0,2}),state);
            parser.start(d::EntryId{0});
            while(parser.advance(1)==d::Progress::BudgetExhausted){}
            check(parser.request() && parser.request()->kind==d::RequestKind::ItemQuery &&
                  parser.request()->item_query==d::ItemQueryRequest{d::ItemQueryKind::Subtype2,7},
                  "Item query fallback did not preserve the low argument word");
            check(state.dummy.active.working==0xabcdef01,"Item query parser wrote before its actual owner");
            parser.respond({0xff80});
            while(parser.advance(1)!=d::Progress::Finished){}
            check(state.dummy.active==d::Registers{0xff80,0x43210007,0x9876},"Item query result was not zero-extended");
            for(auto bytes:{std::vector<std::uint8_t>{0x19},std::vector<std::uint8_t>{0x19,0x21}}) {
                d::State truncated;d::Runtime bad(program(version,bytes),truncated);bad.start(d::EntryId{0});
                rejects([&]{while(bad.advance(1)!=d::Progress::Finished){};},"Truncated item query was accepted");
            }
            auto image=content(version,{});
            const bool jp=version==eb::GameVersion::JP;
            const unsigned base=jp?0x157000:0x155000,stride=jp?24:39,name=jp?10:25;
            for(unsigned id=0;id<254;++id)image[base+id*stride+name]=std::uint8_t(id);
            Fixture f(version,image);
            for(unsigned id=0;id<254;++id) {
                const unsigned expected=(id&12)==4?2:(id&12)==8?3:1;
                check(query(f,0,0xabcd0000u|id,id&1?1:4096)==expected,"Item subtype lost authored type bits");
                if(id)check(query(f,std::uint8_t(id),0xffffffff,17)==expected,"Nonzero item literal used argument fallback");
            }
            for(unsigned item:{254u,255u,256u,65535u}) {
                Fixture bad(version,image);
                rejects([&]{query(bad,0,item);},"Item query truncated or fabricated an unowned item record");
            }
            image[base+10*stride+name]=0x20;image[base+11*stride+name]=0x28;image[base+12*stride+name]=0x28;
            Fixture condiments(version,image);
            std::array<std::uint8_t,14> inventory{};
            for(unsigned slot=0;slot<14;++slot) {
                inventory.fill(1);inventory[slot]=11;
                check(condiments.catalog->find_condiment(10,inventory)==11,"Condiment lookup missed the first matching item");
                if(slot) {inventory[slot-1]=0;check(condiments.catalog->find_condiment(10,inventory)==0,"Condiment lookup scanned past empty inventory");}
            }
            inventory.fill(1);inventory[0]=11;inventory[1]=12;
            check(condiments.catalog->find_condiment(10,inventory)==11 && condiments.catalog->find_condiment(11,inventory)==0,
                  "Condiment lookup reordered items or accepted a nonfood operand");
            check(query(condiments,1,0x1234,1,0x25)==0,"Nonfood condiment query unnecessarily required an attacker");
            d::Conversation unbound(program(version,{0x19,0x25,0,2}),condiments.windows);
            condiments.state.window().active.argument=0xabcd010a;unbound.start(d::EntryId{0});
            while(unbound.advance(1)==d::Progress::BudgetExhausted){}
            check(unbound.event() && std::get<d::Request>(*unbound.event()).item_query==
                  d::ItemQueryRequest{d::ItemQueryKind::FindCondiment,0x010a},
                  "Condiment query guessed a missing live attacker owner");
        }
        std::cout<<"Native item query: "<<checks<<" checks passed\n";
        return 0;
    }catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}
}
