#include "eb/native/party/queries.hpp"
#include <iostream>
#include <stdexcept>
#include <type_traits>

namespace {
using namespace eb::native::party;
unsigned checks{};
void check(bool ok,const char* message) { ++checks; if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F f,const char* message) {
    bool failed=false; try { f(); } catch (const std::out_of_range&) { failed=true; }
    check(failed,message);
}
void run(eb::GameVersion region) {
    static_assert(!std::is_constructible_v<Queries,State&&>);
    State state(region);
    Queries query(state);
    state.party_order={6,4,2,0,0,0};
    state.controlled_order={3,1,5,0,0,0};
    state.display_order={2,4,6,17,0,255};
    state.party_count=3; state.controlled_count=1;
    for (unsigned i=0;i<6;++i)
        check(query.display_character(std::uint16_t(i+1))==state.display_order[i],
              "Display lookup substituted membership/count/record order");
    state.display_order[0]=3;
    check(query.display_character(1)==3,"Display query cached a stale party snapshot");
    for (auto position:{0u,7u,0x100u,0xffffu})
        rejects([&]{query.display_character(std::uint16_t(position));},"Display index escaped its physical list");
    for (unsigned id=1;id<=6;++id) for (unsigned group=1;group<=7;++group)
        state.character(id).afflictions[group-1]=std::uint8_t(id*31+group);
    for (unsigned raw=0;raw<256;++raw) {
        state.party_status=std::uint8_t(raw); state.controlled_count=std::uint8_t(raw);
        check(query.controlled_count()==raw,"Controlled count was normalized or narrowed");
        state.party_count=255;
        check(query.status(0xffff,8)==raw+1,"Global status read membership or narrowed raw+1");
        state.party_count=3;
        state.character(4).afflictions[6]=std::uint8_t(raw);
        check(query.status(4,7)==raw+1,"Present raw status did not preserve its ninth result bit");
    }
    check(query.status(2,1)==64,"Status failed to use the selected actual record/group");
    check(query.status(3,1)==0 && query.status(0x104,1)==0,"Absent/full-word member test fabricated a match");
    check(query.status(3,0)==0 && query.status(3,0xffff)==0,
          "Absent member incorrectly performed an affliction access");
    state.party_count=4;
    check(query.status(0,0xffff)==0,"A matched zero was treated as a valid character");
    rejects([&]{query.status(4,0);},"Present group zero silently read adjacent source fields");
    rejects([&]{query.status(4,9);},"Present out-of-range group silently read adjacent source fields");
    state.party_order[3]=17;
    rejects([&]{query.status(17,1);},"Authored guest ID was assumed to own a character record");
    state.party_count=0;
    check(query.status(17,1)==0,"Empty membership did not return zero");
    state.party_count=7;
    check(query.status(4,1)==126,"Oversized membership count rejected an owned early match");
    rejects([&]{query.status(5,1);},"Membership scan exceeded six owned bytes");
    state.party_count=255;
    check(query.status(0,0xffff)==0,"Oversized membership count rejected an owned zero match");
    state.party_count=1;state.party_order[0]=6;
    check(query.status(6,1)==188 && query.status(4,1)==0,"Queries did not observe live list replacement");
}
}
int main() {
    try { run(eb::GameVersion::US);run(eb::GameVersion::JP);std::cout<<"PASS native party queries: "<<checks<<" checks\n"; }
    catch(const std::exception& e) {std::cerr<<e.what()<<'\n';return 1;}
}
