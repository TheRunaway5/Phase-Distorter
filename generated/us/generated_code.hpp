// Generated from ca65 instruction spans. Do not edit.
#pragma once
#include <cstddef>
#include <cstdint>
namespace eb { class Cpu; }
namespace eb::us {
bool translated_step(Cpu&);
std::uint32_t canonical_rom_address(std::uint32_t address);
std::size_t translated_instruction_count();
}
