#include "eb/native/world_teleport_resources.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
namespace {
unsigned checks;
void check(bool value,const char *message) {++checks;if(!value)throw std::runtime_error(message);}
template<class F> void rejects(F f) {bool failed{};try{f();}catch(const std::exception&){failed=true;}check(failed,"Invalid teleport content domain accepted");}
void region(eb::GameVersion version) {
    using namespace eb::native;
    const unsigned base=version==eb::GameVersion::US?0x15ebab:0x15eb0b;
    std::vector<std::uint8_t> image(base+234*8);
    for(unsigned i=0;i<234*8;++i)image[base+i]=std::uint8_t(i*19+241);
    for(unsigned i=0;i<34*12;++i)image[0x101400+i]=std::uint8_t(i*13+7);
    image[0x101400]=255;
    const WorldTeleportResources resources(image,version);
    const auto word=[&](unsigned at){return std::uint16_t(image[at]|unsigned(image[at+1])<<8);};
    check(resources.version()==version,"Resource region changed");
    const eb::native::dialogue::ReferenceKey expected_buzz=version==eb::GameVersion::US?
        eb::native::dialogue::ReferenceKey{0x35,0xea,0xc5,0}:
        eb::native::dialogue::ReferenceKey{0x25,0x04,0xc5,0};
    check(resources.buzz_buzz_message()==expected_buzz,"Teleport nested BuzzBuzz reference changed region");
    for(unsigned i=0;i<234;++i) {
        const auto at=base+i*8;
        check(resources.destination(i)==TeleportDestination{word(at),word(at+2),image[at+4],image[at+5],word(at+6)},
              "General teleport record lost packed bits or used PSI layout");
    }
    for(unsigned i=0;i<34;++i) {
        const auto at=0x101400+i*12;
        check(resources.transition(i)==ScreenTransitionConfig{image[at],image[at+1],image[at+2],image[at+3],image[at+4],word(at+5),
              image[at+7],image[at+8],image[at+9],image[at+10],image[at+11]},"Screen transition settings changed packed field widths/order");
        check(resources.transition(i).effective_duration()==(image[at]==255?900u:unsigned(image[at])),
              "Screen transition duration sentinel differs");
    }
    const auto retained=resources.destination(0);image[base]^=255;
    check(resources.destination(0)==retained,"Imported teleport destination aliases mutable input");
    rejects([&]{(void)resources.destination(234);});rejects([&]{(void)resources.transition(34);});
    rejects([&]{WorldTeleportResources bad(std::span<const std::uint8_t>(image).first(image.size()-1),version);});
    rejects([&]{WorldTeleportResources bad(std::span<const std::uint8_t>(image).first(0x101400+34*12-1),version);});
}
}
int main() {try{region(eb::GameVersion::US);region(eb::GameVersion::JP);
    std::cout<<"Native general teleport resources: "<<checks<<" checks passed\n";return 0;
}catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}}
