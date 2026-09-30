#pragma once
#include "eb/game_version.hpp"
#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>

namespace eb { class MainCpu65816; }
namespace eb::game::runtime {
// One retirement at a time keeps IRQ/NMI, DMA, audio and hardware frame delivery
// at the same points as the source program. False means this site is outside
// the port's ownership; an invalid continuation inside an owned routine throws.
bool execute_ported_instruction(MainCpu65816& cpu);
struct RoutineInfo {
    std::string_view name, subsystem, source;
    std::uint32_t first_address, last_address;
    std::size_t instruction_count;
};
// Code-site metadata only. No imported text, event bytecode, or actor tables.
struct InstructionSite {
    std::uint32_t address, operand;
    std::uint8_t opcode, length, width_flag;
};
std::span<const RoutineInfo> ported_routines(GameVersion version);
std::span<const InstructionSite> ported_sites(GameVersion version);
bool owns_ported_instruction(GameVersion version, std::uint32_t address);
std::size_t ported_instruction_count(GameVersion version);
} // namespace eb::game::runtime
