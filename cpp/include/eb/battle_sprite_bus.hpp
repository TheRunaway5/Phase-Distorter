#pragma once
#include "eb/native/battle/startup_graphics.hpp"

namespace eb {
class SnesBus;
// Transitional hardware dependency for the original sprite-zero stream.
// Each actual bus read retains register side effects and the source address
// operation's incoming bus latch. Native DECOMP does not execute CPU code.
class BattleSpriteBus final : public native::battle::BattleSpriteReadSource {
public:
    explicit BattleSpriteBus(SnesBus& bus) : bus_(bus) {}
    std::uint8_t read(std::uint32_t address, std::uint8_t incoming_bus) override;
    void multiply(std::uint16_t columns, std::uint16_t rows) override;
private:
    SnesBus& bus_;
};
} // namespace eb
