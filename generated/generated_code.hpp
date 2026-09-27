// Generated from independent US and JP source builds. Do not edit.
// Entry point for one instruction selected from the frozen source program.
// A false result means no supported compiled site exists; callers must handle
// that failure rather than decode arbitrary cartridge bytes. Instruction counts
// describe generated sites, not proof that every gameplay path has been tested.
#pragma once
#include <cstddef>
#include <cstdint>
#include "eb/game_version.hpp"
namespace eb {
class Cpu;
bool translated_step(Cpu&);
std::uint32_t canonical_rom_address(std::uint32_t);
std::size_t translated_instruction_count(GameVersion version = GameVersion::US);
}
