#include "eb/battle_sprite_bus.hpp"
#include "eb/snes_bus.hpp"
#include <utility>

namespace eb {
std::uint8_t BattleSpriteBus::read(std::uint32_t address, std::uint8_t incoming_bus) {
    bus_.open_bus_ = incoming_bus;
    return bus_.read_byte(address);
}
void BattleSpriteBus::multiply(std::uint16_t columns, std::uint16_t rows) {
    // MULT16's three byte products retain the last hardware operands/result.
    // The native arithmetic already owns the product. Preserve the genuine
    // register writes and complete hardware latency before the aliased read.
    for (const auto& [a, b] : {std::pair{std::uint8_t(rows), std::uint8_t(columns)},
                             std::pair{std::uint8_t(rows >> 8), std::uint8_t(columns)},
                             std::pair{std::uint8_t(rows), std::uint8_t(columns >> 8)}}) {
        bus_.write_byte(0x4202, a);
        bus_.write_byte(0x4203, b);
        while (bus_.math_pending()) bus_.advance_cpu_cycles(1);
    }
}
} // namespace eb
