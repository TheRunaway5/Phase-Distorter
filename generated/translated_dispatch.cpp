// Generated from independent US and JP source builds. Do not edit.
// Cpu::version is fixed from the validated imported game. Select its own bank
// switches for every instruction; only the cartridge mirror mapping is common
// to both regions. The generated bank switches return false on unknown sites
// instead of executing bytes outside their statically compiled source entries.
#include "eb/cpu.hpp"
#include "generated_code.hpp"
#include "us/generated_code.hpp"
#include "jp/generated_code.hpp"
namespace eb {
bool translated_step(Cpu& c) {
    return c.version == GameVersion::JP ? jp::translated_step(c) : us::translated_step(c);
}
std::uint32_t canonical_rom_address(std::uint32_t address) { return us::canonical_rom_address(address); }
std::size_t translated_instruction_count(GameVersion version) {
    return version == GameVersion::JP ? jp::translated_instruction_count() : us::translated_instruction_count();
}
}
