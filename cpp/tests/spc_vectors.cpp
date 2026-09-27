// Independent SingleStepTests/spc700 architectural vectors; MMIO is bypassed.
// Pin: 67d15f492b2740964abd4efd1229e0ec9c342228, v1/*.json.
#include "eb/spc.hpp"
#include <nlohmann/json.hpp>
#include <array>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_set>

#ifdef EB_SPC_STANDALONE_TEST
namespace eb { bool spc_translated_step(Spc&) { return false; } }
#endif

namespace {
constexpr unsigned lengths[256]={
    1,1,2,3,2,3,1,2,2,3,3,2,3,1,3,1, 2,1,2,3,2,3,3,2,3,1,2,2,1,1,3,3,
    1,1,2,3,2,3,1,2,2,3,3,2,3,1,3,2, 2,1,2,3,2,3,3,2,3,1,2,2,1,1,2,3,
    1,1,2,3,2,3,1,2,2,3,3,2,3,1,3,2, 2,1,2,3,2,3,3,2,3,1,2,2,1,1,3,3,
    1,1,2,3,2,3,1,2,2,3,3,2,3,1,3,1, 2,1,2,3,2,3,3,2,3,1,2,2,1,1,2,1,
    1,1,2,3,2,3,1,2,2,3,3,2,3,2,1,3, 2,1,2,3,2,3,3,2,3,1,2,2,1,1,1,1,
    1,1,2,3,2,3,1,2,2,3,3,2,3,2,1,1, 2,1,2,3,2,3,3,2,3,1,2,2,1,1,1,1,
    1,1,2,3,2,3,1,2,2,3,3,2,3,2,1,1, 2,1,2,3,2,3,3,2,2,2,2,2,1,1,3,1,
    1,1,2,3,2,3,1,2,2,3,3,2,3,1,1,1, 2,1,2,3,2,3,3,2,2,2,3,2,1,1,2,1};
}

int main(int argc,char** argv) {
    using nlohmann::json;
    std::array<uint8_t,65536> memory{};
    eb::Spc s(memory);
    unsigned total=0, failed=0;
    std::unordered_set<uint16_t> writes;
    s.observe_write=[&](uint16_t address,uint8_t) { writes.insert(address); };
    for (int file=1;file<argc;++file) {
        std::ifstream input(argv[file]);
        if (!input) { std::cerr<<"Cannot open "<<argv[file]<<'\n'; return 2; }
        const auto vectors=json::parse(input);
        unsigned file_failed=0;
        for (const auto& test:vectors) {
            writes.clear();
            const auto& initial=test["initial"]; const auto& final=test["final"];
            s.pc=initial["pc"]; s.a=initial["a"]; s.x=initial["x"]; s.y=initial["y"]; s.sp=initial["sp"]; s.p=initial["psw"];
            s.stopped=s.sleeping=false;
            for (auto cell:initial["ram"]) memory[cell[0].get<unsigned>()]=cell[1];
            const auto opcode=memory[s.pc]; const auto length=lengths[opcode];
            uint16_t operand=0;
            for (unsigned i=1;i<length;++i) operand|=memory[uint16_t(s.pc+i)]<<(8*(i-1));
            const auto before=s.cycles;
            s.execute_opcode(opcode,operand,length);
            const json actual={{"pc",s.pc},{"a",s.a},{"x",s.x},{"y",s.y},{"sp",s.sp},{"psw",s.p}};
            bool ok=true; std::string difference;
            for (auto it=actual.begin();it!=actual.end();++it) if (it.value()!=final[it.key()]) {
                ok=false; difference+=it.key()+":"+it.value().dump()+" expected "+final[it.key()].dump()+"; ";
            }
            // SLEEP/STOP observation windows have no fixed instruction cycle count.
            if (opcode!=0xef && opcode!=0xff && s.cycles-before!=test["cycles"].size()) {
                ok=false; difference+="cycles:"+std::to_string(s.cycles-before)+" expected "+std::to_string(test["cycles"].size())+"; ";
            }
            for (auto cell:final["ram"]) {
                const unsigned address=cell[0];
                if (memory[address]!=cell[1]) { ok=false; difference+="mem["+std::to_string(address)+"]="+std::to_string(memory[address])+" expected "+cell[1].dump()+"; "; }
                writes.erase(address);
            }
            for (auto address:writes) { ok=false; difference+="unexpected write "+std::to_string(address)+"; "; }
            ++total;
            if (!ok) { ++failed; if(file_failed++<3) std::cerr<<test["name"]<<" "<<difference<<'\n'; }
        }
        if (file_failed) std::cerr<<argv[file]<<": "<<file_failed<<" failed\n";
    }
    std::cout<<total<<" SPC vectors, "<<failed<<" failures (registers/memory/instruction cycles)\n";
    return failed?1:0;
}
