// Native-only local-import probe. No reference CPU, bus or source dispatch.
#include "eb/native/dialogue/import.hpp"
#include "eb/asset_store.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <stdexcept>
using namespace eb::native::dialogue;
namespace {
void require(bool ok,const char* message) { if(!ok) throw std::runtime_error(message); }
}
int main(int argc,char** argv) {
 try {
    if(argc<2) throw std::invalid_argument("Pass one or more local regional .ebpak paths");
    for(int i=1;i<argc;++i) {
        auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
        auto imported=import_program(assets.image,assets.version);
        unsigned dictionary_bytes=0, text_bytes=0;
        for(unsigned root=0;root<imported.program->entry_count();++root) {
            const auto at=imported.program->entry({root});
            const auto& section=imported.sections.at(root);
            require(section.begin==at,"Section navigation differs from entry directory");
            for(unsigned j=0;j<section.bytes;++j) {
                const unsigned offset=((at.page<<16)|at.offset)+j;
                require(imported.program->byte({offset>>16,std::uint16_t(offset)})==assets.image.at(offset),
                        "Text section byte differs from validated import");
                ++text_bytes;
            }
        }
        if(assets.version==eb::GameVersion::US) {
            for(unsigned d=0;d<768;++d) {
                auto at=imported.program->dictionary_entry(d);
                unsigned remaining=65536;
                for(;;) {
                    require(remaining--!=0,"Dictionary loop");
                    const auto value=imported.program->byte(at);
                    require(value==assets.image.at((at.page<<16)|at.offset),"Dictionary byte differs from imported source");
                    ++dictionary_bytes;
                    if(!value) break;
                    at=Program::advance(at);
                }
            }
        }
        std::cout<<(assets.version==eb::GameVersion::US?"US":"JP")
                 <<" sections="<<imported.program->entry_count()<<" text_bytes="<<imported.text_bytes
                 <<" text_bytes_compared="<<text_bytes
                 <<" dictionary_owned_bytes="<<imported.dictionary_bytes
                 <<" dictionary_bytes_compared="<<dictionary_bytes
                 <<" original_image_sha256="<<eb::sha256(assets.image)
                 <<" native-only import exact\n";
    }
    return 0;
 }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
