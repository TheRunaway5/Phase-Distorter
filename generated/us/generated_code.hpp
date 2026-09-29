// Generated from ca65 instruction spans. Do not edit.
#pragma once
#include <cstddef>
#include <cstdint>
namespace eb { class MainCpu65816; }
namespace eb::us {
bool execute_translated_main_instruction(MainCpu65816&);
std::uint32_t canonical_rom_address(std::uint32_t address);
std::size_t translated_instruction_count();
}
