// Source-derived runtime selection. Do not edit.
#include "eb/game/runtime/runtime.hpp"
#include "eb/main_cpu_65816.hpp"
#include <algorithm>
namespace eb::game::runtime {
namespace us { bool execute(MainCpu65816&,std::uint32_t); std::span<const RoutineInfo> catalogue(); std::span<const InstructionSite> instruction_sites(); }
namespace jp { bool execute(MainCpu65816&,std::uint32_t); std::span<const RoutineInfo> catalogue(); std::span<const InstructionSite> instruction_sites(); }
bool execute_ported_instruction(MainCpu65816& cpu) {
    auto address=cpu.program_counter & 0xFFFFFF;
    const auto bank=address >> 16;
    if (bank==0x7E || bank==0x7F || (!(bank & 0x40) && (address & 0xFFFF)<0x8000)) return false;
    address=0xC00000 | (address & 0x3FFFFF);
    if(address>=0xF00000) address-=0x100000;
    return cpu.game_version==GameVersion::JP ? jp::execute(cpu,address) : us::execute(cpu,address);
}
std::span<const RoutineInfo> ported_routines(GameVersion version) {
    return version==GameVersion::JP ? jp::catalogue() : us::catalogue();
}
std::span<const InstructionSite> ported_sites(GameVersion version) {
    return version==GameVersion::JP ? jp::instruction_sites() : us::instruction_sites();
}
bool owns_ported_instruction(GameVersion version, std::uint32_t address) {
    address &= 0xFFFFFF;
    const auto bank=address >> 16;
    if(bank==0x7E || bank==0x7F || (!(bank & 0x40) && (address & 0xFFFF)<0x8000)) return false;
    address=0xC00000 | (address & 0x3FFFFF);
    if(address>=0xF00000) address-=0x100000;
    const auto sites=ported_sites(version);
    const auto it=std::lower_bound(sites.begin(),sites.end(),address,[](const auto& site,auto a){return site.address<a;});
    return it!=sites.end() && it->address==address;
}
std::size_t ported_instruction_count(GameVersion version) {
    return version==GameVersion::JP ? 66678 : 69801;
}
}
