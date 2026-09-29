// Generated from independent US and JP source builds. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include "generated_code.hpp"
#include "us/generated_code.hpp"
#include "jp/generated_code.hpp"
namespace eb {
bool execute_translated_main_instruction(MainCpu65816& cpu) {
    return cpu.game_version == GameVersion::JP ? jp::execute_translated_main_instruction(cpu) : us::execute_translated_main_instruction(cpu);
}
std::uint32_t canonical_rom_address(std::uint32_t address) { return us::canonical_rom_address(address); }
std::size_t translated_instruction_count(GameVersion version) {
    return version == GameVersion::JP ? jp::translated_instruction_count() : us::translated_instruction_count();
}
}
