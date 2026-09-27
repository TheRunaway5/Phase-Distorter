// Executes independent SingleStepTests/65816 vectors against translated
// instruction semantics. This checks registers and memory, not bus phases.
#include "eb/cpu.hpp"
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
#include <unordered_set>
namespace {
#include "../src/opcodes.inc"
unsigned length(unsigned opcode, const eb::Cpu& c) {
    auto mode=instruction_set[opcode].mode;
    if(mode==Mode::imp || mode==Mode::acc) return 1;
    if(mode==Mode::lng || mode==Mode::lngx) return 4;
    if(mode==Mode::abs || mode==Mode::absx || mode==Mode::absy || mode==Mode::ind || mode==Mode::indx || mode==Mode::indl || mode==Mode::move || mode==Mode::rel16) return 3;
    if(mode==Mode::imm) {
        if(opcode==0xf4) return 3;
        bool index=opcode==0xa0||opcode==0xa2||opcode==0xc0||opcode==0xe0;
        return 2+(!(c.p&(index?16:32)));
    }
    return 2;
}
}
int main(int argc,char** argv) {
    using nlohmann::json;
    std::vector<std::uint8_t> memory(0x1000000);
    eb::Cpu c(memory);
    unsigned long total=0, failed=0, limit=10000;
    bool check_cycles=false;
    std::filesystem::path corrections;
    std::unordered_set<unsigned> writes;
    c.observe_write=[&](unsigned address,std::uint8_t) { writes.insert(address); };
    for(int file=1;file<argc;++file) {
        if(std::string(argv[file])=="--corrections" && file+1<argc) {corrections=argv[++file];continue;}
        if(std::string(argv[file])=="--cycles") {check_cycles=true;continue;}
        if(std::string(argv[file])=="--limit" && file+1<argc) {limit=std::stoul(argv[++file]);continue;}
        std::filesystem::path path=argv[file];
        if(!corrections.empty() && std::filesystem::exists(corrections/path.filename())) {
            path=corrections/path.filename();
            std::cout<<"Using external corrected input "<<path<<'\n';
        }
        std::ifstream input(path); if(!input) {std::cerr<<"Cannot open "<<argv[file]<<'\n';return 2;}
        auto vectors=json::parse(input); unsigned count=0, file_failed=0;
        for(const auto& test:vectors) {
            if(count++>=limit) break;
            writes.clear();
            auto init=test["initial"], final=test["final"];
            c.a=init["a"];c.x=init["x"];c.y=init["y"];c.s=init["s"];c.d=init["d"];c.dbr=init["dbr"];c.p=init["p"];c.e=init["e"].get<unsigned>();
            // In emulation mode S high is physically fixed at $01. The
            // vector format intentionally leaves random bits in initial.s.
            if(c.e) c.s=0x100|(c.s&0xff);
            c.pc=init["pc"].get<unsigned>()|(init["pbr"].get<unsigned>()<<16);c.waiting=c.stopped=false;
            for(auto cell:init["ram"]) memory[cell[0].get<unsigned>()]=cell[1];
            const auto opcode=memory[c.pc];const auto len=length(opcode,c);unsigned operand=0;
            for(unsigned i=1;i<len;++i) operand|=memory[(c.pc&0xff0000)|std::uint16_t(c.pc+i)]<<(8*(i-1));
            const auto before_cycles=c.cycles;
            unsigned partial_fetch=0;
            if(opcode==0x44 || opcode==0x54) {
                // Block-move vectors stop after 100 clocks, often two bytes
                // into the next fetch. Execute their complete seven-cycle
                // iterations and account for that observation point in PC.
                for(unsigned n=0;n<test["cycles"].size()/7;++n)
                    c.execute_opcode(opcode,operand,len);
                partial_fetch=test["cycles"].size()%7;
            } else c.execute_opcode(opcode,operand,len);
            json actual={{"a",c.a},{"x",c.x},{"y",c.y},{"s",c.s},{"d",c.d},{"dbr",c.dbr},{"p",c.p},{"e",unsigned(c.e)},{"pc",(c.pc+partial_fetch)&0xffff},{"pbr",c.pc>>16}};
            bool ok=true;std::string difference;
            if(check_cycles && opcode!=0xcb && opcode!=0xdb && c.cycles-before_cycles+partial_fetch!=test["cycles"].size()) {
                ok=false;difference+="cycles:"+std::to_string(c.cycles-before_cycles+partial_fetch)+" expected "+std::to_string(test["cycles"].size())+"; ";
            }
            for(auto it=actual.begin();it!=actual.end();++it) if(it.value()!=final[it.key()]) {ok=false;difference+=it.key()+":"+it.value().dump()+" expected "+final[it.key()].dump()+"; ";}
            for(auto cell:final["ram"]) if(memory[cell[0].get<unsigned>()]!=cell[1]) {ok=false;difference+="mem["+cell[0].dump()+"]="+std::to_string(memory[cell[0].get<unsigned>()])+" expected "+cell[1].dump()+"; ";}
            for(auto cell:final["ram"]) writes.erase(cell[0].get<unsigned>());
            for(auto address:writes) {ok=false;difference+="unexpected write to "+std::to_string(address)+"; ";}
            ++total;if(!ok) {++failed;if(file_failed++<3) std::cerr<<test["name"]<<" "<<difference<<'\n';}
        }
        if(file_failed) std::cerr<<argv[file]<<": "<<file_failed<<" failed\n";
    }
    std::cout<<total<<" vectors, "<<failed<<" failures (registers/memory"<<(check_cycles?"/cycle counts":" only")<<")\n";
    return failed?1:0;
}
