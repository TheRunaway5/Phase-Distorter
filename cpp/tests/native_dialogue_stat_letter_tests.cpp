#include "native_dialogue_stat_letter_fixture.hpp"
namespace {
using namespace stat_letter_test;
void parser(eb::GameVersion version) {
  d::State state;
  state.dummy.active={0x12345678,91,7};
  d::Runtime runtime(program(version,{0x19,0x28,0,2}),state);
  runtime.start(d::EntryId{0});
  while(runtime.advance(1)==d::Progress::BudgetExhausted){}
  check(runtime.request() && runtime.request()->kind==d::RequestKind::StatLetter &&
        runtime.request()->count==0 && runtime.request()->selector==0x28,
        "Stat letter literal0 became a fallback or unsupported command");
  check(state.dummy.active==d::Registers{0x12345678,91,7},
        "Parser mutated registers before actual stat query completion");
  runtime.respond({0x12fe});
  while(runtime.advance(1)!=d::Progress::Finished){}
  check(state.dummy.active==d::Registers{0xfe,91,7} && runtime.returned_cursor()==d::Location{0,4},
        "Stat letter byte result did not replace complete working memory");
  for(auto bytes:{std::vector<std::uint8_t>{0x19},std::vector<std::uint8_t>{0x19,0x28}}) {
    d::State truncated;
    d::Runtime bad(program(version,bytes),truncated);bad.start(d::EntryId{0});
    rejects([&]{while(bad.advance(1)!=d::Progress::Finished){};},
            "Truncated stat letter command was accepted");
  }
}
void live_fields(eb::GameVersion version) {
  Fixture f(version);
  for(unsigned id=1;id<=4;++id) {
    auto name=f.party.name_field(id);
    for(unsigned i=0;i<name.size();++i)name[i]=std::uint8_t(i==1?0:0x81+id*7+i);
    const unsigned descriptor=8+(id-1)*22;
    for(unsigned i=1;i<=name.size();++i)
      check(f.run(descriptor,std::uint16_t(i))==name[i-1],
            "Stat letter lost a raw live name byte or stopped at NUL");
    check(f.run(descriptor,std::uint16_t(name.size()+1))==0,
          "Stat letter did not return0 above the raw string tag");
    name[0]^=0xff;
    check(f.run(descriptor,1,999)==name[0],"Stat letter cached mutable party names");
  }
  f.party.character(1).experience=0x80ff0071;
  for(unsigned i=1;i<=4;++i)
    check(f.run(10,std::uint16_t(i))==std::uint8_t(0x80ff0071u>>((i-1)*8)),
          "Stat letter numeric bytes changed source little-endian order");
  check(f.catalog->stat_tag(10)==0x84 && f.run(10,0x85)==0 && f.run(10,0xffff)==0,
        "Stat letter masked the source numeric descriptor tag");
  check(f.run(0,1)==0,"Null descriptor above-tag case read an invented field");
  for(auto [descriptor,index]:{std::pair{8u,0u},std::pair{10u,5u},std::pair{96u,1u}}) {
    Fixture bad(version);
    rejects([&]{(void)bad.run(descriptor,std::uint16_t(index));},
            "Unowned adjacent stat bytes were fabricated");
  }
}
}
int main() {
  try {
    for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}){parser(version);live_fields(version);}
    std::cout<<"Native stat letter: "<<stat_letter_test::checks<<" checks passed\n";
    return 0;
  } catch(const std::exception &error) {std::cerr<<error.what()<<'\n';return 1;}
}
