#include "eb/native/dialogue/import.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
using namespace eb::native::dialogue;
namespace {
void require(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F f) { bool failed=false; try { f(); } catch (const std::exception&) { failed=true; } require(failed,"Malformed import was accepted"); }
ReferenceKey ref(unsigned value) { return {std::uint8_t(value), std::uint8_t(value>>8), std::uint8_t(value>>16), std::uint8_t(value>>24)}; }
}
int main() {
 try {
    std::vector<std::uint8_t> image(0x300000);
    for (unsigned i=0;i<768;++i) {
        const auto pointer=0xc8bc2d+i*2;
        for(unsigned b=0;b<4;++b) image[0x8cded+i*4+b]=pointer>>(b*8);
        image[0x8bc2d+i*2]=0x40+(i%32);
    }
    for (const auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {
        auto imported=import_program(image,region);
        require(imported.program->entry_count()==(region==eb::GameVersion::US?62:59),"Regional section inventory changed");
        require(imported.sections.size()==imported.program->entry_count(),"Missing navigation labels");
        const auto alternate = std::find_if(imported.sections.begin(), imported.sections.end(),
            [](const auto &section) { return section.name == "UNKNOWN_C9992F"; });
        require(alternate != imported.sections.end(), "Missing authored alternate NPC text section");
        const unsigned alternate_offset = region == eb::GameVersion::US ? 0x09992f : 0x098000;
        const unsigned alternate_bytes = region == eb::GameVersion::US ? 0x18f7 : 0x1707;
        require(((unsigned(alternate->begin.page) << 16) | alternate->begin.offset) == alternate_offset &&
                alternate->bytes == alternate_bytes, "Alternate NPC text relocation changed");
        for(unsigned i=0;i<imported.program->entry_count();++i) {
            const auto at=imported.program->entry({i});
            const auto offset=(at.page<<16)|at.offset;
            require(imported.program->resolve(ref(0xc00000+offset))==at,"Relocation changed section root");
            require(imported.program->byte(at)==image.at(offset),"Imported bytes changed");
        }
        require(!imported.program->resolve({}),"Null dialogue call became content");
        rejects([&]{imported.program->resolve(ref(0xc186b1));});
        rejects([&]{imported.program->byte({1,0x86b1});});
        if(region==eb::GameVersion::US) {
            for(unsigned i=0;i<768;++i) require(imported.program->byte(imported.program->dictionary_entry(i))==0x40+(i%32),"Dictionary relocation mismatch");
            const auto first=imported.program->entry({0});
            image[(first.page<<16)|first.offset]^=0x55;
            require(imported.program->byte(first)!=image[(first.page<<16)|first.offset],"Program borrows mutable image storage");
            image[(first.page<<16)|first.offset]^=0x55;
        } else rejects([&]{imported.program->dictionary_entry(0);});
    }
    rejects([&]{import_program(std::span(image).first(image.size()-1),eb::GameVersion::US);});
    rejects([&]{import_program(image,static_cast<eb::GameVersion>(9));});
    image[0x8cded+2]=0xc1;
    rejects([&]{import_program(image,eb::GameVersion::US);});
    image[0x8cded+2]=0xc8;
    std::fill(image.begin()+0x8bc2d,image.begin()+0x8cded,0x42);
    rejects([&]{import_program(image,eb::GameVersion::US);});
    std::cout<<"PASS: US/JP content import, dictionary relocation, ownership, region and invalid-content guards\n";
    return 0;
 } catch(const std::exception& e) {std::cerr<<e.what()<<'\n';return 1;}
}
