// Generated from independent US and JP source builds. Do not edit.
#pragma once
#include <cstddef>
#include <cstdint>
#include "eb/game_version.hpp"
namespace eb {
class MainCpu65816;
bool execute_translated_main_instruction(MainCpu65816&);
std::uint32_t canonical_rom_address(std::uint32_t);
std::size_t translated_instruction_count(GameVersion version = GameVersion::US);
}
