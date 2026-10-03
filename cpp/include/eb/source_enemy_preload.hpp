#pragma once

#include <cstdint>

namespace eb {
class SnesBus;
// Adapt only verified source enemy strip, retention and admission sites.
// Selection, random draws, terrain checks and creation remain authored work.
bool adapt_source_enemy_preload(const SnesBus &hardware, unsigned extension,
                               std::uint32_t pc, std::uint8_t opcode, unsigned length,
                               std::uint32_t &operand, std::uint16_t &accumulator,
                               std::uint16_t direct_page);
} // namespace eb
